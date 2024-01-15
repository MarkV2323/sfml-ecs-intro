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

    float getRadius();
    bool setRadius(float& r);

    bool setFillColor(const sf::Color& c);
    bool setPosition(const sf::Vector2f& p); 
};

}