
#include "BulletReplacer.h"
#include <iostream>
#include "Bullet.h"
#include "math.h"

BulletReplacer::BulletReplacer(sf::Texture *texture) {
    radius = 5.f;
    currVelocity= sf::Vector2f(0.f,0.f);
    maxSpeed = 15.f;

    body.setSize(sf::Vector2f(7,67));
    body.setOrigin(body.getSize()/2.f);
    body.setTexture(texture);
}


void  BulletReplacer::Draw(sf::RenderWindow &window) {
    window.draw(body);

}




BulletReplacer::~BulletReplacer() {

}

BulletReplacer:: BulletReplacer() {}






