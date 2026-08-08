# Project 2: Automated Irrigation Controller

## DecodeLabs IoT Internship

### Project Objective

The Automated Irrigation Controller is a closed-loop IoT system that monitors soil moisture and controls a water pump using a 5V relay module.

### Main Features

- Reads analog data from a soil moisture sensor.
- Uses ADC to process the sensor signal.
- Uses threshold-based control logic.
- Controls a 5V relay module.
- Simulates automatic water pump control.
- Demonstrates closed-loop automation.

### Hardware Required

- ESP32 Development Board
- Soil Moisture Sensor
- 5V Relay Module
- Water Pump
- Power Supply
- Jumper Wires

### Working Principle

The soil moisture sensor provides an analog signal to the ESP32.

The ESP32 reads the sensor value using its ADC and checks the value against a predefined threshold.

If the soil is dry, the ESP32 activates the relay and the water pump turns ON.

When sufficient moisture is detected, the relay turns OFF and the pump stops.

### Control Flow

Soil Moisture Sensor
        ↓
Analog Input / ADC
        ↓
Threshold Logic
        ↓
Digital Output
        ↓
5V Relay
        ↓
Water Pump

### Project Skills

- Analog-to-Digital Conversion (ADC)
- Embedded C/C++
- Sensor Interfacing
- Relay Control
- Threshold Logic
- Closed-Loop Automation

### Safety

The water pump must not be connected directly to an ESP32 GPIO pin.

Use a properly rated relay and suitable power supply.

