#include <iostream>
#include "CharacterBow.h"


CharacterBow::CharacterBow(sf::Texture *texture, sf::Vector2u imageCount, float switchTime, float speed, sf::Vector2f startViewCenter): animation(texture, imageCount,switchTime) {
  //128 128
    switchTimes = switchTime;
    body.setSize(sf::Vector2f(108.f*1.5,108.f*1.5));
    texture->setSmooth(true);
    body.setTexture(texture);
 //   body.setOutlineColor(sf::Color::Green);
 //   body.setOutlineThickness(1);
    body.setOrigin(body.getSize().x/2, body.getSize().y/2);
    this->startViewCenter = startViewCenter;
    standStill = false;
    faceRight = true;
    firing = false;
    row = 0;
    currentMin = 0;
    currentMax = 4;


}

void CharacterBow::Update(float deltaTime, sf::Vector2f playerPosition, sf::RenderWindow &window, sf::Vector2f viewCenter) {

    //finner mouse posisiton
   // mousePosWindow = sf::Vector2f(sf::Mouse::getPosition(window).x-(startViewCenter.x - viewCenter.x), sf::Mouse::getPosition(window).y-((startViewCenter.y - viewCenter.y)));
    mousePosWindow = sf::Vector2f(sf::Mouse::getPosition(window).x-(startViewCenter.x-viewCenter.x), sf::Mouse::getPosition(window).y-(startViewCenter.y- viewCenter.y));
//    std::cout<<mousePosWindow.x <<" "<<mousePosWindow.y<<std::endl;
    //finner mousedirection
    aimDir = mousePosWindow - playerPosition;
    //finner pil utskytningsvinkel
    //   angle = atan2(aimDir.x, -aimDir.y);
    angleDegree = atan2(aimDir.x, -aimDir.y)*180.f/ 3.14;
    body.setRotation(angleDegree-90);
    if (faceRight){
        body.setPosition(sf::Vector2f(playerPosition.x-15, playerPosition.y));
    } else {
        body.setPosition(sf::Vector2f(playerPosition.x+15, playerPosition.y));
    }
    aimDirNorm = aimDir / (static_cast<float>(sqrt(pow(aimDir.x,2) + pow(aimDir.y,2))));


    body.setTextureRect(animation.uvVrect);
    animation.Update(row, deltaTime,switchTimes, currentMax,currentMin, firing, faceRight);
}

void CharacterBow::Draw(sf::RenderWindow &window) {
    window.draw(body);
}
