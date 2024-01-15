#pragma once

#include "component/boundingBox.h"
#include "component/transform.h"

namespace ecs {

class Tile
{
private:
    Tile() {};
    // Components that are attached to tile.
    BoundingBox* boundingBox;
    Transform* transform;
public:
    Tile(int w, int h, float x, float y, float v);
    ~Tile();
};

}