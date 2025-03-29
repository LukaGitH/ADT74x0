# ADT74x0 Arduino Library

This Arduino project provides a simple interface for reading temperature data from Analog Devices **ADT74x0** digital temperature sensors over I2C.

## 📦 What's Included

- `ADT74x0.h` / `ADT74x0.cpp`: A lightweight class to interface with the sensor
- `ADT74x0.ino`: Example sketch demonstrating how to read temperature
- MIT License

## 🔧 Hardware

- Arduino board (Uno, Nano, etc.)
- ADT7410 or ADT7420 sensor (I2C)
- Optional: Analog Devices Eval-ADT7420-PMDZ evaluation board

## 🔌 Connecting the Eval-ADT7420-PMDZ

The Eval-ADT7420-PMDZ uses an 8-pin header (P1) for I2C and power. You can connect it to an Arduino as follows:

| P1 Pin | Function       | Connect to Arduino Uno |
|--------|----------------|-------------------------|
| 1 or 2 | SCL (Clock)    | A5                      |
| 3 or 4 | SDA (Data)     | A4                      |
| 5 or 6 | GND (Ground)   | GND                     |
| 7 or 8 | VDD (Power)    | 3.3V or 5V              |

> ✅ The sensor supports **both 3.3V and 5V logic**, so it's safe to use with standard Arduino boards.

## 🧠 How It Works

The `ADT74x0` class uses the `Wire` library to communicate over I2C. It reads the 16-bit temperature register and converts the result into degrees Celsius, supporting both positive and negative values.


