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