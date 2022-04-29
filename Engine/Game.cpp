#include "Game.h"
#include "../States/StartScreen.h"
#include "../States/MainMenu.h"
Game::Game(int width, int height, std::string title) {
    _data->window.create(sf::VideoMode(width, height), title, sf::Style::Fullscreen | sf::Style::Titlebar);

    _data->machine.AddState(StateRef(new StartScreen(this->_data)));


    this->Run();
}
void Game::Run(){
    float newTime, frameTime, interpolation;
    float currentime = this->_clock.getElapsedTime().asSeconds();
    float accumulator = 0.0f;

    while (this->_data->window.isOpen()){
        this->_data->machine.ProcessStateChanges();

        newTime = this->_clock.getElapsedTime().asSeconds();

        frameTime = newTime - currentime;

        if(frameTime> 0.25f){
            frameTime = 0.25f;
        }
        currentime = newTime;
        accumulator += frameTime;

        while (accumulator >= dt){
            this->_data->machine.GetActiveState()->HandleInput();
            this->_data->machine.GetActiveState()->Update(dt);

            accumulator -= dt;
        }
        interpolation = accumulator/dt;
        this->_data->machine.GetActiveState()->Draw(interpolation);
    }
}