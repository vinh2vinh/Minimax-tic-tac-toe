#include <iostream>
#include <vector>
#include <GL/glut.h>

using namespace std;

class Board {
    private:
        vector< vector<int> > board;
    
    public:
        Board(int rows, int cols);
        int getXY(int x, int y);
        void setXY(int x, int y, int val);
};


