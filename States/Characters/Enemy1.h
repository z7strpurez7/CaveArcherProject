#ifndef GAMEENGINE_ARCHER_H
#define GAMEENGINE_ARCHER_H
#include "../Animations/Enemy1Animation.h"
#include "../Collision/Collision.h"
class Enemy1{
public:
    Enemy1(sf::Texture* texture,sf::Texture* hpBar , sf::Vector2u imageCount, float switchTime, float speed, sf::Vector2f size, sf::Vector2f startPos,bool boss, bool standstill);

    void Update(float deltaTime,  sf::Vector2f playerPosition);
    void OnCollision(sf::Vector2f direction);
    void Draw(sf::RenderWindow& window);

    void setBodyPos(sf::Vector2f position){
        collisionBody.setPosition(position);
        body.setPosition(position);
        movement.y = 0;
        movement.x = 0;
    }
    sf::Vector2f GetPosition() {
        return collisionBody.getPosition();
    }
    sf::RectangleShape GetBody() {
        return body;
    }

    sf::RectangleShape GetCollisionBody() {
        return collisionBody;
    }

    Collision getCollision() {
        return Collision(collisionBody);
    }
  /*  Collision getCollision() {
        return Collision(body);
    } */

    void setBoss(bool setBoss){
        boss = true;
    }
    void losehp(){
        hp--;
        dealDmgClock.restart();

    }
    int getHP(){
        standStill = false;
        dmgClock.restart();
        return hp;
    }

    bool canDMG(){
        return dealDmg;
    }
    void resetDmgTimer(){
        dealDmgClock.restart();
    }
    sf::RectangleShape body;
private:
    bool dealDmg;

    bool boss;
    unsigned int hp;
    int currentMax;
    int currentMin;
    bool doubleJump;
    sf::RectangleShape collisionBody;

    sf::RectangleShape hpBar;
    Enemy1Animation animation;
    sf::Clock clock;
    sf::Clock dmgClock;
    sf::Clock dealDmgClock;
    sf::Vector2f movement;
    unsigned int row;
    float speed;
    bool faceRight;
    int cases;
    bool standStill;
};
#endif //GAMEENGINE_ARCHER_H
