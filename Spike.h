#pragma once
#include<iostream>
#include<SFML/Graphics.hpp>

class Spike
{
    sf::Texture SpikeTexture;
    sf::Sprite spike;

    public:
    Spike(const std::string& imagepath);

    void GenSpikes();
    void draw(sf::RenderWindow& window);

};