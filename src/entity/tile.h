#pragma once

#include "component/boundingBox.h"

namespace ecs {

class Tile
{
private:
    Tile() {};
    BoundingBox* bb;
public:
    Tile(int w, int h);
    ~Tile();
};

}