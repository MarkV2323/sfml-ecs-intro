#pragma once

#include <SFML/System/Vector2.hpp>

namespace ecs {
/**
 * Transform contains information about position and veloctiy.
*/
class Transform
{
private:
    Transform() {};
    sf::Vector2f position;
    float velocity;
public:
    Transform(float x, float y, float v);
    ~Transform();
    
    sf::Vector2f getPosition();
    bool setPosition(float& x, float& y);

    float getVelocity();
    bool setVelocity(float& v);
};

}