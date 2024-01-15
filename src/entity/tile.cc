#include "tile.h"
namespace ecs {

Tile::Tile(int w, int h, float x, float y, float v) 
    : boundingBox(new BoundingBox(w, h)), 
    transform(new Transform(x, y, v)) 
    {}

Tile::~Tile() {
    delete boundingBox;
    delete transform;
}

}