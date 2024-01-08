#include "boundingBox.h"

namespace ecs {
    BoundingBox::BoundingBox(){}
    BoundingBox::BoundingBox(int w, int h) : width(w), height(h) {}
    BoundingBox::~BoundingBox() {}
}
