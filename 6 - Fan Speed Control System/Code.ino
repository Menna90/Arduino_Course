/*
  Fan Speed Control Using Potentiometer, PWM, I2C LCD & Button Toggle

  Description:
  - Adjusts fan speed using a **potentiometer**.
  - Displays fan speed percentage on **I2C LCD**.
  - Allows **fan ON/OFF toggle** using a **push button**.
  - Uses **PWM** for smooth speed control.
*/

// Include necessary libraries
#include <LiquidCrystal_I2C.h>

// Define I2C LCD address & size
LiquidCrystal_I2C lcd_1(32, 16, 2); // 16x2 LCD with I2C interface

// Define pin numbers
const int potPin = A0;  // Potentiometer connected to A0
const int fanPin = 9;   // PWM output for fan speed
const int buttonPin = 2; // Button for ON/OFF toggle

bool fanState = true;  // Fan starts in ON state

void setup()
{
  pinMode(fanPin, OUTPUT);  // Set fan control pin as output
  pinMode(buttonPin, INPUT_PULLUP);  // Button with internal pull-up

  lcd_1.init();
  lcd_1.backlight();
  lcd_1.clear();
  lcd_1.setCursor(0, 0);
  lcd_1.print("Fan Speed Control");
}

void loop() {
  if (digitalRead(buttonPin) == LOW) {  // If button pressed
    fanState = !fanState;  // Toggle fan state
    delay(200);  // Prevent button bouncing
  }

  int potValue = analogRead(potPin);  // Read potentiometer value
  int fanSpeed = map(potValue, 0, 1023, 0, 255);  // Map to PWM range

  if (fanState) {
    analogWrite(fanPin, fanSpeed);  // Control fan speed via PWM
  	 // Display fan speed on LCD
  	lcd_1.setCursor(0, 1);
 	 lcd_1.print("Speed: ");
 	 lcd_1.print(map(fanSpeed, 0, 255, 0, 100));  // Convert PWM to percentage
 	 lcd_1.print("%   ");
  } else {
    analogWrite(fanPin, 0);  // Turn fan OFF
    lcd_1.setCursor(0, 1);
  	lcd_1.print("Fan is OFF  ");
  }
}
