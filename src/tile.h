#pragma once

#include "position.h";
#include "boundingBox.h";

namespace ecs {

class Tile
{
private:
    Tile() {};
    Position* pos;
    BoundingBox* bb;
public:
    Tile(unsigned x1, unsigned y1, int w1, int h1);
    ~Tile();

    unsigned int getX();
    unsigned int getY();
    int getW();
    int getH();

    bool setX(unsigned int& x1);
    bool setY(unsigned int& y1);
    bool setW(int& w1);
    bool setH(int& h1);
};

}