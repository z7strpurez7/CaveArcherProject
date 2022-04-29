#ifndef PLATFORMSHOOTER2D_HELPSTATE_H
#define PLATFORMSHOOTER2D_HELPSTATE_H
#include "../Engine/State.h"
#include "../Engine/Game.h"
#include "../DEFINITIONS.h"
#include "SFML/Graphics.hpp"



class HelpState : public State {
public:
    explicit HelpState (GameDataRef data);
    void Init();
    void HandleInput( );
    void Update(float dt);
    void Draw(float dt);

private:
    GameDataRef _data;

    sf::Sprite returnButton, controls;
    sf::Text playText;

};
#endif //PLATFORMSHOOTER2D_HELPSTATE_H
