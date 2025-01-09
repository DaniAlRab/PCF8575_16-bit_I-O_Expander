![Under Construction](https://img.shields.io/badge/status-under--construction-yellow)

# PCF8575 I/O Expander Blink Control

## Project Overview
This project demonstrates the use of a **PCF8575 I/O Expander** with an ESP32 microcontroller to control 16 digital I/O pins over the I2C bus. The code enables all pins on the PCF8575 to blink in a sequential pattern, turning them on and off with a delay.

---

## Key Features
- **I/O Expansion:**
  - Controls up to 16 digital pins using a PCF8575 I/O Expander.
  - Configures the I2C address to communicate with the PCF8575.

- **Sequential Blinking:**
  - Turns all pins on one by one with a delay.
  - Turns all pins off one by one with a delay.

- **Hardware Control:**
  - Includes an enable pin to control the power or activation of the PCF8575.

---

## Hardware Requirements
- **ESP32 Development Board**
- **PCF8575 I/O Expander**
- **I2C Bus**:
  - SDA: GPIO 21
  - SCL: GPIO 22
- **Enable Pin:**
  - Connected to GPIO 33
- **External Pull-up Resistors:**
  - Recommended for I2C lines if not already integrated into the hardware.

---

## Workflow
1. **Initialization:**
   - Configures the I2C bus with the specified SDA and SCL pins.
   - Initializes the PCF8575 at address `0x20`.
   - Verifies the connection and halts execution if the device is not found.

2. **Sequential Pin Control:**
   - Turns all pins on sequentially with a 250ms delay between each.
   - Waits for 2 seconds after all pins are on.
   - Turns all pins off sequentially with a 250ms delay between each.
   - Waits for another 2 seconds before repeating the process.

---

## Configuration
- **PCF8575 Address:**
  - Default address is set to `0x20` in the code.
  - Adjust if the I2C address of your device is different.

- **I2C Bus Pins:**
  - SDA: GPIO 21
  - SCL: GPIO 22

- **Enable Pin:**
  - Defined as GPIO 33 in the code to activate the PCF8575.

---

## Requirements
- **Arduino IDE or PlatformIO**
- Libraries:
  - `Wire.h`
  - `PCF8575.h`

---

## Usage
1. Connect the hardware according to the specified pin configuration.
2. Upload the code to the ESP32.
3. Observe the sequential blinking pattern on all pins of the PCF8575.

---

## Example Log Output
```
PCF8575 initialized successfully!
All pins on...
All pins off...
```

---

## Notes
- The PCF8575 must be connected to the I2C bus, and its address should match the configured address in the code.
- Ensure proper pull-up resistors on the I2C lines if not integrated.
- The enable pin can be used to control the power to the PCF8575 dynamically.

---

## License
This project is licensed under the MIT License.

---

## Author
Chappie - Electrical Engineer with expertise in electronics, microcontrollers, and I2C-based devices.


