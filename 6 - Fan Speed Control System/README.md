# 🌬️ Fan Speed Control System – Arduino Uno

## 🔍 Overview  
This beginner-friendly Arduino project allows you to control the speed of a fan using a potentiometer. It features real-time speed display on an I2C LCD and a button to toggle the fan ON or OFF. The project utilizes **PWM** (Pulse Width Modulation) for smooth speed transitions.

## 🎯 Objective  
- Control fan speed using a **potentiometer**  
- Display speed percentage on a **16x2 I2C LCD**  
- Use a **push button** to toggle fan ON/OFF  
- Learn how to implement **PWM** and **digital input** on Arduino  
- Understand basic embedded system control interfaces

## 🧰 Components Used  
- Arduino Uno  
- DC Fan (PWM-compatible)  
- Potentiometer  
- Push Button  
- 16x2 LCD with I2C interface  
- 10kΩ resistor (for potentiometer)
- - NPN Transistor (e.g., TIP120, 2N2222, or IRF540 MOSFET)
- Diode (e.g., 1N4007)  
- Breadboard  
- Jumper wires  
- USB cable for programming

## ⚙️ How It Works  
- The **potentiometer** sets the fan speed by sending an analog value to the Arduino.  
- This value is **mapped** to a PWM signal (0–255) to control the fan.  
- The **I2C LCD** displays the current fan speed as a percentage.  
- A **push button** toggles the fan ON/OFF using internal pull-up and state switching.  
- The system continuously reads inputs and updates the fan output and display in the `loop()`.

## 🛠️ Circuit Diagram  
### Pin Connections  

### 🎛️ Potentiometer Connections  

| Potentiometer Pin | Connects To     |
|-------------------|-----------------|
| Middle Pin        | A0 (Arduino)    |
| One Outer Pin     | 5V (Arduino)    |
| Other Outer Pin   | GND (Arduino)   |

### 🔘 Button for ON/OFF Toggle  

| Button Pin | Connects To         |
|------------|---------------------|
| One Leg    | D2 (Arduino)        |
| Other Leg  | GND                 |

> 📝 Uses Arduino's internal pull-up resistor (`INPUT_PULLUP` mode)

### 📟 I2C LCD Module Connections  

| LCD Pin | Connects To     |
|---------|-----------------|
| VCC     | 5V (Arduino)    |
| GND     | GND (Arduino)   |
| SDA     | A4 (Arduino)    |
| SCL     | A5 (Arduino)    |

### 🔁 Transistor Circuit for Fan Control  

| Component        | Connects To                            |
|------------------|----------------------------------------|
| Collector (C)    | Negative terminal of the fan           |
| Emitter (E)      | GND                                    |
| Base (B)         | D9 (Arduino) via 220Ω resistor         |
| Fan + Terminal   | External 12V power source              |
| Diode (1N4007)   | Across fan terminals (Cathode to +12V, Anode to GND) |

> 💡 Transistor allows the Arduino to switch a 12V fan using a low-power PWM signal. Diode protects against back EMF from the fan.
> 💡 Use a PWM-capable pin (like D9) for the fan and ensure your LCD address is correctly set (e.g., `0x20`, `0x27`, or `0x3F` depending on module).

## 📓 Notes  
- The button uses `INPUT_PULLUP` mode, so it should connect to **GND** when pressed.  
- A short delay (`200 ms`) is used to prevent button bounce during toggling.  
- LCD will show either **"Fan is OFF"** or **current speed** in `%`.  
- You can customize the fan PWM mapping or LCD messages as needed.

## 📜 License  
This project is open-source under the MIT License.
