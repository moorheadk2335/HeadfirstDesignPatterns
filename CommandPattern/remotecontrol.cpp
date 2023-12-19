
#include "SimpleRemoteControl.h"
#include "MultiSlotRemoteControl.h"

// Command related includes
#include "Command.h"
#include "Commands.h"

// Vendors
#include "Light.h"
#include "GarageDoor.h"
#include "TV.h"
#include "HotTub.h"

#include <iostream>
#include <memory>

using namespace std;

void testSimpleRemote() {
    SimpleRemoteControl remote;

    auto light = make_shared<Light>();

    unique_ptr<Command> command = make_unique<LightOnCommand>(light);
    remote.setCommand(std::move(command));

    remote.buttonWasPressed();

    auto garageDoor = make_shared<GarageDoor>();

    command = make_unique<GarageDoorOpenCommand>(garageDoor);
    remote.setCommand(std::move(command));

    remote.buttonWasPressed();
}

void testMultiRemote() {
    MultiSlotRemoteControl remote(7);

    auto light = make_shared<Light>();

    std::unique_ptr<Command> lightOnCommand = std::make_unique<LightOnCommand>(light);

    remote.setCommand(0, make_unique<LightOnCommand>(light), make_unique<LightOffCommand>(light));

    auto garageDoor = make_shared<GarageDoor>();

    remote.setCommand(1, make_unique<GarageDoorOpenCommand>(garageDoor), make_unique<GarageDoorCloseCommand>(garageDoor));
    remote.setCommand(2, make_unique<GarageDoorStopCommand>(garageDoor), make_unique<GarageDoorStopCommand>(garageDoor));

    auto stereo = make_shared<Stereo>();

    remote.setCommand(3, make_unique<StereoOnWithCDCommand>(stereo), make_unique<StereoOffCommand>(stereo));

    cout << remote << endl;

    remote.undoButtonWasPushed();
    remote.onButtonWasPushed(0);
    remote.offButtonWasPushed(0);
    remote.onButtonWasPushed(1);
    remote.offButtonWasPushed(1);
    remote.undoButtonWasPushed();
    remote.onButtonWasPushed(3);
    remote.offButtonWasPushed(3);
    remote.undoButtonWasPushed();
    remote.onButtonWasPushed(2);
    remote.undoButtonWasPushed();
    remote.offButtonWasPushed(1);
    remote.onButtonWasPushed(2);
    remote.undoButtonWasPushed();

    auto tv = make_shared<TV>();
    auto hotTub = make_shared<HotTub>();

    vector<unique_ptr<Command>> partyOn, partyOff;

    partyOn.push_back(make_unique<HotTubOnCommand>(hotTub));
    partyOn.push_back(make_unique<TVOnCommand>(tv));
    partyOff.push_back(make_unique<HotTubOffCommand>(hotTub));
    partyOff.push_back(make_unique<TVOffCommand>(tv));

    remote.setCommand(4,
        make_unique<MacroCommand>(std::move(partyOn)),
        make_unique<MacroCommand>(std::move(partyOff)));

    remote.onButtonWasPushed(4);
    remote.offButtonWasPushed(4);
}

int main() {
    testMultiRemote();
}
