#ifndef GAMEENGINE_INPUTMANAGER_H
#define GAMEENGINE_INPUTMANAGER_H

#include <SFML/Graphics.hpp>

class InputManager
{
public:
    InputManager(){};
    ~InputManager(){};

    bool IsSpriteClicked(sf::Sprite object, sf::Mouse::Button button, sf::RenderWindow& window);
    sf::Vector2i GetMousePosition(sf::RenderWindow &window);

};


#endif //GAMEENGINE_INPUTMANAGER_H
