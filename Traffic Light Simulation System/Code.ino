/*
  Traffic Light Simulation System using Arduino Uno

  Description:
  This program simulates a simple traffic light system with three LEDs:
  - **Red LED** (Stop)
  - **Yellow LED** (Prepare to stop)
  - **Green LED** (Go)

  The LEDs turn on/off sequentially to mimic real traffic signals.
*/

// Define pin numbers for LEDs
const int redLED = 9;    // Red LED connected to digital pin 9
const int yellowLED = 10; // Yellow LED connected to digital pin 10
const int greenLED = 11;  // Green LED connected to digital pin 11

void setup() {
  // Set all LED pins as OUTPUT
  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
}

void loop() {
  // **RED Light ON** (Stop)
  digitalWrite(redLED, HIGH);    // Turn ON Red LED
  digitalWrite(yellowLED, LOW);  // Turn OFF Yellow LED
  digitalWrite(greenLED, LOW);   // Turn OFF Green LED
  delay(5000);  // Wait for 5 seconds
  
  // **YELLOW Light ON** (Prepare to Stop)
  digitalWrite(redLED, LOW);     // Turn OFF Red LED
  digitalWrite(yellowLED, HIGH); // Turn ON Yellow LED
  digitalWrite(greenLED, LOW);   // Turn OFF Green LED
  delay(2000);  // Wait for 2 seconds
  
  // **GREEN Light ON** (Go)
  digitalWrite(redLED, LOW);     // Turn OFF Red LED
  digitalWrite(yellowLED, LOW);  // Turn OFF Yellow LED
  digitalWrite(greenLED, HIGH);  // Turn ON Green LED
  delay(5000);  // Wait for 5 seconds
  
  // Loop repeats to simulate continuous traffic light operation
}
