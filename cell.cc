#include "cell.h"
using namespace std;

bool Cell::getState() {
    return condition;
}

void Cell::setOn() {
    this->condition = true;
}

void Cell::setOff() {
    this->condition = false;
}

void Cell::setNeighbors(int a) {
    neighbours = a;
}

int Cell::getNeighbors() {
    return neighbours;
}

bool Cell::apply( bool change ) {
    if (change == true) {
        if (condition == true) {
            condition = false;
        } else condition = true;
    } else if (condition == false) {
        if (neighbours == 3) condition = true;
    } return condition;
}

void Cell::period() {}

void Cell::generate() {
    if (neighbours == 3) setOn();
}

void Cell::toggle(){
  condition = !condition;
}