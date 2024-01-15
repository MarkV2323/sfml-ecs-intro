#include "shape.h"

namespace ecs {
    Shape::Shape(float r) : circle(sf::CircleShape(r)) {}
    Shape::~Shape() {}

    float Shape::getRadius() {
        return circle.getRadius();
    }

    bool Shape::setRadius(float &r) {
        circle.setRadius(r);
        return true;
    }

    bool Shape::setFillColor(const sf::Color &c) {
        circle.setFillColor(c);
        return true;
    }

    bool Shape::setPosition(const sf::Vector2f &p) {
        circle.setPosition(p);
        return true;
    }
}
