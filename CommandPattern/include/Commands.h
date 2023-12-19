#ifndef COMMANDS_H
#define COMMANDS_H

#include "Command.h"

// Vendors
#include "Light.h"
#include "GarageDoor.h"
#include "Stereo.h"
#include "TV.h"
#include "HotTub.h"

#include <iostream>
#include <memory>
#include <vector>

/**
 * @note We use a shared_ptr for the various commands to maintain a
 * reference to the object we're commanding in the event that the controlled object
 * goes out of scope for the original creator
 */

class NoCommand : public Command {
protected:
    virtual void print(std::ostream &os) const override {
        os << "No Command";
    };

public:
    ~NoCommand() { };

    void execute() override { };
};

class LightOnCommand : public Command {
    std::shared_ptr<Light> light;

protected:
    virtual void print(std::ostream &os) const override {
        os << "Light On Command";
    };

public:
    LightOnCommand(std::shared_ptr<Light> light) : light(light) { };
    ~LightOnCommand() { };

    void execute() override {
        light->on();
    };

    void undo() override {
        light->off();
    }
};

class LightOffCommand : public Command {
    std::shared_ptr<Light> light;

protected:
    virtual void print(std::ostream &os) const override {
        os << "Light Off Command";
    };

public:
    LightOffCommand(std::shared_ptr<Light> light) : light(light) { };
    ~LightOffCommand() { };

    void execute() override {
        light->off();
    };

    void undo() override {
        light->on();
    }
};

class GarageDoorOpenCommand : public Command {
    std::shared_ptr<GarageDoor> garageDoor;

protected:
    virtual void print(std::ostream &os) const override {
        os << "Garage Door Open Command";
    };

public:
    GarageDoorOpenCommand(std::shared_ptr<GarageDoor> garageDoor) : garageDoor(garageDoor) { };
    ~GarageDoorOpenCommand() { };

    void execute() override {
        garageDoor->up();
    };

    void undo() override {
        garageDoor->down();
    }
};

class GarageDoorCloseCommand : public Command {
    std::shared_ptr<GarageDoor> garageDoor;

protected:
    virtual void print(std::ostream &os) const override {
        os << "Garage Door Close Command";
    };

public:
    GarageDoorCloseCommand(std::shared_ptr<GarageDoor> garageDoor) : garageDoor(garageDoor) { };
    ~GarageDoorCloseCommand() { };

    void execute() override {
        garageDoor->down();
    };

    void undo() override {
        garageDoor->up();
    }
};

class GarageDoorStopCommand : public Command {
    std::shared_ptr<GarageDoor> garageDoor;
    GarageDoor::Movement priorMovement;

protected:
    virtual void print(std::ostream &os) const override {
        os << "Garage Door Stop Command";
    };
    
public:
    GarageDoorStopCommand(std::shared_ptr<GarageDoor> garageDoor) : garageDoor(garageDoor), priorMovement(garageDoor->getCurrentMovement()) { };
    ~GarageDoorStopCommand() { };

    void execute() override {
        priorMovement = garageDoor->getCurrentMovement();
        garageDoor->stop();
    };

    void undo() override {
        switch(priorMovement) {
            case GarageDoor::Movement::UP:
                garageDoor->up();
            break;
            case GarageDoor::Movement::DOWN:
                garageDoor->down();
            break;
            default:
                // Nothing to do
            break;
        }
    }
};

class GarageDoorLightOnCommand : public Command {
    std::shared_ptr<GarageDoor> garageDoor;

protected:
    virtual void print(std::ostream &os) const override {
        os << "Garage Door Light On Command";
    };
    
public:
    GarageDoorLightOnCommand(std::shared_ptr<GarageDoor> garageDoor) : garageDoor(garageDoor) { };
    ~GarageDoorLightOnCommand() { };

    void execute() override {
        garageDoor->lightOn();
    };

    void undo() override {
        garageDoor->lightOff();
    }
};


class GarageDoorLightOffCommand : public Command {
    std::shared_ptr<GarageDoor> garageDoor;

protected:
    virtual void print(std::ostream &os) const override {
        os << "Garage Door Light Off Command";
    };
    
public:
    GarageDoorLightOffCommand(std::shared_ptr<GarageDoor> garageDoor) : garageDoor(garageDoor) { };
    ~GarageDoorLightOffCommand() { };

    void execute() override {
        garageDoor->lightOff();
    };

    void undo() override {
        garageDoor->lightOn();
    }
};

class StereoOnWithCDCommand : public Command {
    std::shared_ptr<Stereo> stereo;

protected:
    virtual void print(std::ostream &os) const override {
        os << "Stereo On with CD Command";
    };
    
public:
    StereoOnWithCDCommand(std::shared_ptr<Stereo> stereo) : stereo(stereo) { };
    ~StereoOnWithCDCommand() { };

    void execute() override {
        stereo->on();
        stereo->setCd();
        stereo->setVolume(11);
    };

    void undo() override {
        stereo->off();
    }
};

class StereoOffCommand : public Command {
    std::shared_ptr<Stereo> stereo;

protected:
    virtual void print(std::ostream &os) const override {
        os << "Stereo Off Command";
    };
    
public:
    StereoOffCommand(std::shared_ptr<Stereo> stereo) : stereo(stereo) { };
    ~StereoOffCommand() { };

    void execute() override {
        stereo->off();
    };

    void undo() override {
        stereo->on();
    }
};

class TVOnCommand : public Command {
    std::shared_ptr<TV> tv;

protected:
    virtual void print(std::ostream &os) const override {
        os << "TV On Command";
    };

public:
    TVOnCommand(std::shared_ptr<TV> tv) : tv(tv) { };
    ~TVOnCommand() { };

    void execute() override {
        tv->on();
    };

    void undo() override {
        tv->off();
    }
};

class TVOffCommand : public Command {
    std::shared_ptr<TV> tv;

protected:
    virtual void print(std::ostream &os) const override {
        os << "TV Off Command";
    };

public:
    TVOffCommand(std::shared_ptr<TV> tv) : tv(tv) { };
    ~TVOffCommand() { };

    void execute() override {
        tv->off();
    };

    void undo() override {
        tv->on();
    }
};

class HotTubOnCommand : public Command {
    std::shared_ptr<HotTub> hotTub;

protected:
    virtual void print(std::ostream &os) const override {
        os << "Hot Tub On Command";
    };

public:
    HotTubOnCommand(std::shared_ptr<HotTub> hotTub) : hotTub(hotTub) { };
    ~HotTubOnCommand() { };

    void execute() override {
        hotTub->on();
    };

    void undo() override {
        hotTub->off();
    }
};

class HotTubOffCommand : public Command {
    std::shared_ptr<HotTub> hotTub;

protected:
    virtual void print(std::ostream &os) const override {
        os << "Hot Tub Off Command";
    };

public:
    HotTubOffCommand(std::shared_ptr<HotTub> hotTub) : hotTub(hotTub) { };
    ~HotTubOffCommand() { };

    void execute() override {
        hotTub->off();
    };

    void undo() override {
        hotTub->on();
    }
};

class MacroCommand : public Command {
    std::vector<std::unique_ptr<Command>> commands;

protected:
    virtual void print(std::ostream &os) const override {
        for (auto &command : commands) {
            os << command << " ";
        }
    };

public:
    // MacroCommand(std::vector<std::unique_ptr<Command>> commands) : commands(std::move(commands)) { };
    MacroCommand(std::vector<std::unique_ptr<Command>> newCommands) {
        for (auto &command : newCommands) {
            commands.push_back(std::move(command));
        }
    };

    void execute() override {
        for (const auto &command : commands) {
            command->execute();
        }
    }

    void undo() override {
        for (const auto &command : commands) {
            command->undo();
        }
    }
};

#endif //COMMANDS_H