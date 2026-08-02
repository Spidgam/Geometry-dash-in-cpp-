#include<iostream>
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
    
    sf::Texture texture("images/background1.jpg");
    sf::Sprite sprite(texture);
    
    sf::Texture texture2("images/background2.jpg");
    sf::Sprite sprite2(texture2);
    sprite.setPosition({950,0});

    sf::Texture shadowline("images/shadowline.png");
    sf::Sprite shadowsprite(shadowline);
    shadowsprite.setPosition({0,400});

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
        if(sprite.getPosition().x==-950)
        {
            sprite.setPosition({950,0});
        }
        else
        {
            sprite.move({-1,0});
        }
        if(sprite2.getPosition().x==-950)
        {
            sprite2.setPosition({950,0});
        }
        else
        {
            sprite2.move({-1,0});
        }
        
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Space))
        {

            character.setPosition({200,200}); 
        }
        if(!sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Space))
        {
            character.setPosition({200,300});
        }
        window.draw(sprite);
        window.draw(sprite2);
        window.draw(shadowsprite);
        window.draw(roadline);
        window.draw(character);
        

        window.display();
    }
}
