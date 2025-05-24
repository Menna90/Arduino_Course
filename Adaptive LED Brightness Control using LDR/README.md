# 🌗 Adaptive LED Brightness Control using LDR

## 🔍 Overview  
This beginner-friendly Arduino project demonstrates how to automatically adjust the brightness of an LED based on ambient light using an LDR (Light Dependent Resistor). It’s a great introduction to analog sensors, PWM (Pulse Width Modulation), and basic automation using Arduino.

## 🎯 Objective  
- Learn how to interface an LDR with Arduino  
- Understand analog-to-digital conversion using `analogRead()`  
- Control LED brightness using `analogWrite()` and PWM  
- Observe real-time light readings using the Serial Monitor  

## 🧰 Components Used  
- Arduino Uno  
- LDR (Light Dependent Resistor)  
- 10kΩ resistor (for voltage divider)  
- LED  
- 220Ω resistor (for LED current limiting)  
- Breadboard and jumper wires  

## ⚙️ How It Works  
- The LDR is part of a voltage divider that changes voltage based on light intensity.  
- The analog output from the divider is connected to pin A0.  
- Arduino reads this value using `analogRead()` and maps it to a PWM value using `map()`.  
- The LED connected to pin 9 adjusts its brightness accordingly.  
- Brighter ambient light results in a dimmer LED, and vice versa.

## 🛠️ Circuit Diagram  
### LDR Voltage Divider

| Pin         | Connection   |
|-------------|--------------|
| LDR End 1   | 5V           |
| LDR End 2   | A0 & to 10kΩ |
| 10kΩ End 1  | A0           |
| 10kΩ End 2  | GND          |

### LED

| LED Pin     | Connection            |
|-------------|-----------------------|
| Anode (+)   | PWM Pin 9             |
| Cathode (-) | GND via 220Ω resistor |

## 📓 Notes
-The map() function inverts brightness: more light → dimmer LED
-The value read by analogRead() ranges from 0 (dark) to 1023 (bright)
-The output PWM value for analogWrite() ranges from 0 to 255
-Serial Monitor helps in visualizing how the LDR readings change
-You can fine-tune the mapping range for specific ambient conditions
