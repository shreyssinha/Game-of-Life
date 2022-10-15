#ifndef _COMPONENT_H_
#define _COMPONENT_H_
#include <iostream>

class Component {

    public:
    virtual ~Component();
    virtual void generate() = 0;
    virtual void setOff() = 0;
    virtual void setOn() = 0;
    virtual void setNeighbors(int a) = 0;
    virtual int getNeighbors() = 0;
    virtual bool apply( bool change ) = 0;
    virtual bool getState() = 0;
    virtual void period() = 0;
    virtual void toggle() = 0;
};
#endif