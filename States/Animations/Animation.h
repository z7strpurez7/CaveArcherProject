#ifndef GAMEENGINE_ANIMATION_H
#define GAMEENGINE_ANIMATION_H
#include "SFML/Graphics.hpp"

class Animation{
public:
    Animation(sf::Texture* texture, sf::Vector2u imageCount, float switchTime);




    void Update(int row, float deltaTime,int currentMin,int currentMax, bool faceRight, bool standStill, bool jumpingUp, bool JumpingDown, bool runRight);

    sf::IntRect  uvVrect;

private:

    int cases;
    sf::Vector2u imageCount;
    sf::Vector2u currentImage;

    bool idleResetter;
    float totatTime;
    float switchTime;

};

#endif //GAMEENGINE_ANIMATION_H
