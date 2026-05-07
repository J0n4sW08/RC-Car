#include "servo.h"

void Servo::init() {
    axis_angle_degrees_ = 0.0f;
}

void Servo::set_angle_degrees(float angle) {
    if (angle < -45.0f) {
        axis_angle_degrees_ = -45.0f;
        return;
    }

    if (angle > 45.0f) {
        axis_angle_degrees_ = 45.0f;
        return;
    }

    axis_angle_degrees_ = angle;
}

float Servo::angle_degrees() const {
    return axis_angle_degrees_;
}
