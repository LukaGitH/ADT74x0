# ADT74x0 Arduino Library

This Arduino project provides a simple interface for reading temperature data from Analog Devices **ADT74x0** digital temperature sensors over I2C.

## 📦 What's Included

- `ADT74x0.h` / `ADT74x0.cpp`: A lightweight class to interface with the sensor
- `ADT74x0.ino`: Example sketch demonstrating how to read temperature
- MIT License

## 🔧 Hardware

- Arduino board (Uno, Nano, etc.)
- ADT7410 or ADT7420 sensor (I2C)

## 🧠 How It Works

The class uses the Wire library to communicate with the sensor and convert the 16-bit data into Celsius.

