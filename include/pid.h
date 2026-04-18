#ifndef PID_H
#define PID_H

class PidController {
public:
    PidController(float kp, float ki, float kd);

    void reset();
    float update(float setpoint, float measurement, float dt_seconds);

private:
    float kp_ = 0.0f;
    float ki_ = 0.0f;
    float kd_ = 0.0f;
    float integral_ = 0.0f;
    float previous_error_ = 0.0f;
};

#endif
