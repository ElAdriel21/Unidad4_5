#include <iostream>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
int main()
{
    sf::RenderWindow window(sf::VideoMode(500, 500), "5");

    int x = 500;

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
            if (event.type == sf::Event::MouseButtonPressed) {
                if (event.mouseButton.button == sf::Mouse::Left) {
                    if ((x - 1) < 100) {
                        x -= 1;
                    }
                    window.setSize(sf::Vector2u(x, x));
                }

                if (event.mouseButton.button == sf::Mouse::Right) {
                    if ((x + 1) > 1000) {
                        x += 1;
                    }
                    window.setSize(sf::Vector2u(x, x));
                }
            }
        }

        window.clear();

        window.display();
    }
}
