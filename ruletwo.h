#ifndef _RULETWO_H_
#define _RULETWO_H_
#include <iostream>
#include "decorator.h"

class Component;

class Two : public Decorator {
    bool condition = false;
    int neighbours = 0;
    public:
        Two (Component *c);
        void generate() override; //
        void setOff() override; //
        void setOn() override; //
        void setNeighbors(int a) override; //
        int getNeighbors() override; //
        bool apply( bool change ) override;
        bool getState() override; //
        void period() override; //
        void toggle() override; //
};

#endif