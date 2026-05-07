# Drohne

`Drohne` is a hobby robotics project focused on building our own RC drone platform with room to grow into a more advanced autonomous aerial system.

## Project Outline

### Goal
Build a self-made RC drone with:
- custom flight control software
- reliable propulsion control
- attitude control (roll/pitch/yaw)
- room for future autonomy features

### Hardware
Current hardware mentioned in the planning notes:
- Raspberry Pi Pico W
- Raspberry Pi 5
- ESP32

### Architecture
The current plan is to use the Raspberry Pi Pico W as the main flight controller.

Reason:
- real-time capable
- better suited for PWM than a Linux-based system
- suitable for ESC and servo control
- suitable for interrupt-based sensor and encoder handling
- strong C++ support

Planned future use of Raspberry Pi 5:
- camera
- OpenCV
- autonomous navigation
- telemetry
- web interface

Optional use of ESP32:
- wireless remote control
- telemetry bridge

## Software Direction

### Language
Use `C++` because it fits embedded work well:
- direct hardware access
- fast execution
- better timing control
- compatible with Pico SDK

### Toolchain
- `CMake`
- `Pico SDK`
- `g++`
- `make`

Optional:
- `Visual Studio Code`
- `PlatformIO`

## Planned Project Structure

```text
drohne/
├── CMakeLists.txt
├── main.cpp
└── build/
```

## Development Phases

### Phase 1
- PWM propulsion control
- basic axis control

### Phase 2
- encoder/sensor feedback
- altitude or speed control
- PID controller

### Phase 3
- radio control
- failsafe

### Phase 4
- autonomous flight features

## Planned Modules

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

## Build Direction
The current notes assume a standard embedded CMake workflow:

```bash
mkdir build
cd build
cmake ..
make
```

Expected firmware artifact:

```text
drohne.uf2
```

## Target Goal
Build a self-made RC drone with:
- its own control software
- its own propulsion regulation
- an expandable autonomous architecture

## Current Status
The repository is still in the planning stage. The next practical step is to create the initial firmware scaffold for the drone and align the implementation with the intended hardware target.
