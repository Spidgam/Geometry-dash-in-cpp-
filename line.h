#pragma once
#include<iostream>
#include<SFML/Graphics.hpp>

class Line
{
    sf::RectangleShape line;
    sf::Texture lineBacTexture;
    sf::Texture shadowLineTexture;

    sf::Sprite lineBac1;
    sf::Sprite lineBac2;
    sf::Sprite shadowLine;
    


    public:
    Line(const std::string& imagepath1,const std::string& imagepath2);
    void Update();
    void draw(sf::RenderWindow& window);


};