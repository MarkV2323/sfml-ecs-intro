#pragma once

namespace ecs {

class Position
{
private:
    Position() {};
    unsigned int x;
    unsigned int y;
public:
    Position(unsigned x1, unsigned y1);
    ~Position();
    unsigned int getX();
    unsigned int getY();
    bool setX(unsigned int& x1);
    bool setY(unsigned int& y1);
};

}