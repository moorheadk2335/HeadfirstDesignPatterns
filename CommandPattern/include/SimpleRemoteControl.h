#ifndef SIMPLE_REMOTE_CONTROL_H
#define SIMPLE_REMOTE_CONTROL_H

#include "Command.h"

#include <memory>

class SimpleRemoteControl {
    // Use unique_ptr here to allow dynamic updates of the command
    std::unique_ptr<Command> slot;

public:
    SimpleRemoteControl() { };
    ~SimpleRemoteControl() { };

    void setCommand(std::unique_ptr<Command> command);

    void buttonWasPressed();
};

#endif //SIMPLE_REMOTE_CONTROL_H