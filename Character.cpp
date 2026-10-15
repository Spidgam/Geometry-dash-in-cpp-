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

void Character::jump(int& stsbt)
{
    
    if(stsbt == 0)
    {
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Space))
        {
            
            stsbt = 1;
        }
        
    }
    if(stsbt == 1&& Charact.getPosition().y == 200)
    {
        stsbt =2;
    }
    if(stsbt == 1)
    {
        Charact.move({0,-0.5});
    }
    if(stsbt==2 &&Charact.getPosition().y == 300)
    {
        stsbt = 0;
    }
    if(stsbt == 2)
    {
        Charact.move({0,0.5});
    }
    if(stsbt == 1 || stsbt == 2)
    {
        
    }
    
}

int Character::getPosition()
{
    return Charact.getPosition().y;
}
