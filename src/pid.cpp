#include "pid.h"

PidController::PidController(float kp, float ki, float kd)
    : kp_(kp), ki_(ki), kd_(kd) {}

void PidController::reset() {
    integral_ = 0.0f;
    previous_error_ = 0.0f;
}

float PidController::update(float setpoint, float measurement, float dt_seconds) {
    const float error = setpoint - measurement;

    integral_ += error * dt_seconds;

    float derivative = 0.0f;
    if (dt_seconds > 0.0f) {
        derivative = (error - previous_error_) / dt_seconds;
    }

    previous_error_ = error;

    return (kp_ * error) + (ki_ * integral_) + (kd_ * derivative);
}
