#include <iostream>
#include "HelpState.h"
#include "sstream"
#include "MainMenu.h"

HelpState::HelpState(GameDataRef data) : _data(data) {

}

void HelpState::Init() {
    std::cout<<"it crashed 0"<<std::endl;
    this->_data->window.setFramerateLimit(60);
    this->_data->window.setView(this->_data->window.getDefaultView());

    this->_data->assets.LoadTexture("Return", RETURN);
    this->_data->assets.LoadTexture("Controls", CONTROLS);

    returnButton.setTexture(this->_data.get()->assets.GetTexture("Return"));
    controls.setTexture(this->_data.get()->assets.GetTexture("Controls"));


    returnButton.setPosition(this->_data->window.getSize().x/2-returnButton.getGlobalBounds().width/2, _data->window.getSize().y/6+450);
    controls.setPosition(this->_data->window.getSize().x/2-controls.getGlobalBounds().width/2, _data->window.getSize().y/6);


}

void HelpState::HandleInput() {
    sf::Event event;
    while (this->_data->window.pollEvent(event)) {
        if (sf::Event::Closed == event.type) {
            this->_data->window.close();
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) {
            this->_data->window.close();
        }
        if(this->_data->input.IsSpriteClicked(this->returnButton,sf::Mouse::Left, this->_data->window)){
            this->_data->machine.AddState(StateRef(new MainMenu(_data)), true);
        }
    }
}

void HelpState::Update(float dt) {

}

void HelpState::Draw(float dt) {
    this->_data->window.clear(sf::Color::Black);


    this->_data->window.draw(controls);

    this->_data->window.draw(returnButton);



    this->_data->window.display();
}
