#include "tile.h"
namespace ecs {

Tile::Tile(unsigned x1, unsigned y1, int w1, int h1) : 
    pos(new Position(x1, y1)), bb(new BoundingBox(w1, h1)) 
    {}

Tile::~Tile() 
{
    delete pos;
    delete bb;
}

unsigned int Tile::getX()
{
    return pos->getX();
}

unsigned int Tile::getY()
{
    return pos->getY();
}

int Tile::getW()
{
    return bb->getW();
}

int Tile::getH()
{
    return bb->getH();
}

bool Tile::setX(unsigned int& x1)
{
    return pos->setX(x1);
}

bool Tile::setY(unsigned int& y1)
{
    return pos->setY(y1);
}

bool Tile::setW(int& w1)
{
    return bb->setW(w1);
}

bool Tile::setH(int& h1)
{
    return bb->setH(h1);
}
}