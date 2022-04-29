#ifndef PLATFORMSHOOTER2D_BULLETREPLACER_H
#define PLATFORMSHOOTER2D_BULLETREPLACER_H

#include "SFML/Graphics.hpp"
#include "../Collision/Collision.h"

class BulletReplacer{

public:
    BulletReplacer(sf::Texture *texture);

    BulletReplacer();

    ~BulletReplacer();


    void Draw(sf::RenderWindow& window);

    void Update(float deltaTime);

    void setPosition(sf::Vector2f position, float angle) {
        body.setRotation(angle);
        body.setPosition(position);
    }
    sf::Vector2f GetPosition() {
        return collisionBody.getPosition();
    }

    bool GetGlobalBoundsintersects(sf::RectangleShape rectangle) {
        return collisionBody.getGlobalBounds().intersects(rectangle.getGlobalBounds());
    }

    /*   sf::Vector2f GetPosition() {
           return body.getPosition();
       }
       bool GetGlobalBoundsintersects(sf::RectangleShape rectangle) {
           return body.getGlobalBounds().intersects(rectangle.getGlobalBounds());
       }*/


    float startDegree;
    sf::Vector2f currVelocity;
    float maxSpeed;
private:
    sf::RectangleShape body;
    sf::RectangleShape collisionBody;



    float degree;

    sf::Vector2f aimDir;

    float radius;

    sf::Vector2f mousePosWindow;




};

#endif //PLATFORMSHOOTER2D_BULLETREPLACER_H
