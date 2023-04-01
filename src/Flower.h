//
// Created by fran on 31.03.23..
//

#ifndef CMAKESFMLPROJECT_FLOWER_H
#define CMAKESFMLPROJECT_FLOWER_H

#include <SFML/Graphics.hpp>
class Flower{
private:
    int add = 1;
    float angle = 0;

    sf::Transform t;
    sf::Clock frameClock;
    sf::CircleShape sredina;
    sf::RectangleShape stabiljka;
    sf::ConvexShape leaf;
    sf::RenderWindow* prozor;

    sf::Vector2f getMiddleOfcircle();
    sf::Vector2f getMiddleOfStem() const;
    void wiggle();
public:
    explicit Flower(sf::RenderWindow & w);
    void draw();
    void Move(float x, float y);
};


#endif //CMAKESFMLPROJECT_FLOWER_H
