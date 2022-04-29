#ifndef GAMEENGINE_GAME_H
#define GAMEENGINE_GAME_H
#include <memory>
#include <string>
#include <SFML/Graphics.hpp>
#include "StateMachine.h"
#include "AssetManager.h"
#include "InputManager.h"

struct GameData
{
    StateMachine machine;
    sf::RenderWindow window;
    AssetManager assets;
    InputManager input;
};
typedef std::shared_ptr<GameData> GameDataRef;

class Game
{
public:
    Game(int width, int height, std::string title);

private:
    const float dt = 1.0f /60.0f;
  //  const float dt = 1.0f /120.0f;
    sf::Clock _clock;
    GameDataRef _data = std::make_shared<GameData>();
    void Run ();
};
#endif //GAMEENGINE_GAME_H
