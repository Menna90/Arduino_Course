# LED Blinker with Button Control – Arduino Uno

## 🔍 Overview
This beginner Arduino project demonstrates how to control the blinking of an LED using a push button. Each button press toggles the blinking behavior ON or OFF using a software switch.

## 🎯 Objective
- Learn digital input (button) and digital output (LED)
- Understand internal pull-up resistors and debouncing logic
- Create a basic toggle switch in code

## 🧰 Components Used
- Arduino Uno
- LED
- 220Ω resistor
- Push button
- Breadboard + jumper wires
- (Optional) 10kΩ resistor for external pull-down

## ⚙️ How It Works
- The button is connected to digital pin 2.
- The LED is connected to digital pin 13.
- Internal pull-up resistor is used for button input.
- A debouncing algorithm ensures stable button press detection.
- The LED blinks when the toggle is active.

## 🛠️ Circuit Diagram
You can simulate this on [Tinkercad Circuits](https://www.tinkercad.com/circuits) or use a breadboard.

## 📜 License
This project is open-source under the MIT License.
