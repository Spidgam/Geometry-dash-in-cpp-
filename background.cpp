#include "background.h"
#include<SFML/Graphics.hpp>

background::background(const std::string& imagepath1) :texture1(imagepath1)
    ,sprite1(texture1), sprite2(texture1)
{ 
   sprite1.setPosition({0,0});
   sprite2.setPosition({950,0});
}

void background::update()
{
    if(sprite1.getPosition().x<=-950)
    {
        sprite1.setPosition({950,0});
    }
    else
    {
        sprite1.move({-0.5,0});
    }
    if(sprite2.getPosition().x<=-950)
    {
        sprite2.setPosition({950,0});
    }
    else
    {
        sprite2.move({-0.5,0});
    }
}

void background::draw(sf::RenderWindow& window)
{
    window.draw(sprite1);
    window.draw(sprite2);
}
