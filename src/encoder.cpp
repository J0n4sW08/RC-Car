#include "encoder.h"

void Encoder::init() {
    ticks_ = 0;
}

void Encoder::set_ticks(int ticks) {
    ticks_ = ticks;
}

int Encoder::ticks() const {
    return ticks_;
}
