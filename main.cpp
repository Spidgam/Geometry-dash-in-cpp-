#include<iostream>
#include"background.h"
#include"line.h"
#include <SFML/Graphics.hpp>

int main()
{

    float width = 960;
    float hight = 540;

    
    

    sf::RenderWindow window(sf::VideoMode({960, 540}), "windows mog");
    window.setFramerateLimit(500);
    
    background bac("images/background1.jpg");

    Line line("images/background1.jpg","images/shadowline.png");

    sf::Texture characterTexture("images/character.png");
    sf::Sprite character(characterTexture);
    character.setPosition({200,300});
    character.setScale({0.1,0.1});

    
    
    while(window.isOpen())
    {
        while(const std::optional event  = window.pollEvent())
        {
            if(event -> is<sf::Event::Closed>())
                window.close();
        }
        window.clear(sf::Color::Black);
        bac.update();
        line.Update();
        
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Space))
        {

            character.setPosition({200,200}); 
        }
        if(!sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Space))
        {
            character.setPosition({200,300});
        }
        
        bac.draw(window);
        line.draw(window);
        window.draw(character);
        

        window.display();
    }
}
