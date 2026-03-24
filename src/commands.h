#ifndef COMMANDS_H
#define COMMANDS_H

#include "interfaces.h"

class Move: public ICommand {
public:
    Move(IMovingObject & o) : m_o(o) {}

    void execute() override {
        Point location=m_o.location();
        Vector velocity=m_o.velocity();
        location+=velocity;
        m_o.set_location(location);
    }

protected:
    IMovingObject & m_o;
};

class Rotate: public ICommand {
public:
    Rotate(IRotatingObject & o) : m_o(o) {}

    void execute() override {
        m_o.set_angle(m_o.angle()+m_o.angularVelocity());
    }

protected:
    IRotatingObject & m_o;
};


#endif // COMMANDS_H
