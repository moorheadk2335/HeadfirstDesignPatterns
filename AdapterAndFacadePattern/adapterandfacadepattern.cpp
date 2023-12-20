// Adapter classes
#include "Duck.h"
#include "Ducks.h"
#include "Turkey.h"
#include "Turkeys.h"
#include "TurkeyAdapter.h"

// Facade classes
#include "HomeTheaterFacade.h"
#include "Amplifier.h"
#include "PopcornPopper.h"
#include "Projector.h"
#include "Screen.h"
#include "StreamingPlayer.h"
#include "TheaterLights.h"
#include "Tuner.h"

#include <iostream>

using namespace std;

void testDuck(Duck &duck) {
    duck.quack();
    duck.fly();
}

void adapterTest() {
    MallardDuck mallardDuck;
    testDuck(mallardDuck);

    // Test object adapter
    TurkeyAdapter wildTurkeyAdapter(make_unique<WildTurkey>());
    testDuck(wildTurkeyAdapter);

    // Test class adapter
    DomesticTurkey domesticTurkey;
    testDuck(domesticTurkey);
}

void facadeTest() { 
    Amplifier amplifier;
    Tuner tuner;
    Screen screen;
    StreamingPlayer player;
    Projector projector;
    PopcornPopper popper;
    TheaterLights lights;

    HomeTheaterFacade homeTheater(amplifier, tuner, screen, player, projector, popper, lights);

    homeTheater.watchMovie("Raiders of the Lost Ark");
    homeTheater.endMovie();
}

int main() {
    adapterTest();
    facadeTest();
}
