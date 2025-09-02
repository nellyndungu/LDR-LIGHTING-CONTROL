# LIGHT DEPENDENT CONTROL SYSTEM
This project demonstrates a light-dependent traffic control system using an Arduino Uno, a Light Dependent Resistor (LDR), and an LCD-display. The system simulates traffic light operation by controlling three LEDs (Stop, Ready, and Go) based on the intensity of light falling on the LDR.
An LCD module (16×2) is used to display the real-time ADC (Analog-to-Digital Converter) values read from the LDR sensor. The LDR acts as the system’s input sensor, while the LEDs act as the output indicators.
This type of system can be used for traffic management simulations, automatic signaling systems, or light intensity–controlled applications.

## Working principle
1. LDR sensing
-The LDR is connected as a voltage divider with a 10kΩ resistor. Its resistance varies with light intensity:
    - More light → Lower resistance → Higher ADC reading.
    - Less light → Higher resistance → Lower ADC reading.
The Arduino reads this value through analog pin A0.
2. LCD display
- The mapped ADC value (0–255) is continuously displayed on the 16×2 LCD.
- This provides real-time feedback of the detected light level.
3. LED Control Logic (Traffic Light Simulation)
Based on the LDR value, different LEDs are activated:
- LDR = 0 → All LEDs OFF.
- LDR > 0 → STOP (Red) LED ON.
- LDR > 96 → READY (Yellow) LED ON.
- LDR > 192 → GO (Green) LED ON.
At any given time, only one LED remains active, simulating a traffic light cycle controlled by light intensity.
4. Loop Operation
The system continuously monitors the LDR and updates both the LCD-display and LED outputs accordingly.
## Components Used
1. Hardware (in simulation via Proteus)
- Arduino Uno – The microcontroller that reads the LDR sensor values and controls the LEDs and LCD.
- Light Dependent Resistor (LDR) – Input sensor to detect light intensity.
- 10kΩ Resistor – Used with the LDR to form a voltage divider circuit.
- LEDs (3 units) – Represent traffic lights:
    - Red LED → STOP
    - Yellow LED → READY
    - Green LED → GO
- 16×2 LCD-Display – Displays ADC values of the LDR in real time.
- Resistors (330Ω × 3) – Current-limiting resistors for LEDs.
2. Software
- Arduino IDE – For coding and generating the HEX file.
- Proteus 8 Professional – For designing the circuit schematic and simulating the project.
