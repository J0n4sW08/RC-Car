#include "pico/stdlib.h"

#include "encoder.h"
#include "motor.h"
#include "pid.h"
#include "servo.h"

int main() {
    const uint led_pin = 25;

    stdio_init_all();
    gpio_init(led_pin);
    gpio_set_dir(led_pin, GPIO_OUT);

    Motor motor;
    Servo servo;
    Encoder encoder;
    PidController speed_pid(0.0f, 0.0f, 0.0f);

    motor.init();
    servo.init();
    encoder.init();
    speed_pid.reset();

    while (true) {
        gpio_put(led_pin, 1);
        sleep_ms(250);

        gpio_put(led_pin, 0);
        sleep_ms(250);
    }

    return 0;
}
