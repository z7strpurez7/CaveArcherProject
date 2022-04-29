#ifndef GAMEENGINE_SKELETONS_H
#define GAMEENGINE_SKELETONS_H
#include <SFML/Graphics.hpp>
#include "SFML/Audio.hpp"
#include "../Animations/Animation.h"
#include "../Collision/Collision.h"

class Player{
public:
    Player(sf::Texture* texture,sf::Texture* hpBar, sf::Vector2u imageCount, float switchTime, float speed, float jumpHeight);

    void Update(float deltaTime, sf::Vector2f viewCenter);
    void OnCollision(sf::Vector2f direction);
    void Draw(sf::RenderWindow& window);
    void DrawHP(sf::RenderWindow& window);
    void setAngle(bool angle){
        faceRight = angle;
    }


    sf::RectangleShape getHpBar(){
        return hpBar;
    }
    void setHpBarPos(sf::Vector2f pos){
        hpBar.setPosition(pos);
    }

    sf::Vector2f GetPosition() {
        return AnimationBody.getPosition();
    }
    /*
    sf::Vector2f GetPosition() {
        return body.getPosition();
    } */

    Collision getCollision() {
        return Collision(body);
    }

    sf::RectangleShape AnimationBody;
    sf::RectangleShape body;

    void losehp(){
        std::cout<<"it ran"<<std::endl;
        dmgTakenSound.play();
        hp--;
    }
    int getHP(){
        return hp;
    }

private:

    sf::RectangleShape hpBar;
    sf::SoundBuffer jumpBuffer;
    sf::Sound JumpSound;

    sf::SoundBuffer dmgTakenBuffer;
    sf::Sound dmgTakenSound;
    int hp;
    bool rejump = false;
    sf::Clock jumpCoolDown;
    Animation animation;
    unsigned int row;
    float speed;
    bool faceRight;
    float  baseVelocity;
    bool standStill;
    int currentMax;
    int currentMin;

    sf::Vector2f velocity;
    bool canJump;
    bool runRight;
    bool jumpingUP;
    bool jumpingDOWN;
    float jumpHeigth;
};
#endif //GAMEENGINE_SKELETONS_H
