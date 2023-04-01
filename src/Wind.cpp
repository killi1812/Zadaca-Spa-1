//
// Created by fran on 01.04.23..
//

#include "Wind.h"

Wind::Wind(sf::RenderWindow &prozor) {
    this->prozor = &prozor;
    rectangle.setSize(sf::Vector2f(1920.f, 1080.f));

    try {
        loadTexture();
    }
    catch (std::exception &ex) {
        std::cout << ex.what();
    }
}


void Wind::draw() {
    prozor->draw(rectangle);
}

void Wind::loadTexture() {
    if (!texture.loadFromFile("Background.png"))
        throw std::exception();
    rectangle.setTexture(&texture);

}
