# 📏 Distance Measurement with HC-SR04 Sensor – Arduino Uno

## 🔍 Overview  
This beginner-friendly Arduino project demonstrates how to measure distance using the HC-SR04 ultrasonic sensor. It’s ideal for understanding the basics of interfacing digital sensors and performing time-based calculations using Arduino.

## 🎯 Objective  
- Learn how to interface the HC-SR04 ultrasonic sensor with Arduino Uno  
- Measure distance using ultrasonic sound waves  
- Use serial communication to monitor distance readings  
- Practice basic timing and digital I/O operations in Arduino

## 🧰 Components Used  
- Arduino Uno  
- HC-SR04 Ultrasonic Sensor  
- Breadboard  
- Jumper wires  
- USB cable for programming

## ⚙️ How It Works  
- The HC-SR04 sensor sends out an ultrasonic pulse via the **Trig** pin.  
- The pulse reflects off an object and is received back via the **Echo** pin.  
- The Arduino measures the time (in microseconds) it takes for the pulse to return.  
- The distance is calculated using the formula:  Distance (cm) = (Time * 0.0343) / 2
where 0.0343 cm/µs is the speed of sound in air, and division by 2 accounts for the round trip of the pulse.  
- The result is printed to the Serial Monitor.

## 🛠️ Circuit Diagram  
### HC-SR04 Sensor Connections  

| HC-SR04 Pin | Arduino Pin |
|-------------|-------------|
| VCC         | 5V          |
| GND         | GND         |
| Trig        | D10         |
| Echo        | D9          |

## 📓 Notes  
- Ensure accurate pulse timing by using `delayMicroseconds()` for short delays.  
- Use the Serial Monitor (set to 9600 baud) to view real-time distance readings.  
- Avoid placing objects too close (<2 cm) or too far (>400 cm) for reliable measurements.  
- Keep sensor surface unobstructed for optimal performance.

