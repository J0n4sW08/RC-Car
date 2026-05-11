#include <stdio.h>
#include "pico/stdlib.h"



int main()
{
    stdio_init_all();
    sleep_ms(2000);

    while (true) {
        printf("Hello, world!\n");
        printf("test!!!\n");
        sleep_ms(1000);
    }
}
