/*
  Adaptive LED Brightness Control using LDR and Arduino Uno

  Description:
  This program reads the light intensity using an LDR connected to an analog input.
  The LED brightness adjusts **proportionally** to the light intensity using PWM.
*/

// Define the pin numbers
const int ldrPin = A0;  // LDR sensor connected to analog pin A0
const int ledPin = 9;   // LED connected to PWM-capable digital pin 9

void setup() {
  pinMode(ledPin, OUTPUT);  // Set the LED pin as an output
  Serial.begin(9600);       // Initialize serial communication for debugging
}

void loop() {
  int lightValue = analogRead(ldrPin);  // Read the light intensity from the LDR

  Serial.print("Light Intensity: ");
  Serial.println(lightValue);  // Print the light intensity value to the Serial Monitor

  // Map the light intensity (0-1023) to LED brightness (0-255) so brighter light makes the LED dimmer
  int ledBrightness = map(lightValue, 0, 1023, 255, 0);  
  analogWrite(ledPin, ledBrightness);  // Set LED brightness using PWM

  delay(100);  // Short delay to smooth transitions
}
