//
// Created by Dmitry Morozov on 07.03.2022.
//

#include "main.h"
#include <SFML/Graphics.hpp>


int main(int argc, char *argv[]) {
    sf::RenderWindow window(sf::VideoMode(1024, 768), "Snake Game!");
    window.setFramerateLimit(60);

    //TODO: Draw some shapes    differently (rectangle, circle, etc.)
    sf::RectangleShape rectangle(sf::Vector2f(100.f, 100.f));
    rectangle.setFillColor(sf::Color::Yellow);
    rectangle.setPosition(100.f, 100.f);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        //Render
        window.clear();
        window.draw(rectangle);
        window.display();
    }


    return 0;
}

