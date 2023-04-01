//
// Created by fran on 31.03.23..
//

#include "Flower.h"

Flower::Flower(sf::RenderWindow &w) {
    prozor = &w;

    sredina.setRadius(90.f);
    sredina.setFillColor(sf::Color::Yellow);
    sredina.setOutlineThickness(60.f);
    sredina.setOutlineColor(sf::Color::Magenta);
    sredina.setPosition(70.f, 70.f);

    stabiljka.setSize(sf::Vector2f(500.f, 20.f));
    stabiljka.move(getMiddleOfcircle() + sf::Vector2f(10, 0));
    stabiljka.rotate(90);
    stabiljka.setFillColor(sf::Color::Green);

    leaf.setFillColor(sf::Color::Green);
    leaf.setPointCount(4);

    leaf.setPoint(0, sf::Vector2f(0, 230));
    leaf.setPoint(1, sf::Vector2f(100, 150));
    leaf.setPoint(2, sf::Vector2f(350, 130));
    leaf.setPoint(3, sf::Vector2f(150, 220));
    leaf.move(getMiddleOfStem());
}

sf::Vector2f Flower::getMiddleOfcircle() {
    auto s = sredina.getPosition();
    s.x += sredina.getRadius();
    s.y += sredina.getRadius();
    return s;
}

sf::Vector2f Flower::getMiddleOfStem() const {
    auto s = stabiljka.getPosition();
    s.y += 55;
    s -= sf::Vector2f(10, 0);
    return s;
}

void Flower::draw() {
    if (frameClock.getElapsedTime().asMilliseconds() >= 100) {
        wiggle();
        frameClock.restart();
    }
    prozor->draw(stabiljka, t);
    prozor->draw(sredina, t);
    prozor->draw(leaf, t);

}
#define osfet 3
void Flower::wiggle() {
    if (angle == -12) add = 1;
    if (angle == 33) add = 0;

    switch (add) {
        case 1:
            angle += osfet;
            t.rotate(osfet, getMiddleOfStem() + sf::Vector2f(0, 440));
            break;
        case 0:
            angle -= osfet;
            t.rotate(-osfet, getMiddleOfStem() + sf::Vector2f(0, 440));
            break;
    }
}

void Flower::Move(float x, float y) {
    stabiljka.move(x,y);
    sredina.move(x,y);
    leaf.move(x,y);

}
