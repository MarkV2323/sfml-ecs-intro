#include <SFML/Graphics.hpp>
#include <iostream>

#include "entity/tile.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode(600, 600), "SFML works!");
    window.setFramerateLimit(60);

    // Create a tile
    ecs::Tile* tile = new ecs::Tile(sf::Vector2f(10, 10), sf::Vector2f(3, 2), sf::Vector2f(20, 20), 10);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
            if (event.type == sf::Event::KeyPressed && event.key.scancode == sf::Keyboard::Scan::Escape)
                window.close();
        }

        window.clear();
        
        // Draw System
        window.draw(tile->getShape());

        // Physics System
        auto p = tile->getPosition();
        auto v = tile->getVelocity();
        tile->setPosition(sf::Vector2f(p.x + v.x, p.y + v.y));

        // Collision System
        if (tile->getPosition().x <= 0 || tile->getPosition().x + tile->getBoundingBox().x >= 600) {
            auto nv = sf::Vector2f(v.x * -1.0, v.y);
            tile->setVelocity(nv);
        } 
        if (tile->getPosition().y <= 0 || tile->getPosition().y + tile->getBoundingBox().y >= 600) {
            auto nv = sf::Vector2f(v.x, v.y * -1.0);
            tile->setVelocity(nv);
        }

        window.display();
    }

    delete tile;
    return 0;
}