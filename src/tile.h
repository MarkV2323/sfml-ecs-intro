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
};

}