#pragma once
#include<iostream>
#include<SFML/Graphics.hpp>

class Character
{   
    sf::Texture CharacterTexture;
    
    sf::Sprite Charact;

    public:
    Character(const std::string& imagepath);

    void draw(sf::RenderWindow& window);
    void jump();

};