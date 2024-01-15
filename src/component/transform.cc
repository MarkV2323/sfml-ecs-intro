#include "transform.h"

namespace ecs {
    Transform::Transform(float x, float y, float v) : position(sf::Vector2f(x, y)), velocity(v) {}
    Transform::~Transform() {}

    sf::Vector2f Transform::getPosition() {
        return position;
    }

    bool Transform::setPosition(float& x, float& y) {
        position.x = x;
        position.y = y;
        return true;
    }

    float Transform::getVelocity() {
        return velocity;
    }

    bool Transform::setVelocity(float& v) {
        velocity = v;
        return true;
    }
}
