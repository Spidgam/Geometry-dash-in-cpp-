#include "Spike.h"
#include<SFML/Graphics.hpp>

Spike::Spike(const std::string &imagepath) :SpikeTexture(imagepath) , spike(SpikeTexture)
{
    spike.setPosition({300.f,300.f});
    spike.setScale({0.09,0.09});
}

void Spike::draw(sf::RenderWindow &window)
{
    window.draw(spike);
}
