#include "SimpleRemoteControl.h"

void SimpleRemoteControl::setCommand(std::unique_ptr<Command> command)  {
    slot = std::move(command);
}

void SimpleRemoteControl::buttonWasPressed() {
    slot->execute();
}
