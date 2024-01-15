#include "tile.h"
namespace ecs {

Tile::Tile(sf::Vector2f p, sf::Vector2f v, sf::Vector2f bb, float r) 
    : transform(new Transform(p, v)), shape(new Shape(r)), boundingBox(new BoundingBox(bb)) {
    shape->setPosition(p);
}

Tile::Tile(float x, float y, float vx, float vy, float w, float h, float r) 
    : transform(new Transform(x, y, vx, vy)), shape(new Shape(r)), boundingBox(new BoundingBox(w, h)) {
    shape->setPosition(transform->getPosition());
}

Tile::~Tile() {
    delete boundingBox;
    delete transform;
    delete shape;
}

sf::Vector2f& Tile::getBoundingBox() {
    return boundingBox->getBoundingBox();
}

sf::CircleShape& Tile::getShape()
{
    return shape->getShape();
}

sf::Vector2f& Tile::getPosition() {
    return transform->getPosition();
}

bool Tile::setPosition(sf::Vector2f& p) {
    if (shape->setPosition(p) && transform->setPosition(p))
        return true;
    return false;
}

sf::Vector2f& Tile::getVelocity() {
    return transform->getVelocity();
}

bool Tile::setVelocity(sf::Vector2f& v) {
    return transform->setVelocity(v);
}

}