# Arduino Nano 33 BLE Sense Experiments

This repository contains a collection of experiments and mini-projects developed using the **Arduino Nano 33 BLE Sense**. Each experiment demonstrates the use of different onboard sensors, peripherals, communication protocols, and embedded system concepts.

---

## Experiment 1 – LED Blink
- Blinked the onboard LED.
- Verified successful code upload and board functionality.

---

## Experiment 2 – Serial Name
- Printed my name on the Serial Monitor.
- Verified serial communication between the Arduino and the computer.

---

## Experiment 3 – Analog Input & Output
- Read analog values from pin A6.
- Displayed sensor values on the Serial Monitor.
- Generated PWM output using `analogWrite()`.

---

## Experiment 4 – Color Detection
- Used the onboard APDS9960 color sensor.
- Detected Red, Green, and Blue objects.
- Displayed detected colors on the Grove RGB LCD.
- Changed the LCD backlight according to the detected color.
- Printed RGB values to the Serial Monitor.

---

## Experiment 5 – BLE Accelerometer Data Transmission
- Read real-time X, Y, and Z acceleration values using the onboard LSM9DS1 IMU.
- Transmitted accelerometer data wirelessly using Bluetooth Low Energy (BLE).
- Connected to the mobile device using the **Bluefruit LE Connect** application.
- Displayed live sensor readings on the smartphone over BLE.

---

## Experiment 6 – Bluetooth LE RGB LED Control
- Established BLE communication using the Bluefruit LE Connect application.
- Controlled the onboard RGB LED wirelessly from a smartphone.
- Processed BLE controller commands to change LED colors.
- Demonstrated real-time bidirectional BLE communication.

---

## Other Projects Included

- Bare Metal Timer
- MBED OS LED Blink & Hello World
- Musical Note Detection
- Proximity-Based RGB LED Control
- Temperature and Humidity Monitoring
- Watchdog Timer (WDT) Functionality
- SnakeAI
- Additional Analog and Basic Arduino Experiments

---

## Hardware Used
- Arduino Nano 33 BLE Sense
- Grove RGB LCD
- USB Cable
- Smartphone with Bluefruit LE Connect
- Analog Sensors
- Onboard IMU (LSM9DS1)
- Onboard APDS9960 Color Sensor

---

##
