#pragma once

namespace ecs {

class BoundingBox
{
private:
    int width;
    int height;
public:
    BoundingBox();
    BoundingBox(int w, int h);
    ~BoundingBox();
};

}