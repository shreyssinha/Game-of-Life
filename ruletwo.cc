#include "ruletwo.h" 
#include "cell.h"
#include <iostream>

Two::Two(Component *c) : Decorator{c} {}

bool Two::apply(bool change) {
    if (change == true) {
        if (c->getState() == true) {
            if (c->getNeighbors() <= 2) c->setOff();
        }
    } return c->getState();
}

void Two::generate() {
    c->generate();
	if(c->getNeighbors() < 2) c->setOff();
}

void Two::setOff() {
    c->setOff();
}

void Two::setOn() {
    c->setOn();
}

void Two::setNeighbors(int a) {
    c->setNeighbors(a);
}

int Two::getNeighbors() {
    return c->getNeighbors();
}

bool Two::getState() {
    return c->getState();
}

void Two::period() {
    c->period();
}

void Two::toggle() {
    c->toggle();
}