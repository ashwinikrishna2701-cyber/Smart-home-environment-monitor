# Smart Home Environment Monitor

## Project Overview

The Smart Home Environment Monitor is an embedded system designed to monitor indoor environmental conditions using sensors and a microcontroller.

## Objectives

- Monitor temperature and humidity.
- Monitor indoor air quality.
- Detect motion.
- Monitor ambient light.
- Display sensor information locally.
- Send data through Wi-Fi.
- Generate alerts when environmental conditions exceed set limits.
- Provide optional automatic ventilation control.

## Hardware Components

- ESP32-S3 Microcontroller
- Temperature and Humidity Sensor
- Air Quality Sensor
- PIR Motion Sensor
- Light Sensor
- OLED Display
- Relay Module
- Power Supply
- Optional Li-ion Battery

## Software

- Arduino IDE
- Embedded C/C++
- ESP32 firmware
- Wi-Fi communication
- MQTT/HTTPS communication

## System Architecture

The system follows:

**Sensors → ESP32 → Data Processing → Display / Wi-Fi → Mobile or Cloud Dashboard**

The ESP32 processes sensor data and can control a ventilation device when predefined conditions are detected.

## Project Documentation

The detailed system requirements, architecture, block diagram, design choices, power management, security considerations and testing plan are provided in the project PDF.

## Future Enhancements

- CO2 sensor
- PM2.5/PM10 monitoring
- Mobile application
- Secure OTA firmware updates
- Long-term data analytics
- Battery monitoring

## Author

Ashwini.g
