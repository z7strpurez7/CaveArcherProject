#ifndef PLATFORMSHOOTER2D_BOWANIMATION_H
#define PLATFORMSHOOTER2D_BOWANIMATION_H
#include "SFML/Graphics.hpp"

class BowAnimation{
public:
    BowAnimation(sf::Texture* texture, sf::Vector2u imageCount, float switchTime);


    void Update(int row,float deltaTime,float switchTimer,int currentMin,int currentMax, bool firing, bool faceRight);

    sf::IntRect  uvVrect;

    void setSwitchTime(float switchtime){
        switchTime = switchtime;
    }
private:

    int cases;
    sf::Vector2u imageCount;
    sf::Vector2u currentImage;


    bool idleResetter;
    float totatTime;
    float switchTime;

};
#endif //PLATFORMSHOOTER2D_BOWANIMATION_H
