#ifndef ENCODER_H
#define ENCODER_H

class Encoder {
public:
    void init();
    void set_ticks(int ticks);
    int ticks() const;

private:
    int ticks_ = 0;
};

#endif
