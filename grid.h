#ifndef _GRID_H_
#define _GRID_H_
#include <iostream>
#include <vector>
using namespace std;

class Component;

class Grid {
    vector < vector<Component*> > theGrid;  // The actual grid.
    int xSize;
    int ySize;

     public:
        Grid(int x, int y);
        ~Grid();
        void clearGrid();
        void turnOn(int x, int y);  // Sets cell at row r, col c to On.
        void updateNeighbors();
        void ruleAll (char r, int a);
        void updateAll();            // Updates Grid to next gen
        void setRule(char r, int x, int y, int a);
        void print();
};

#endif