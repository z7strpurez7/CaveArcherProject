#include <iostream>
#include "Bullet.h"
#include "math.h"

Bullet::Bullet(sf::Texture *texture) {
    radius = 5.f;
    currVelocity= sf::Vector2f(0.f,0.f);
    maxSpeed = 15.f;
   // body.setRadius(radius);
//29 * 270
//10 40

//7 67
    body.setSize(sf::Vector2f(7,67));
    body.setOrigin(body.getSize()/2.f);
    body.setTexture(texture);
    body.setFillColor(sf::Color::Red);
   // body.rotate(angle*3);
    collisionBody.setSize(sf::Vector2f(1, 10));
   // body.setOutlineColor(sf::Color::Green);
  //  body.setOutlineThickness(1);
    collisionBody.setOutlineColor(sf::Color::Red);
    collisionBody.setOutlineThickness(1);
    collisionBody.setOrigin(sf::Vector2f (1, 30));
}


void Bullet::Draw(sf::RenderWindow &window) {
    window.draw(body);
  //window.draw(collisionBody);
}


void Bullet::Update(float deltaTime) {
    currVelocity.y += 9.81f*2* deltaTime;
    degree = atan(currVelocity.y/currVelocity.x)*180/3.14;
 //   std::cout<<degree<<std::endl;

   if(currVelocity.x > 0){
        body.setRotation(degree+90);
        collisionBody.setRotation(degree+90);
    } else if(currVelocity.x < 0){
        body.setRotation(degree-90);
       collisionBody.setRotation(degree-90);
    }

/*    if(currVelocity.x > 0){
        body.setRotation(degree+90);
    } else if(currVelocity.x < 0){
        body.setRotation(degree-90);
    } */


  /*  if (currVelocity.y == 0){
        body.rotate(1);
    }else if (currVelocity.y < 0){
        body.rotate(-degree);
    } else if(currVelocity.y > 0 )  {
        body.rotate(degree);
    } */

  // body.rotate(1);


  //burde egentlig være omvendt
    body.move(currVelocity);
    collisionBody.setPosition(sf::Vector2f (body.getPosition().x,body.getPosition().y));
}

void Bullet::Fire(sf::Vector2f playerCenter, sf::Vector2f aimDirNorm) {
    body.setPosition(playerCenter.x, playerCenter.y-10);
    currVelocity = (aimDirNorm * maxSpeed);
  //  std::cout<<currVelocity.y<<std::endl;
}

Bullet::~Bullet() {}

Bullet::Bullet() {}

