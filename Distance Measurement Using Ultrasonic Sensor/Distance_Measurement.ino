/*
  Distance Measurement Using HC-SR04 Ultrasonic Sensor & Arduino Uno

  Description:
  This program uses an HC-SR04 ultrasonic sensor to measure distance.
  The sensor sends out an ultrasonic pulse and listens for the echo.
  The Arduino calculates the time taken for the pulse to return and
  converts it into distance.

  Formula Used:
  Distance = (Time * Speed of Sound) / 2
  where:
  - Time = Pulse travel time in microseconds.
  - Speed of sound = 343 m/s or 0.0343 cm/µs.
  - Divide by 2 since the pulse travels to the object and back.
*/

// Define the pin numbers for the HC-SR04 sensor
const int trigPin = 10;   // Trigger pin connected to digital pin 10
const int echoPin = 9;  // Echo pin connected to digital pin 9

void setup() {
  pinMode(trigPin, OUTPUT); // Set Trigger pin as output
  pinMode(echoPin, INPUT);  // Set Echo pin as input
  Serial.begin(9600);       // Initialize serial communication for debugging
}

void loop() {
  // Send ultrasonic pulse
  digitalWrite(trigPin, LOW);  
  delayMicroseconds(2);  // Ensure clean pulse start
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);  // Pulse duration of 10 microseconds
  digitalWrite(trigPin, LOW);

  // Measure echo return time
  long duration = pulseIn(echoPin, HIGH); 

  // Convert time to distance (in cm)
  float distance = (duration * 0.0343) / 2;

  // Print the distance on Serial Monitor
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  delay(500); // Wait before next measurement
}
