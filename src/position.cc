#include "Position.h"

namespace ecs {

Position::Position(unsigned x1, unsigned y1) : x(x1), y(y1) {};

Position::~Position() {}

unsigned int Position::getX()
{
    return x;
}

unsigned int Position::getY()
{
    return y;
}

bool Position::setX(unsigned int& x1)
{
    x = x1;
    return true;
}

bool Position::setY(unsigned int &y1)
{
    y = y1;
    return true;
}

}