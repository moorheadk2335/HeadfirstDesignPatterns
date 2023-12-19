#include "MultiSlotRemoteControl.h"

using namespace std;

void MultiSlotRemoteControl::setCommand(uint8_t slot,
                                        unique_ptr<Command> onCommand,
                                        unique_ptr<Command> offCommand)  {
    if (slot > slotCount) {
        cerr << "Requested slot " << slot << " for command, but remote only has " << slotCount << " slots." << endl;
        return;
    }

    onCommands[slot] = std::move(onCommand);
    offCommands[slot] = std::move(offCommand);
}

void MultiSlotRemoteControl::onButtonWasPushed(uint8_t slot) {
    if (!onCommands[slot]) {
        cerr << "On command for slot " << slot << " not set" << endl;
        return;
    }

    onCommands[slot]->execute();
    undoCommand = onCommands[slot].get();
}

void MultiSlotRemoteControl::offButtonWasPushed(uint8_t slot) {
    if (!offCommands[slot]) {
        cerr << "Off command for slot " << slot << " not set" << endl;
        return;
    }

    offCommands[slot]->execute();
    undoCommand = offCommands[slot].get();
}

void MultiSlotRemoteControl::undoButtonWasPushed() {
    if (undoCommand == nullptr) {
        cout << "No command has been set yet, cannot undo" << endl;
        return;
    }

    undoCommand->undo();
}

ostream &operator<<(ostream &os,
                        const MultiSlotRemoteControl &remote)  {
    for (int i = 0; i < remote.slotCount; i++) {
        os << "[slot " << i << "] On Command: ";

        if (remote.onCommands[i])
            os << *remote.onCommands[i];
        else
            os << "Command not set";
        
        os << "\tOff Command: ";

        if (remote.offCommands[i])
            os << *remote.offCommands[i];
        else
            os << "Command not set";
        
        os << endl;
    }

    return os;
}