#ifndef MULTI_SLOT_REMOTE_CONTROL_H
#define MULTI_SLOT_REMOTE_CONTROL_H

#include "Command.h"
#include "Commands.h"

#include <iostream>
#include <memory>
#include <vector>

class MultiSlotRemoteControl {
    const uint8_t slotCount;
    std::vector<std::unique_ptr<Command>> onCommands;
    std::vector<std::unique_ptr<Command>> offCommands;

    Command *undoCommand = nullptr;

public:
    MultiSlotRemoteControl(uint8_t slotCount)
     : slotCount(slotCount),
    onCommands(std::vector<std::unique_ptr<Command>>(slotCount)),
    offCommands(std::vector<std::unique_ptr<Command>>(slotCount)) { };

    void setCommand(uint8_t slot, std::unique_ptr<Command> onCommand, std::unique_ptr<Command> offCommand);

    void onButtonWasPushed(uint8_t slot);
    void offButtonWasPushed(uint8_t slot);
    void undoButtonWasPushed();

    friend std::ostream& operator<<(std::ostream& os, const MultiSlotRemoteControl& remote);
};

#endif //MULTI_SLOT_REMOTE_CONTROL_H