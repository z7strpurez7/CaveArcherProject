#include "MainMenu.h"
#include <memory>
#include "InGame.h"
#include "../Engine/StateMachine.h"
#include "../Engine/InputManager.h"
MainMenu::MainMenu(GameDataRef data) : _data(data){

}

void MainMenu::Init() {
    this->_data->window.setFramerateLimit(60);
    this->_data->window.setView(_data->window.getDefaultView());
    this->_data->assets.LoadTexture("Playbutton",PLAYBUTTON);
    this->_data->assets.LoadTexture("Settings", SETTINGS);
    this->_data->assets.LoadTexture("Help",HELP);
    this->_data->assets.LoadTexture("Return", RETURN);


    sf::Cursor cursor;
    if (cursor.loadFromSystem(sf::Cursor::Cross))
        _data->window.setMouseCursor(cursor);


    playButton.setTexture(this->_data->assets.GetTexture("Playbutton"));
    settingsButton.setTexture(this->_data->assets.GetTexture("Settings"));
    helpButton.setTexture(this->_data->assets.GetTexture("Help"));
    returnButton.setTexture(this->_data->assets.GetTexture("Return"));


/*
    playButton.setOrigin(playButton.getGlobalBounds().width/2, playButton.getGlobalBounds().top/2);
    settingsButton.setOrigin(settingsButton.getGlobalBounds().width/2, settingsButton.getGlobalBounds().top/2);
    helpButton.setOrigin(helpButton.getGlobalBounds().width/2, helpButton.getGlobalBounds().top/2);
    returnButton.setOrigin( returnButton.getGlobalBounds().width/2,  returnButton.getGlobalBounds().top/2);
 */
    playButton.setPosition(this->_data->window.getSize().x/2-playButton.getGlobalBounds().width/2, this->_data->window.getSize().y/6);
    settingsButton.setPosition(this->_data->window.getSize().x/2-settingsButton.getGlobalBounds().width/2, this->_data->window.getSize().y/6+150);
    helpButton.setPosition(this->_data->window.getSize().x/2-helpButton.getGlobalBounds().width/2, this->_data->window.getSize().y/6+300);
    returnButton.setPosition(this->_data->window.getSize().x/2-returnButton.getGlobalBounds().width/2, _data->window.getSize().y/6+600);

    this->_data->assets.LoadFont("font" , FONT_BASIC);
    this->playText.setFont(this->_data->assets.GetFont("font"));
    this->playText.setString("Play");
    playText.setLetterSpacing(5);
    playText.setCharacterSize(80);
    playText.setPosition(this->playButton.getGlobalBounds().left-30,this->playButton.getGlobalBounds().height+150);
    playText.setFillColor(sf::Color::White);





}

void MainMenu::Draw(float dt) {
    this->_data->window.clear(sf::Color::Black);


  //  this->_data->window.draw(playText);
    this->_data->window.draw(playButton);
    this->_data->window.draw(settingsButton);
    this->_data->window.draw(helpButton);
    this->_data->window.draw(returnButton);



    this->_data->window.display();
}
void MainMenu::Update(float dt) {

}


void MainMenu::HandleInput() {
    sf::Event event;
    while (this->_data->window.pollEvent(event)){
        if(sf::Event::Closed == event.type){
            this->_data->window.close( );
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)){
            this->_data->window.close( );
        }
        if(this->_data->input.IsSpriteClicked(this->playButton,sf::Mouse::Left, this->_data->window)){
           this->_data->machine.AddState(StateRef(new InGame(_data)), true);
        }

        if(this->_data->input.IsSpriteClicked(this->helpButton,sf::Mouse::Left, this->_data->window)){
            this->_data->machine.AddState(StateRef(new HelpState(_data)), true);
        }
        if(this->_data->input.IsSpriteClicked(this->returnButton,sf::Mouse::Left, this->_data->window)){
            this->_data->window.close();
        }

    }
}



