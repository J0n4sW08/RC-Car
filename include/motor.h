#ifndef MOTOR_H
#define MOTOR_H

class Motor {
public:
    void init();
    void set_duty_cycle(float duty_cycle);
    float duty_cycle() const;

private:
    float duty_cycle_ = 0.0f;
};

#endif
