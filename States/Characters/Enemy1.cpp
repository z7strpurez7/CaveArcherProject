
#include <iostream>
#include <cmath>
#include "Enemy1.h"

#include "../../DEFINITIONS.h"

Enemy1::Enemy1(sf::Texture *texture, sf::Texture *HPBar, sf::Vector2u imageCount, float switchTime, float speed,sf::Vector2f size,  sf::Vector2f startPos, bool boss, bool standstill) : animation(texture, imageCount, switchTime)
{
    this->speed = speed;
    currentMin = 0;
    currentMax = 28;
    row = 0;
    dealDmg = true;
    faceRight = true;
    this->standStill = standstill;
    this->boss = boss;
    body.setSize(size);
    body.setPosition(1000.0f, 960.0f);
    body.setOrigin(body.getSize().x/2, body.getSize().y/2);
    body.setTexture(texture);

    hpBar.setPosition(body.getPosition());
    //texture size 376, 384
  //  HPBar->setSmooth(true);
    hpBar.setTexture(HPBar);
    hpBar.setSize(sf::Vector2f (376, 32));
    hpBar.setScale((1.f/(hpBar.getTexture()->getSize().x/size.x))*0.6f, (1.f-(1.f/(size.y/32)))*0.50f);
    hpBar.setOrigin(hpBar.getSize().x/2,hpBar.getSize().y/2);
    hpBar.setTextureRect(sf::IntRect(0,0,376,32));

    collisionBody.setSize(size/2.f);
    collisionBody.setOrigin(collisionBody.getSize().x/2,collisionBody.getSize().y/2);
    collisionBody.setOutlineThickness(2);
    collisionBody.setOutlineColor(sf::Color::Red);
    collisionBody.setPosition(startPos);
    if (boss){
        hp = 11;
    } else{
        hp = 2;
    }
  //  body.setFillColor(sf::Color::Red);
  //  body.setOutlineThickness(5);
  //  body.setOutlineColor(sf::Color::Green);
}

void Enemy1::Update(float deltaTime,  sf::Vector2f playerPosition) {
  //  movement.y = 0;
    movement.x *= 0.0f;
  //  std::cout<<hpBar.getTexture()->getSize().x <<" "<<hpBar.getTexture()->getSize().y<<std::endl;
//    std::cout<<hpBar.getTexture()->getSize().x/this.size.x<<std::endl;

    if (dealDmgClock.getElapsedTime().asMilliseconds()>1000){
        dealDmg = true;
    } else {
        dealDmg = false;
    }


    hpBar.setTextureRect(sf::IntRect(0,32*(11-hp),376,32));
    if(!boss){
        if( body.getPosition().x-playerPosition.x < 600 && body.getPosition().y-playerPosition.y < 150){
            standStill=false;
            if (playerPosition.x > body.getPosition().x){
                movement.x += speed*4;
            } else if (playerPosition.x < body.getPosition().x){
                movement.x -= speed*4;
            }
        } else if (!standStill){
            if (clock.getElapsedTime().asMilliseconds()> 9000){
                clock.restart();
            } else if (clock.getElapsedTime().asMilliseconds() > 6000){
                movement.x -= speed*1.2;
            } else if (clock.getElapsedTime().asMilliseconds() > 3000) {
                movement.x += speed*1.2;
            }
        }
    }

    if (boss){ if(body.getPosition().x-playerPosition.x < 900 && body.getPosition().y-playerPosition.y < 400){
            if (playerPosition.x > body.getPosition().x){
                movement.x += speed*4;
            } else if (playerPosition.x < body.getPosition().x){
                movement.x -= speed*4;
            }
        } else {
            if (clock.getElapsedTime().asMilliseconds()> 15500){
                clock.restart();
            } else if (clock.getElapsedTime().asMilliseconds() > 8000){
                movement.x -= speed*1.2;
            } else if (clock.getElapsedTime().asMilliseconds() > 500) {
                movement.x += speed*1.2;
            }
        }
    }

    //  std::cout<<body.getPosition().x<< " " <<playerPosition.x <<std::endl;


    //gravity

    if (movement.y < 1000) {
        movement.y += speed + (9.81f * deltaTime);
    }

    animation.Update(row, deltaTime, currentMax,currentMin, faceRight, false);
    body.setTextureRect(animation.uvVrect);
  //  body.move(movement*deltaTime);

    hpBar.setPosition(sf::Vector2f(floor(body.getPosition().x), body.getPosition().y-body.getSize().y/2));
    body.setPosition(collisionBody.getPosition());
    collisionBody.move(movement*deltaTime);
}

void Enemy1::OnCollision(sf::Vector2f direction) {
    if(direction.x < 0.0f){
        //collision on the left
        movement.x = 0.0f;
    } else if (direction.x > 0.0f){
        //collision on the right
        movement.x = 0.0f;
    }
    if(direction.y < 0.0f){
        //collision on the bottom

        movement.y = 0.0f;
    } else if (direction.y > 0.0f){
        //collision on the top
        movement.y = 0.0f;
    }
}

void Enemy1::Draw(sf::RenderWindow& window) {
 //|   window.draw(collisionBody);
    window.draw(body);
    if (dmgClock.getElapsedTime().asMilliseconds()<1500){
        window.draw(hpBar);
    }


}

