#ifndef GARAGE_DOOR_H
#define GARAGE_DOOR_H

#include <iostream>

class GarageDoor {
public:
    enum Movement {
        UP,
        DOWN,
        STOPPED
    };

private:
    Movement currentMovement = STOPPED;

public:
    void up() {
        std::cout << "Moving the garage door up" << std::endl;
        currentMovement = UP;
    };

    void down() {
        std::cout << "Moving the garage door down" << std::endl;
        currentMovement = DOWN;
    };

    void stop() {
        std::cout << "Stopping the garage door" << std::endl;
        currentMovement = STOPPED;
    };

    void lightOn() {
        std::cout << "Turning the garage door light on" << std::endl;
    };

    void lightOff() {
        std::cout << "Turning the garage door light off" << std::endl;
    };

    Movement getCurrentMovement() {
        return currentMovement;
    }
};

#endif //GARAGE_DOOR_H