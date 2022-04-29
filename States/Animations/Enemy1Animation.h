#ifndef PLATFORMSHOOTER2D_ENEMY1ANIMATION_H
#define PLATFORMSHOOTER2D_ENEMY1ANIMATION_H
#include "SFML/Graphics.hpp"

class Enemy1Animation{
public:
    Enemy1Animation(sf::Texture* texture, sf::Vector2u imageCount, float switchTime);




    void Update(int row, float deltaTime,int currentMin,int currentMax, bool faceRight, bool boss);

    sf::IntRect  uvVrect;

private:

    int cases;
    sf::Vector2u imageCount;
    sf::Vector2u currentImage;

    bool idleResetter;
    float totatTime;
    float switchTime;
};


#endif //PLATFORMSHOOTER2D_ENEMY1ANIMATION_H
