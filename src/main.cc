#include <SFML/Graphics.hpp>
#include <iostream>

#include "tile.h"

int main()
{

    ecs::Tile* t1 = new ecs::Tile(10, 10, 50, 50);
    std::cout <<
    "X POS: " << t1->getX() << std::endl <<
    "Y POS: " << t1->getY() << std::endl <<
    "W AMT: " << t1->getH() << std::endl <<
    "H AMT: " << t1->getW() << std::endl;

    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
    sf::RectangleShape r1;
    r1.setSize(sf::Vector2f(t1->getW(), t1->getH()));
    r1.setPosition(t1->getX(), t1->getY());
    r1.setOutlineColor(sf::Color::Red);
    r1.setOutlineThickness(3);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(r1);
        window.display();
    }

    delete t1;
    return 0;
}