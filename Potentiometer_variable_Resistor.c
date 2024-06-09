/*
    Project name : Potentiometer Variable Resistor
    Modified Date: 09-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-uno-potentiometer-variable-resistor
*/

void setup() 
{
  Serial.begin(9600); // Initialize serial communication at 9600 baud
}

void loop() 
{
  int rawValue = analogRead(A1); // Read the analog value from pin A0
  
  // Convert the analog value to voltage
  float voltage = rawValue * (5.0 / 1023.0); 

  // Print the voltage value to the serial monitor
  Serial.print("Voltage: ");
  Serial.print(voltage);
  Serial.println(" Volts");

  delay(100); // Delay to avoid flooding the serial monitor
}
