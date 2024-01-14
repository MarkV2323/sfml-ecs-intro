#include "tile.h"
namespace ecs {

Tile::Tile(int w, int h) :  bb(new BoundingBox(w, h)) {}

Tile::~Tile() {
    delete bb;
}

}