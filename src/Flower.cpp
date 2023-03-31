//
// Created by fran on 31.03.23..
//

#include "Flower.h"

Flower::Flower() {
    sredina.setRadius(90.f);
    sredina.setFillColor(sf::Color::Yellow);
    sredina.setOutlineThickness(60.f);
    sredina.setOutlineColor(sf::Color::Magenta);
    sredina.setPosition(70.f,70.f);

    stabiljka.setSize(sf::Vector2f (500.f,20.f));
    stabiljka.move(getMiddleOfcircle()+sf::Vector2f(10,0));
    stabiljka.rotate(90);
    stabiljka.setFillColor(sf::Color::Green);

    leaf.setFillColor(sf::Color::Green);
    leaf.setPointCount(4);

    leaf.setPoint(0, sf::Vector2f(0,230));
    leaf.setPoint(1, sf::Vector2f(100,150));
    leaf.setPoint(2, sf::Vector2f(350,130));
    leaf.setPoint(3, sf::Vector2f(150,220));
    leaf.move(getMiddleOfStem());
}

void Flower::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    target.draw(stabiljka);
    target.draw(sredina);
    target.draw(leaf);

}

sf::Vector2f Flower::getMiddleOfcircle() {
    auto s = sredina.getPosition();
    s.x += sredina.getRadius();
    s.y += sredina.getRadius();
    return s;
}

sf::Vector2f Flower::getMiddleOfStem() {
    auto s = stabiljka.getPosition();
    s.y += 55;
    s -= sf::Vector2f(10,0);
    return s;
}