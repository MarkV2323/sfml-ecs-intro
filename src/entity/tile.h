#pragma once

#include "component/boundingBox.h"
#include "component/transform.h"
#include "component/shape.h"

namespace ecs {

class Tile
{
private:
    Tile() {};
    // Components that are attached to tile.
    BoundingBox* boundingBox;
    Transform* transform;
    Shape* shape;    
public:
    Tile(float x, float y, float vx, float vy, float w, float h, float r);
    Tile(sf::Vector2f p, sf::Vector2f v, sf::Vector2f bb, float r);
    ~Tile();

    // Access to our component information
    sf::Vector2f& getBoundingBox();
    
    sf::CircleShape& getShape();
    
    sf::Vector2f& getPosition();
    bool setPosition(sf::Vector2f& p);
    
    sf::Vector2f& getVelocity();
    bool setVelocity(sf::Vector2f& v);

};

}