#ifndef PLATFORMSHOOTER2D_BULLET_H
#define PLATFORMSHOOTER2D_BULLET_H
#include "SFML/Graphics.hpp"
#include "../Collision/Collision.h"

class Bullet{

public:
    Bullet(sf::Texture *texture);

    Bullet();

    ~Bullet();
    void Update(float deltaTime);
    void Fire(sf::Vector2f playerCenter, sf::Vector2f aimDirNorm);
    void Draw(sf::RenderWindow& window);


    float GetAngle() {
        return collisionBody.getRotation();
    }

    sf::Vector2f GetPosition() {
        return collisionBody.getPosition();
    }
    bool GetGlobalBoundsintersects(sf::RectangleShape rectangle) {
        return collisionBody.getGlobalBounds().intersects(rectangle.getGlobalBounds());
    }

    void setArrowSpeed(float speed, float Gravity){
        maxSpeed = speed;
        gravity = Gravity;
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
    float gravity;

    sf::Vector2f aimDir;

    float radius;

    sf::Vector2f mousePosWindow;




};


#endif //PLATFORMSHOOTER2D_BULLET_H
