#ifndef PLATFORMSHOOTER2D_CHARACTERBOW_H
#define PLATFORMSHOOTER2D_CHARACTERBOW_H
#include "SFML/Graphics.hpp"
#include "../Animations/BowAnimation.h"
#include "../../DEFINITIONS.h"
#include "math.h"
class CharacterBow{
public:
    CharacterBow(sf::Texture* texture, sf::Vector2u imageCount, float switchTime, float speed,sf::Vector2f startViewCenter);
void Update(float deltaTime,  sf::Vector2f playerPosition,sf::RenderWindow &window, sf::Vector2f viewCenter);
void Draw(sf::RenderWindow& window);

float getAngleDegree(){
    return angleDegree;
}

sf::Vector2f getAimDirNorm(){
    return aimDirNorm;
}
bool setFiring(bool firingStatus){
    firing=firingStatus;
}
    void setAngle(bool angle){
        faceRight = angle;
    }
    void setBowColor(sf::Color color){
    body.setFillColor(color);
}
void setSwitchTime(float switchtime){
    switchTimes = switchtime;
}

private:
    float switchTimes;
    bool firing;
    sf::RectangleShape body;
    sf::Vector2f aimDirNorm;
    int currentMax;
    int currentMin;
    sf::Vector2f startViewCenter;
    sf::Vector2f mousePosWindow;
    sf::Vector2f aimDir;
    float angleDegree;
    BowAnimation animation;
    sf::Clock clock;
    sf::Vector2f movement;
    unsigned int row;
    float speed;
    bool faceRight;
    int cases;
    bool standStill;
};

#endif //PLATFORMSHOOTER2D_CHARACTERBOW_H