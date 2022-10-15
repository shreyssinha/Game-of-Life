#ifndef _RULEFIVE_H_
#define _RULEFIVE_H_
#include <iostream>
#include "decorator.h"

class Five : public Decorator {
    bool condition = false;
    int friends;
    int neighbours = 0;
    public:
    int fre;
        Five (Component *c, int a);
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