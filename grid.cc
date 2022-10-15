#include "grid.h"
#include "component.h"
#include "cell.h"
#include "ruletwo.h"
#include "rulethree.h"
#include "rulefour.h"
#include "rulefive.h"
#include <vector>
using namespace std;

Grid::Grid(int x, int y) {
    xSize = x;
    ySize = y;
    int idx = 0;
    while (idx < ySize) {
        vector <Component *> temp;
        int idx2 = 0;
        while (idx2 < xSize) {
            temp.emplace_back(new Cell);
            idx2++;
        } theGrid.emplace_back(temp);
        idx++;
    }
}

Grid::~Grid() {
    int idx = 0;
    while (idx < ySize) {
        int idx2 = 0;
        while (idx2 < xSize) {
            delete theGrid[idx][idx2];
            idx2++;
        } theGrid[idx].clear();
        theGrid[idx].shrink_to_fit();
        idx++;
    } theGrid.clear();
    theGrid.shrink_to_fit();
}

void Grid::clearGrid() {
    int idx3 = 0;
    while (idx3 < ySize) {
        int idx2 = 0;
        while (idx2 < xSize) {
            delete theGrid[idx3][idx2];
            idx2++;
        } theGrid[idx3].clear();
        theGrid[idx3].shrink_to_fit();
        idx3++;
    } theGrid.clear();
    theGrid.shrink_to_fit();
    int idx = 0;
    while (idx < ySize) {
        vector <Component*> temp;
        int idx2 = 0;
        while (idx2 < xSize) {
            temp.emplace_back(new Cell);
            idx2++;
        } theGrid.emplace_back(temp);
        idx++;
    }
}

void Grid::turnOn(int x, int y) {
    theGrid[x][y]->setOn();
}

void Grid::updateNeighbors() {
    int idx = 0;
    while (idx < ySize) {
        int idx2 = 0;
        while (idx2 < xSize) {
            int result = 0;
            if (idx + 1 < ySize) {
                if (idx2 + 1 < xSize && theGrid[idx+1][idx2+1]->getState()) result++;
                if (idx2 > 0 && theGrid[idx+1][idx2-1]->getState()) result++;
                if (theGrid[idx+1][idx2]->getState()) result++;
            }
            if (idx > 0) {
                if (idx2 + 1 < xSize && theGrid[idx-1][idx2+1]->getState()) result++;
                if (idx2 > 0 && theGrid[idx-1][idx2-1]->getState()) result++;
                if (theGrid[idx-1][idx2]->getState()) result++;
            }
            if (idx2 + 1 < xSize && theGrid[idx][idx2+1]->getState()) result++;
            if (idx2 > 0 && theGrid[idx][idx2-1]->getState()) result++;
            theGrid[idx][idx2]->setNeighbors(result);
            idx2++;
        } idx++;
    }
}

void Grid::ruleAll (char r, int a) {
    int idx = 0;
    while (idx < ySize) {
        int idx2 = 0;
        while (idx2 < xSize) {
            setRule(r, idx, idx2, a);
            idx2++;
        } idx++;
    }
}

void Grid::setRule(char r, int x, int y, int a) {
    if (r == 'a') {
        Three *tmp = new Three{theGrid[x][y]};
        theGrid[x][y] = tmp;
    }
    else if (r == 'l') {
        Two *tmp = new Two{theGrid[x][y]};
        theGrid[x][y] = tmp;
    }
    else if (r == 'f') {
        Five *tmp = new Five{theGrid[x][y], a};
        theGrid[x][y] = tmp;
    }
    else if (r == 't') {
        Four *tmp = new Four{theGrid[x][y], a};
        theGrid[x][y] = tmp;
    }
}

void Grid::updateAll() {
    updateNeighbors();
    int idx = 0;
    while (idx < ySize) {
        int idx2 = 0;
        while (idx2 < ySize) {
            theGrid[idx][idx2]->generate();
            idx2++;
        } idx++;
    }
}

void Grid::print() {
    int idx = 0;
    while (idx < ySize) {
        int idx2 = 0;
        while (idx2 < xSize) {
            if (theGrid[idx][idx2]->getState() == false) cout << ".";
            else cout << "X";
            idx2++;
        } idx++;
    }
}