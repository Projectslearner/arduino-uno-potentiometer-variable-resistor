# Potentiometer Variable Resistor with Arduino

#### Project Overview

This project demonstrates how to use a potentiometer (variable resistor) with an Arduino to read analog values and convert them to corresponding voltage readings, which are then displayed on the Serial Monitor.

#### Components Needed

1. **Arduino Board**
2. **Potentiometer (Variable Resistor)**
3. **Jumper Wires**
4. **Breadboard (optional)**

### Block Diagram



#### Pin Connections

1. **Potentiometer:**
   - **VCC (Left Pin)**: Connect to Arduino 5V
   - **GND (Right Pin)**: Connect to Arduino GND
   - **Output (Middle Pin)**: Connect to Arduino analog pin A1

#### Instructions

1. **Set Up the Circuit:**
   - Connect the potentiometer's VCC pin to the Arduino 5V.
   - Connect the potentiometer's GND pin to the Arduino GND.
   - Connect the potentiometer's output pin (middle pin) to the Arduino analog pin A1.

2. **Initialize the System:**
   - Start the serial communication at a baud rate of 9600 in the `setup()` function using `Serial.begin(9600);`.

3. **Read and Convert Analog Values:**
   - In the `loop()` function, read the analog value from the potentiometer connected to pin A1 using `analogRead(A1);`.
   - Convert the analog value to a corresponding voltage by using the formula `voltage = rawValue * (5.0 / 1023.0);`.

4. **Output Results:**
   - Print the voltage value to the Serial Monitor with appropriate labels for clarity.
   - Introduce a short delay of 100 milliseconds between readings to prevent flooding the Serial Monitor.

#### Applications

- **Adjustable Voltage Divider:** Use the potentiometer as an adjustable voltage divider in various circuits.
- **User Input Device:** Use the potentiometer to control parameters in interactive projects, such as volume, brightness, or motor speed.
- **Educational Tool:** Demonstrate the principles of variable resistors and analog-to-digital conversion in educational settings.

---

🌐 [projectslearner.com](https://projectslearner.com/learn/arduino-uno-potentiometer-variable-resistor)  
📧 [projectslearner@gmail.com](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)  

Made for you with ❣️ from ProjectsLearner