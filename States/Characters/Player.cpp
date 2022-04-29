#include <cmath>
#include <iostream>
#include "Player.h"
#include "../../DEFINITIONS.h"
#include "../Collision/Collision.h"

Player::Player(sf::Texture *texture,sf::Texture* HPBar, sf::Vector2u imageCount, float switchTime, float speed, float jumpHeight) : animation(texture, imageCount, switchTime)
{
    hp = 12;
    this->speed = speed;
    this->jumpHeigth = jumpHeight;
    row = 0;
    currentMin = 0;
    faceRight = false;
    standStill = false;
    jumpingDOWN = false;
    jumpingUP = false;
    canJump = false;

    if (!jumpBuffer.loadFromFile(JUMP)){
        std::cout<<"Error Player Sound"<<std::endl;
    }
    if (!dmgTakenBuffer.loadFromFile(DMGTAKEN)){
        std::cout<<"Error Player Sound"<<std::endl;
    }


    dmgTakenSound.setBuffer(dmgTakenBuffer);
    JumpSound.setBuffer(jumpBuffer);
    //128 128

    //50 500
    // 3000 500
    AnimationBody.setPosition(150.0f, -150.0f);
    AnimationBody.setTexture(texture);
//    AnimationBody.setOutlineThickness(1);
//    AnimationBody.setOutlineColor(sf::Color::Red);


    body.setSize(sf::Vector2f(55.0f, 85.0f));
    body.setOrigin(body.getSize().x/2, body.getSize().y/2);
    AnimationBody.setSize(sf::Vector2f(108.0f, 108.0f));
    AnimationBody.setOrigin(AnimationBody.getSize().x / 2, AnimationBody.getSize().y / 2);
    //150.0f, -400.0f
    // 3000 500
    body.setPosition(150.0f, 0.0f);
  //  body.setTexture(texture);
    body.setOutlineThickness(1);
    body.setOutlineColor(sf::Color::Blue);
    hpBar.setTexture(HPBar);
    hpBar.setSize(sf::Vector2f (376, 32));
    hpBar.setTextureRect(sf::IntRect(0,0,376,32));
}


void Player::Update(float deltaTime, sf::Vector2f viewCenter) {
  velocity.x *=0.0f;
    hpBar.setTextureRect(sf::IntRect(0,(32*(12-hp)),376,32));
    if ((sf::Keyboard::isKeyPressed(sf::Keyboard::W ) || sf::Keyboard::isKeyPressed(sf::Keyboard::Space)) && canJump) {
        //  velocity.y = -sqrtf(10.0f*9.81f * jumpHeigth);
        JumpSound.play();
        velocity.y = -9.81f * jumpHeigth;
        rejump = true;
        canJump = false;
    }

  //  std::cout<<hp<<std::endl;
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
        velocity.x -= speed * 10;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
        velocity.x += speed * 10;
    }



    //gravity
    velocity.y += speed + (9.81f * deltaTime);
    baseVelocity = speed + (9.81f * deltaTime);

    if (velocity.x >= 0) {
        runRight = true;
    } else{
        runRight= false;
}
    if(velocity.x ==0 && velocity.y ==  speed+(9.81f * deltaTime)){
        standStill = true;
        currentMax = 7;
        currentMin = 0;
        row = 0;
    } else
        standStill = false;

    if(velocity.x != 0 && velocity.y== speed+(9.81f * deltaTime)){
        jumpingUP = false;
        jumpingDOWN = false;
        standStill = false;
        currentMax = 7;
        currentMin = 0;
        row=1;
   //     faceRight = velocity.x >= 0;
    }

    if (velocity.y > speed+(9.81f * deltaTime)+10){
        currentMax = 5;
        currentMin = 5;
        jumpingUP = false;
        jumpingDOWN = true;
        row = 2;
  //      faceRight = velocity.x >= 0;
    }

     if (velocity.y < speed+(9.81f * deltaTime)-10){
         currentMax =2;
         currentMin = 2;
         jumpingDOWN = false;
         jumpingUP = true;

    row = 2;
  //  faceRight = velocity.x >= 0;
}

    animation.Update(row, deltaTime,currentMax,currentMin, faceRight, standStill, jumpingUP, jumpingDOWN, runRight);
    AnimationBody.setTextureRect(animation.uvVrect);
    AnimationBody.setPosition(body.getPosition().x, body.getPosition().y);
    body.move(velocity*deltaTime);
//    hpBar.setPosition(viewCenter.x-SCREEN_WIDTH/2.f, viewCenter.y-SCREEN_HEIGHT/2.f);

}

void Player::OnCollision(sf::Vector2f direction) {
    if(direction.x < 0.0f){
        //collision on the left
        velocity.x = 0.0f;
    } else if (direction.x > 0.0f){
        //collision on the right
        velocity.x = 0.0f;
    }
    if(direction.y < 0.0f){
        //collision on the bottom
        if (jumpCoolDown.getElapsedTime().asMilliseconds()>600){
            canJump = true;
            jumpCoolDown.restart();
        }
        velocity.y = 0.0f;
    } else if (direction.y > 0.0f){
        //collision on the top
        velocity.y = 0.0f;

    }

}

void Player::Draw(sf::RenderWindow& window) {
 //   window.draw(body);

    window.draw(AnimationBody);

}

void Player::DrawHP(sf::RenderWindow &window) {
    window.draw(hpBar);
}






