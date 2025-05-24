/*
 * When the button is pressed, the LED starts blinking.
 * When the button is pressed again, the LED stops blinking.
 * Acts like a toggle switch using software logic.
 */

const int ledPin = 13;      // Define LED pin
const int buttonPin = 2;    // Define button pin
bool ledState = false;      // LED state (on/off)
bool buttonPressed = false; // Track button press state

void setup() {
    pinMode(ledPin, OUTPUT);    // Set LED pin as output
    pinMode(buttonPin, INPUT_PULLUP); // Set button pin as input with internal pull-up resistor
}

void loop() {
    if (digitalRead(buttonPin) == LOW) { // Check if button is pressed (LOW due to pull-up)
        if (!buttonPressed) { // Ensure only one press is registered per press-release cycle
            ledState = !ledState; // Toggle LED state
            buttonPressed = true; // Mark button as pressed
        }
    } else {
        buttonPressed = false; // Reset button state when released
    }

    if (ledState) {
        digitalWrite(ledPin, HIGH);  // Turn LED on
        delay(500);                  // Keep LED on for 500ms
        digitalWrite(ledPin, LOW);   // Turn LED off
        delay(500);                  // Keep LED off for 500ms
    } else {
        digitalWrite(ledPin, LOW);   // Ensure LED is off when not blinking
    }
}
