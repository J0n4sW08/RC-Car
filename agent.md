# DIY RC Car on Raspberry Pi Pico W (C++)

## Hardware Available
- Raspberry Pi Pico W
- Raspberry Pi 5
- ESP32

## Architecture Decision
Use the Raspberry Pi Pico W as the main vehicle controller.

Reason:
- Real-time capable
- Better for PWM than Linux systems
- Suitable for motor control
- Suitable for servo control
- Supports interrupt-based encoder reading
- C/C++ is well supported

Use Raspberry Pi 5 later only for:
- Camera
- OpenCV
- Autonomous navigation
- Telemetry
- Web interface

Optional:
Use ESP32 for wireless remote control or telemetry.

---

# Language
Use C++.

Reason:
- Standard for embedded systems
- Direct hardware access
- Fast execution
- Good control over timing
- Compatible with Pico SDK

---

# Toolchain
Use:
- CMake
- Pico SDK
- g++
- make

Optional:
- Visual Studio Code
- PlatformIO

---

# Minimal Project Structure

```text
rc-car/
├── CMakeLists.txt
├── main.cpp
└── build/
```

---

# Example main.cpp

```cpp
#include "pico/stdlib.h"

int main() {
    const uint LED_PIN = 25;

    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);

    while (true) {
        gpio_put(LED_PIN, 1);
        sleep_ms(500);

        gpio_put(LED_PIN, 0);
        sleep_ms(500);
    }
}
```

Note:
For Pico W the onboard LED handling may differ from classic Pico. Check Pico W examples if LED25 does not blink. :contentReference[oaicite:0]{index=0}

---

# CMakeLists.txt

```cmake
cmake_minimum_required(VERSION 3.13)

include(pico_sdk_import.cmake)

project(rc_car)

pico_sdk_init()

add_executable(rc_car
    main.cpp
)

target_link_libraries(rc_car pico_stdlib)

pico_add_extra_outputs(rc_car)
```

---

# Build

```bash
mkdir build
cd build
cmake ..
make
```

Output:
```text
rc_car.uf2
```

---

# Flash Raspberry Pi Pico W

## Method: UF2 Flash

1. Disconnect Pico

2. Hold BOOTSEL button

3. Connect Pico via USB while holding BOOTSEL

4. Device appears as:

```text
RPI-RP2
```

5. Copy:

```text
rc_car.uf2
```

to:

```text
RPI-RP2
```

6. Pico reboots automatically.

This is normal:
- Drive disappears after flashing
- UF2 file will not remain visible after reboot :contentReference[oaicite:1]{index=1}

---

# Next Steps After Blink

Implement in order:

## Phase 1
- PWM motor control
- Servo steering

## Phase 2
- Encoder feedback
- Speed control
- PID controller

## Phase 3
- Radio control
- Failsafe

## Phase 4
- Autonomous features

---

# Future Files To Add

```text
motor.cpp
motor.h

servo.cpp
servo.h

pid.cpp
pid.h

encoder.cpp
encoder.h
```

---

# Target Goal
Self-built RC car with:
- Own control software
- Own motor regulation
- Expandable autonomous architecture
