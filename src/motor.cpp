#include "motor.h"

void Motor::init() {
    duty_cycle_ = 0.0f;
}

void Motor::set_duty_cycle(float duty_cycle) {
    if (duty_cycle < 0.0f) {
        duty_cycle_ = 0.0f;
        return;
    }

    if (duty_cycle > 1.0f) {
        duty_cycle_ = 1.0f;
        return;
    }

    duty_cycle_ = duty_cycle;
}

float Motor::duty_cycle() const {
    return duty_cycle_;
}
