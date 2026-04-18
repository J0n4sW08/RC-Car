#include "servo.h"

void Servo::init() {
    steering_angle_degrees_ = 0.0f;
}

void Servo::set_angle_degrees(float angle) {
    if (angle < -45.0f) {
        steering_angle_degrees_ = -45.0f;
        return;
    }

    if (angle > 45.0f) {
        steering_angle_degrees_ = 45.0f;
        return;
    }

    steering_angle_degrees_ = angle;
}

float Servo::angle_degrees() const {
    return steering_angle_degrees_;
}
