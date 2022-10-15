#ifndef _CELL_H_
#define _CELL_H_
#include <iostream>
#include "component.h"

class Cell : public Component {
    int row, column;
    int N;
    int neighbours;
    bool condition;

    public:
    Cell();
    void generate() override; //
    void setOff() override; //
    void setOn() override; //
    void setNeighbors(int a) override; //
    int getNeighbors() override; //
    bool apply( bool change ) override; //
    bool getState() override; //
    void period() override; //
    void toggle() override; //
};

#endif