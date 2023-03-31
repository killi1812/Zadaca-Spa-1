//
// Created by fran on 31.03.23..
//

#ifndef CMAKESFMLPROJECT_FLOWER_H
#define CMAKESFMLPROJECT_FLOWER_H

#include <SFML/Graphics.hpp>
class Flower : public sf::Drawable{
private:
    int add = 1;
    float angle = 0;
    sf::Clock frameClock;
    sf::CircleShape sredina;
    sf::RectangleShape stabiljka;
    sf::ConvexShape leaf;

    sf::Vector2f getMiddleOfcircle();
    sf::Vector2f getMiddleOfStem() const;
    void wiggle();
public:
    Flower();
    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
    void draw(sf::RenderWindow & w);
};


#endif //CMAKESFMLPROJECT_FLOWER_H
