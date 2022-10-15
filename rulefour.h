#ifndef _RULEFOUR_H_
#define _RULEFOUR_H_
#include <iostream>
#include "decorator.h"

class Component;

class Four : public Decorator {
    int interval;
    bool condition = false;
    int neighbours = 0;
    public:

    int co;
    int q;
        Four (Component *c, int a);
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