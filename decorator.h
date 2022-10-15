#ifndef _DECORATOR_H_
#define _DECORATOR_H_
#include <iostream>
#include "component.h"

class Decorator : public Component {
    protected:
    Component *c;
    public:
    Decorator( Component *c);
    virtual ~Decorator();

};

#endif