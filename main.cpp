#include<iostream>
#include"background.h"
#include"line.h"
#include"Character.h"
#include <SFML/Graphics.hpp>

int main()
{
    float width = 960;
    float hight = 540;
    int counter = 0;
    
    

    sf::RenderWindow window(sf::VideoMode({960, 540}), "windows mog");
    window.setFramerateLimit(500);
    
    background bac("images/background1.jpg");

    Line line("images/background1.jpg","images/shadowline.png");

    Character cha("images/character.png");
    
    
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
        cha.jump();
        
        
        
        bac.draw(window);
        line.draw(window);
        cha.draw(window);
        
        

        window.display();
    }
}
