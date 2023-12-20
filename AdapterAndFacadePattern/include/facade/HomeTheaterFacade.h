#ifndef HOME_THEATER_FACADE_H
#define HOME_THEATER_FACADE_H

#include "Amplifier.h"
#include "PopcornPopper.h"
#include "Projector.h"
#include "Screen.h"
#include "StreamingPlayer.h"
#include "TheaterLights.h"
#include "Tuner.h"

#include <iostream>
#include <string>

class HomeTheaterFacade {
public:
    // Expose the various pieces of our home theater to allow control of the subsystems directly
    Amplifier &amplifier;
    Tuner &tuner;
    Screen &screen;
    StreamingPlayer &player;
    Projector &projector;
    PopcornPopper &popper;
    TheaterLights &lights;

    HomeTheaterFacade(Amplifier &amplifier, 
        Tuner &tuner, 
        Screen &screen, 
        StreamingPlayer &player, 
        Projector &projector, 
        PopcornPopper &popper, 
        TheaterLights &lights)
    : amplifier(amplifier), tuner(tuner), screen(screen), player(player), projector(projector), popper(popper), lights(lights) { }
    
    void watchMovie(std::string movie) {
        std::cout << "Get ready to watch a movie..." << std::endl;
        popper.on();
        popper.pop();
        lights.dim(10.0f);
        screen.down();
        projector.on();
        projector.wideScreenMode();
        amplifier.on();
        amplifier.setStreamingPlayer(&player);
        amplifier.setVolume(5);
        player.on();
        player.play(movie);
    }

    void endMovie() {
        std::cout << "Shutting movie theater down" << std::endl;
        popper.off();
        lights.on();
        screen.up();
        projector.off();
        amplifier.off();
        player.stop();
        player.off();
    }

    void listenToRadio() {

    }

    void endRadio() {

    }    
};

#endif //HOME_THEATER_FACADE_H