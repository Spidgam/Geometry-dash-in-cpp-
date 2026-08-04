#include "line.h"
#include<SFML/Graphics.hpp>



Line::Line(const std::string& imagepath1,const std::string& imagepath2) :lineBacTexture(imagepath1),lineBac1(lineBacTexture), 
    lineBac2(lineBacTexture),shadowLineTexture(imagepath2),shadowLine(shadowLineTexture)
{
    lineBac1.setPosition({0,400});
    lineBac2.setPosition({950,400});
    shadowLine.setPosition({0,400});
    
    line.setSize({960,10});
    line.setFillColor(sf::Color::White);
    line.setPosition({0,400});
}

void Line::Update()
{
    if(lineBac1.getPosition().x<=-950)
    {
        lineBac1.setPosition({950,400});
    }
    else
    {
        lineBac1.move({-2,0});
    }
    if(lineBac2.getPosition().x<=-950)
    {
        lineBac2.setPosition({950,400});
    }
    else
    {
        lineBac2.move({-2,0});
    }
}

void Line::draw(sf::RenderWindow& window)
{
    window.draw(lineBac1);
    window.draw(lineBac2);
    window.draw(shadowLine);
    window.draw(line);
}
