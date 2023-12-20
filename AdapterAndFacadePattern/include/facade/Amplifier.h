#ifndef AMPLIFIER_H
#define AMPLIFIER_H

#include "Tuner.h"
#include "StreamingPlayer.h"

#include <iostream>
#include <memory>

class Amplifier {
private:
    Tuner* tuner;
    StreamingPlayer* player;
    int volume = 11;

public:
    void on() {
        std::cout << "Turning amplifier on" << std::endl;
    }

    void off() {
        std::cout << "Turning amplifier off" << std::endl;
    }

    void setStreamingPlayer(StreamingPlayer* player) {
        this->player = player;
    }

    void setStereoSound() {
        if (player == nullptr) return;

        player->setTwoChannelAudio();
    }

    void setSurroundSound() {
        if (player == nullptr) return;

        player->setSurroundAudio();
    }

    void setTuner(Tuner* tuner) {
        if (tuner == nullptr) return;

        this->tuner = tuner;
    }

    void setVolume(int volume) {
        this->volume = volume;        
    }
};

#endif //AMPLIFIER_H