#include "rulefour.h" 
#include "cell.h"
#include <iostream>

Four::Four(Component *c, int a) : Decorator{c}, co{a}, q{1} {}

bool Four::apply(bool change) {
    if (change == true) {
        if (c->getState() == true) {
            if (c->getNeighbors() > 2) c->setOff();
        }
    } return c->getState();
}

void Four::generate() {
    if((!(co%q) && co)){
		c->toggle();
		c->period();
    } else c->generate();
	co += 1;
}

void Four::setOff() {
    c->setOff();
}

void Four::setOn() {
    c->setOn();
}

void Four::setNeighbors(int a) {
    c->setNeighbors(a);
}

int Four::getNeighbors() {
    return c->getNeighbors();
}

bool Four::getState() {
    return c->getState();
}

void Four::period() {
    c->period();
}

void Four::toggle() {
    c->toggle();
}