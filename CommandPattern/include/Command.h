#ifndef COMMAND_H
#define COMMAND_H

#include <iostream>

class Command {
protected:
    virtual void print(std::ostream &os) const = 0;

public:
    virtual ~Command() = default;

    virtual void execute() = 0;
    virtual void undo() = 0;

    friend std::ostream& operator<<(std::ostream &os, const Command &command) { 
        command.print(os);
        return os;
    };
};

#endif //COMMAND_H