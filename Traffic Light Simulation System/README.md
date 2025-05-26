# 🚦 Traffic Light Simulation System – Arduino Uno

## 🔍 Overview  
This beginner-friendly Arduino project simulates a simple traffic light system using three LEDs. It's perfect for learning basic digital output control with Arduino and understanding real-world timing concepts used in embedded systems.

## 🎯 Objective  
- Simulate a traffic light sequence using Red, Yellow, and Green LEDs  
- Learn how to control digital pins for output operations  
- Understand timing functions like `delay()` for sequencing events  
- Build a practical understanding of how traffic signals work

## 🧰 Components Used  
- Arduino Uno  
- Red LED  
- Yellow LED  
- Green LED  
- Resistors (220Ω recommended)  
- Breadboard  
- Jumper wires  
- USB cable for programming

## ⚙️ How It Works  
- The program turns on each LED in a specific sequence to mimic real-world traffic signals:  
  1. **Red** light turns ON for 5 seconds (Stop)  
  2. **Yellow** light turns ON for 2 seconds (Prepare to stop)  
  3. **Green** light turns ON for 5 seconds (Go)  
- The sequence repeats indefinitely using the `loop()` function.  
- Each LED is connected to a dedicated digital pin, and controlled using `digitalWrite()`.

## 🛠️ Circuit Diagram  
### LED Connections  

| LED Color | Arduino Pin |
|-----------|-------------|
| Red       | D9          |
| Yellow    | D10         |
| Green     | D11         |

> 💡 Connect each LED in series with a resistor (e.g., 220Ω) to limit current and protect the LEDs.

## 📓 Notes  
- Ensure each LED is correctly oriented (long leg to digital pin via resistor, short leg to GND).  
- Adjust the `delay()` times to experiment with different traffic light timings.  
- Useful for classroom demonstrations, embedded systems learning, or DIY traffic signal models.  
- You can expand this project by adding pedestrian buttons, buzzers, or LCD displays.
