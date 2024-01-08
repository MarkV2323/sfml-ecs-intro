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
    int getW();
    int getH();
    bool setW(int& w1);
    bool setH(int& h1);
};

}