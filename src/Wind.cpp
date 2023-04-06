//
// Created by fran on 01.04.23..
//

#include "Wind.h"

Wind::Wind(sf::RenderWindow &prozor) {
    this->prozor = &prozor;
    rectangle.setSize(sf::Vector2f(1920.f, 1080.f));
    bacground.setSize(sf::Vector2f(1920.f, 1080.f));
    whiteRectangle.setSize(sf::Vector2f(500.f, 700.f));
    try {
        loadTexture();
    }
    catch (std::exception &ex) {
        std::cout << ex.what();
    }
}


void Wind::draw() {
    prozor->draw(bacground);
    windAnimate();
    prozor->draw(rectangle);
}

void Wind::loadTexture() {
    if (!texture.loadFromFile("Background.jpg"))
        throw std::exception();
    bacground.setTexture(&texture);

    if (!background.loadFromFile("bgt.png"))
        throw std::exception();
    rectangle.setTexture(&background);
}

void Wind::windAnimate() {
    prozor->draw(whiteRectangle);
    if(frameClock.getElapsedTime().asMicroseconds() >= 2){
        whiteRectangle.move(8,0);
        if(whiteRectangle.getPosition().x > 1920){
            whiteRectangle.setPosition(0.f,0);
        }
        frameClock.restart();
    }

}
