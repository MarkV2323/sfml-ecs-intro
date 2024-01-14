#pragma once

namespace ecs {

class BoundingBox
{
private:
    BoundingBox() {};
    int width;
    int height;
public:
    BoundingBox(int w, int h);
    ~BoundingBox();
    int getWidth();
    int getHeight();
    bool setWidth(int& w);
    bool setHeight(int& h);
};

}