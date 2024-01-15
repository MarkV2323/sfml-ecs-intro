#pragma once

#include <SFML/Graphics/CircleShape.hpp>

namespace ecs {
/**
 * Shape contains information about a sf::sphere
*/
class Shape
{
private:
    Shape() {};
    sf::CircleShape circle;
public:
    Shape(float r);
    ~Shape();

    sf::CircleShape& getShape();
    bool setPosition(sf::Vector2f& p);
};

}