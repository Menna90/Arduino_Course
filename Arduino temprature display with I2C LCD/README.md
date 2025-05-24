# Temperature Display with LM35 Sensor – Arduino Uno

## 🔍 Overview  
This beginner-friendly Arduino project demonstrates how to measure ambient temperature using an **LM35 analog temperature sensor** and display it on a **16x2 LCD** using the **I2C interface**. It’s ideal for learning how to work with analog sensors and LCD outputs in Arduino.

## 🎯 Objective  
- Learn how to interface an analog temperature sensor (LM35)  
- Display real-time sensor data on a 16x2 LCD  
- Use I2C communication to reduce wiring complexity  
- Practice basic analog-to-digital conversion in Arduino

## 🧰 Components Used  
- Arduino Uno  
- LM35 temperature sensor  
- 16x2 LCD with I2C interface  
- Breadboard and jumper wires  

## ⚙️ How It Works  
- The LM35 sensor outputs 10 mV for each °C.  
- The sensor’s analog output is connected to pin A0.  
- The Arduino reads the voltage and converts it into Celsius using the formula:  
  `temperature = analogRead(A0) * 0.488`  
- The LCD is connected using the I2C interface (typically pins A4 and A5 on Uno).  
- The LCD updates every second with the current temperature.

## 🛠️ Circuit Diagram  
### **LM35 Sensor**  
| Pin | Connection  |  
|-----|-------------|  
| VCC | 5V          |  
| GND | GND         |  
| OUT | A0          |  

### **I2C LCD (for Arduino Uno)**  
| Pin | Arduino Pin |  
|-----|-------------|  
| VCC | 5V          |  
| GND | GND         |  
| SDA | A4          |  
| SCL | A5          |  

## 📓 Notes  
- The I2C address in the code is set to `32`. You may need to scan and change it to match your hardware (e.g., `0x27` or `0x3F`).  
- The project assumes a 5V operating voltage. If using a 3.3V board, adjust the conversion factor accordingly.  
- You can limit decimal points on the LCD using `lcd.print(temperature, 1);`  
- Install the `LiquidCrystal_I2C` library from the Arduino Library Manager.

### 📜 License  
This project is open-source under the MIT License.
