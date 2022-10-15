#include "rulethree.h" 
#include "cell.h"
#include <iostream>

Three::Three(Component *c) : Decorator{c} {}

bool Three::apply(bool change) {
    if (change == true) {
        if (c->getState() == true) {
            if (c->getNeighbors() > 2) c->setOff();
        }
    } return c->getState();
}

void Three::generate() {
    c->generate();
	if(c->getNeighbors() > 3) c->setOff();
}

void Three::setOff() {
    c->setOff();
}

void Three::setOn() {
    c->setOn();
}

void Three::setNeighbors(int a) {
    c->setNeighbors(a);
}

int Three::getNeighbors() {
    return c->getNeighbors();
}

bool Three::getState() {
    return c->getState();
}

void Three::period() {
    c->period();
}

void Three::toggle() {
    c->toggle();
}