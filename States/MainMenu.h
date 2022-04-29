#ifndef GAMEENGINE_MAINMENU_H
#define GAMEENGINE_MAINMENU_H

#include "SFML/Graphics.hpp"
#include "../Engine/State.h"
#include "../Engine/Game.h"
#include "StartScreen.h"
#include "../DEFINITIONS.h"
#include "MainMenu.h"
#include "iostream"

#include "HelpState.h"

class MainMenu : public State
{
public:
    MainMenu(GameDataRef data);
    void Init();
    void HandleInput( );
    void Update(float dt);
    void Draw(float dt);

private:

    GameDataRef _data;

    sf::Clock _clock;

    sf::Sprite _background;

    sf::Sprite playButton, settingsButton, helpButton, returnButton;
    sf::Text playText;
    sf::Font font;


    sf::Text settings, titleMenu, btn_play, btn_setting, btn_help, btn_score;

};
#endif //GAMEENGINE_MAINMENU_H
