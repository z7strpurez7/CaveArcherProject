#ifndef GAMEENGINE_STATE_H
#define GAMEENGINE_STATE_H
#include "SFML/Graphics.hpp"
class State{
public:
    virtual void Init() = 0;
    virtual void HandleInput() = 0;
    virtual void Update(float dt) = 0;
    virtual void Draw(float dt) = 0;

    virtual void Pause() { }
    virtual void Resume() { }
};

#endif //GAMEENGINE_STATE_H
