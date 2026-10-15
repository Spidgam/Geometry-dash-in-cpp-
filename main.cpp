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
    bool cjs; //represente the charecter courent mode jump or not
    static int  stsbt = 0; // status bit, 0-stable, 1-jump, 2-falling
    

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
        cha.jump(stsbt);
       
        
        
        
        bac.draw(window);
        line.draw(window);
        cha.draw(window);
        
       
        window.display();
    }
}
