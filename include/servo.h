#ifndef SERVO_H
#define SERVO_H

class Servo {
public:
    void init();
    void set_angle_degrees(float angle);
    float angle_degrees() const;

private:
    float steering_angle_degrees_ = 0.0f;
};

#endif
