#ifndef _RULETHREE_H_
#define _RULETHREE_H_
#include <iostream>
#include "decorator.h"

class Component;

class Three : public Decorator {
    bool condition = false;
    int neighbours = 0;
    public:
        Three (Component *c);
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