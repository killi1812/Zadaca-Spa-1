#include <SFML/Graphics.hpp>
#include "Flower.h"
int main()
{
    auto window = sf::RenderWindow{ { 1920u, 1080u }, "CMake SFML Project" };
    window.setFramerateLimit(144);
    Flower cvijet(window);
    cvijet.Move(150,150);
    while (window.isOpen())
    {
        for (auto event = sf::Event{}; window.pollEvent(event);)
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }

        window.clear();
        cvijet.draw();
        window.display();
    }
}