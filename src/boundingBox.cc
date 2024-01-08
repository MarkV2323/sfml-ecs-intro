#include "boundingBox.h"

namespace ecs {
    BoundingBox::BoundingBox(int w, int h) : width(w), height(h) {}

    BoundingBox::~BoundingBox() {}
    
    int BoundingBox::getW()
    {
        return width;
    }

    int BoundingBox::getH()
    {
        return height;
    }

    bool BoundingBox::setW(int &w1)
    {
        width = w1;
        return true;
    }

    bool BoundingBox::setH(int &h1)
    {
        height = h1;
        return true;
    }
}
