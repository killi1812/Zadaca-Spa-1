//
// Created by fran on 31.03.23..
//

#ifndef CMAKESFMLPROJECT_FLOWER_H
#define CMAKESFMLPROJECT_FLOWER_H

#include <SFML/Graphics.hpp>
class Flower : public sf::Drawable{
private:
    sf::CircleShape sredina;
    sf::RectangleShape stabiljka;
    sf::ConvexShape leaf;
    sf::Vector2f getMiddleOfcircle();
    sf::Vector2f getMiddleOfStem();

public:
    Flower();
    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;

};


#endif //CMAKESFMLPROJECT_FLOWER_H
