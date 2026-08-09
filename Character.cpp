#include "Character.h"

Character::Character(const std::string &imagepath):CharacterTexture(imagepath),Charact(CharacterTexture)
{
    Charact.setPosition({200,300});
    Charact.setScale({0.1,0.1});
}

void Character::draw(sf::RenderWindow &window)
{
    window.draw(Charact);
}

void Character::jump()
{
    
    
    if(Charact.getPosition().y<300 && Charact.getPosition().y>=200)
    {
        Charact.move({0,0.5});
    }
       
    
    else
    {
       if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Space))
        {

            Charact.setPosition({200,200}); 
     
        }
    }
    
}
