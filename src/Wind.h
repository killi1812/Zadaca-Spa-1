//
// Created by fran on 01.04.23..
//

#ifndef CMAKESFMLPROJECT_WIND_H
#define CMAKESFMLPROJECT_WIND_H


#include <SFML/Graphics.hpp>
#include <iostream>
class Wind {
private:
    sf::Clock frameClock;
    sf::RenderWindow* prozor;
    sf::RectangleShape rectangle;
    sf::Texture texture;
    void loadTexture();
public:
    Wind(sf::RenderWindow &prozor);
    void draw();
};


#endif //CMAKESFMLPROJECT_WIND_H