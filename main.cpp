#include<iostream>
#include"background.h"
#include <SFML/Graphics.hpp>

int main()
{
    int bac1posx = 0;//background1 prime position x&y
    int bac1posy = 0;

    int bac2posx = 950;//background2 prime position x&y
    int bac2posy = 0;

    float width = 960;
    float hight = 540;

    
    

    sf::RenderWindow window(sf::VideoMode({960, 540}), "windows mog");
    window.setFramerateLimit(500);
    
    background bac("images/background1.jpg");

    sf::Texture shadowline("images/shadowline.png");
    sf::Sprite shadowsprite(shadowline);
    shadowsprite.setPosition({0,400});

    sf::Texture underlinetexture("images/background1.jpg");
    sf::Sprite underline(underlinetexture);
    underline.setPosition({0,400});

    sf::RectangleShape roadline({960,10});
    roadline.setFillColor(sf::Color::White);
    roadline.setPosition({0,400});    

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
        
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Space))
        {

            character.setPosition({200,200}); 
        }
        if(!sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Space))
        {
            character.setPosition({200,300});
        }
        
        bac.draw(window);
        window.draw(underline);
        window.draw(shadowsprite);
        window.draw(roadline);
        window.draw(character);
        

        window.display();
    }
}
