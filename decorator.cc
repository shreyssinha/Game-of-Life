#include "decorator.h"

Decorator::Decorator( Component *c ) : c{c} {}

Decorator::~Decorator(){
    delete c;
}