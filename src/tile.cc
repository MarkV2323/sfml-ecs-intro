#include "Tile.h"
namespace ecs {

Tile::Tile(unsigned x1, unsigned y1, int w1, int h1) : 
    pos(new Position(x1, y1)), bb(new BoundingBox(w1, h1)) 
    {}

Tile::~Tile() {}
}