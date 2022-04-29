#include "sstream"
#include "StartScreen.h"
#include "../DEFINITIONS.h"
#include "MainMenu.h"
#include "iostream"


StartScreen::StartScreen(GameDataRef data) : _data(data)
{

}

void StartScreen::Init() {
    this->_data->window.setFramerateLimit(60);

    Logo.setScale(2,2);
    Logo.scale(0.5, 0.5);
    Logo.setPosition(this->_data->window.getSize().x / 2 - Logo.getGlobalBounds().width / 2, this->_data->window.getSize().y / 3 );

    this->_data->assets.LoadFont("font" , FONT_BASIC);
    this->playText.setFont(this->_data->assets.GetFont("font"));
    this->playText.setString("Cave Archer");
    playText.setCharacterSize(130);
    playText.setOrigin(playText.getGlobalBounds().width/2, playText.getGlobalBounds().top/2);
    playText.setPosition(SCREEN_WIDTH/2, SCREEN_HEIGHT/3);
    playText.setFillColor(sf::Color::White);

    this->underText.setFont(this->_data->assets.GetFont("font"));
    this->underText.setString("Powered by Ali's hjemmelagde engine");
    underText.setCharacterSize(80);
    underText.setOrigin(  underText.getGlobalBounds().width/2,   underText.getGlobalBounds().top/2);
    underText.setPosition(SCREEN_WIDTH/2, SCREEN_HEIGHT/2);
    underText.setFillColor(sf::Color::White);
}

void StartScreen::HandleInput() {
    sf::Event event;

    while (this->_data->window.pollEvent(event)){
        if(sf::Event::Closed == event.type){
            this->_data->window.close( );
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)){
            this->_data->window.close( );
        }
    }
}
void StartScreen::Update(float dt) {


    if(this->_clock.getElapsedTime().asSeconds() > SPLASH_STATE_SHOW_TIME){
      this->_data->machine.AddState(StateRef(new MainMenu(_data)), true);
    }
    background.move(-1,0);
}
void StartScreen::Draw(float dt) {
/*
    if(this->_clock.getElapsedTime().asSeconds() > (SPLASH_STATE_SHOW_TIME/3)*2) {
        this->_data->window.clear(sf::Color::Black);
        Logo.setTexture(this->_data->assets.GetTexture("Black"));
    }else if(this->_clock.getElapsedTime().asSeconds() > SPLASH_STATE_SHOW_TIME/3){
        this->_data->window.clear(sf::Color::White);
        Logo.setTexture(this->_data->assets.GetTexture("White"));
    }else
 */
  //  this->_data->window.draw(this->background);
  //  this->_data->window.draw(this->Logo);
    this->_data->window.draw(this->playText);
    this->_data->window.draw(this->underText);

    this->_data->window.display();
}