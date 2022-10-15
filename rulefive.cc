#include "rulefive.h" 
#include "cell.h"
#include <iostream>

Five::Five( Component *c, int a ) : Decorator{c}, fre{a} {}

bool Five::apply(bool change) {
    if (change == true) {
        if (c->getState() == true) {
            if (c->getNeighbors() > 2) c->setOff();
        }
    } return c->getState();
}

void Five::generate() {
    c->generate();
	if(c->getNeighbors() == fre) c->setOn();
}

void Five::setOff() {
    c->setOff();
}

void Five::setOn() {
    c->setOn();
}

void Five::setNeighbors(int a) {
    c->setNeighbors(a);
}

int Five::getNeighbors() {
    return c->getNeighbors();
}

bool Five::getState() {
    return c->getState();
}

void Five::period() {
    c->period();
}

void Five::toggle() {
    c->toggle();
}