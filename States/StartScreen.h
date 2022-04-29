#ifndef GAMEENGINE_STARTSCREEN_H
#define GAMEENGINE_STARTSCREEN_H

#include "../Engine/State.h"
#include "../Engine/Game.h"

class StartScreen : public State
{
public:
    StartScreen(GameDataRef data);

    void Init();

    void HandleInput( );
    void Update(float dt);
    void Draw(float dt);

private:
    GameDataRef _data;

    sf::Clock _clock;

    sf::Sprite background;

    sf::Sprite Logo;
    sf::Text playText, underText;
};
#endif //GAMEENGINE_STARTSCREEN_H
