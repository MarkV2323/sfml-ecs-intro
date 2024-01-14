#include "boundingBox.h"

namespace ecs {
    BoundingBox::BoundingBox(int w, int h) : width(w), height(h) {}

    BoundingBox::~BoundingBox() {}
    
    int BoundingBox::getWidth() {
        return width;
    }

    int BoundingBox::getHeight() {
        return height;
    }

    bool BoundingBox::setWidth(int& w) {
        width = w;
        return true;
    }

    bool BoundingBox::setHeight(int& h) {
        height = h;
        return true;
    }
}
