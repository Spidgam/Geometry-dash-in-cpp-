#pragma once
#include <iostream>
#include<SFML/Graphics.hpp>

class background
{
    
    sf::Texture texture1;
    sf::Sprite sprite1;
    sf::Sprite sprite2;

    public:
    background(const std::string& imagepath1);

    void update();
    void draw(sf::RenderWindow& window);

};