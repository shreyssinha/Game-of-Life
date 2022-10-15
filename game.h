#ifndef LIFEGAME_H_
#define LIFEGAME_H_
#include "grid.h"

class LifeGame {
  // Fill in this class with your implementation
  // You may build other classes and modules as well
  protected:
    int width;
    int height;
    
  public:
    LifeGame(int w, int h) {
      width = w;
      height = h;
    }
    void play();
};

#endif