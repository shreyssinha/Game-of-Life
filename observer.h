#ifndef _OBSERVER_H_
#define _OBSERVER_H_
#include <string>

class Component;

class Observer {
 public:
 virtual bool getCondition() const = 0;
  virtual ~Observer() = default;
};

#endif