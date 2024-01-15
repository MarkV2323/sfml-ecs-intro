#include "shape.h"

namespace ecs {
    Shape::Shape(float r) : circle(sf::CircleShape(r)) {}
    Shape::~Shape() {}

    sf::CircleShape& Shape::getShape() {
        return circle;
    }
    
    bool Shape::setPosition(sf::Vector2f &p) {
        circle.setPosition(p);
        return true;
    }
}
