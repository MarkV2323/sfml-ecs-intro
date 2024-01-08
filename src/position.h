#pragma once

namespace ecs {

class Position
{
private:
    unsigned int x;
    unsigned int y;
public:
    Position();
    Position(unsigned x1, unsigned y1);
    ~Position();
};

}