#include "Enemy1Animation.h"
#include "SFML/Graphics.hpp"

#include <iostream>
#include "Animation.h"
#include "../../DEFINITIONS.h"
Enemy1Animation::Enemy1Animation(sf::Texture *texture, sf::Vector2u imageCount, float switchTime) {
    this->imageCount = imageCount;
    this->switchTime = switchTime;
    totatTime = 0.0f;
    currentImage.x = 0;

    uvVrect.width = texture->getSize().x/float (imageCount.x);
    uvVrect.height = texture->getSize().y/ float(imageCount.y);
}

void Enemy1Animation::Update(int row, float deltaTime,int currentMax,int currentMin, bool faceRight, bool boss) {
    currentImage.y = row;
    totatTime += deltaTime;
    uvVrect.top = currentImage.y * uvVrect.height;

    if(faceRight){
        uvVrect.left = currentImage.x * uvVrect.width;
        uvVrect.width = abs(uvVrect.width);
    } else{
        uvVrect.left = (currentImage.x+1) * abs(uvVrect.width);
        uvVrect.width = -abs(uvVrect.width);
    }

    if(totatTime >= switchTime){
        totatTime -= switchTime;

        if(currentImage.x >= currentMax) {
            currentImage.x = currentMin;
        }

        currentImage.x++;

             }



    uvVrect.top = currentImage.y * uvVrect.height;
    if(faceRight){
        uvVrect.left = currentImage.x * uvVrect.width;
        uvVrect.width = abs(uvVrect.width);
    } else{
        uvVrect.left = (currentImage.x+1) * abs(uvVrect.width);
        uvVrect.width = -abs(uvVrect.width);
    }
}
