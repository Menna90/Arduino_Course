// C++ code
/*
 * Arduino Uno code for displaying temperature using an LM35 sensor and a 16x2 LCD.
 * - Reads temperature from LM35 (analog sensor).
 * - Displays the temperature on the LCD.
 * - Uses I2C interface to communicate with the LCD for simpler wiring.
 */

#include <LiquidCrystal_I2C.h>  // Include library for I2C LCD

#define LM35_PIN A0 // LM35 output connected to Analog Pin A0
#define LCD_ADDR 32 // I2C address of the LCD (may vary based on hardware)

LiquidCrystal_I2C lcd_1(LCD_ADDR, 16, 2); // Initialize LCD with address, 16 columns, and 2 rows

void setup()
{
  lcd_1.init(); // Initialize the LCD  
  lcd_1.backlight(); // Turn on the LCD backlight
  lcd_1.setCursor(0, 0); // Set cursor to the first row, first column
  lcd_1.clear(); // Clear the LCD
  lcd_1.print("Temperature: "); // Print a label
}

void loop()
{
   int sensorValue = analogRead(LM35_PIN); // Read analog value from LM35
    float temperature = sensorValue * 0.488; // Convert ADC value to temperature (Celsius)

    lcd_1.setCursor(0, 1); // Move cursor to the second row
    lcd_1.print(temperature); // Display temperature value
    lcd_1.print(" C"); // Print unit (Celsius)

    delay(1000); // Wait 1 second before refreshing the reading

}
