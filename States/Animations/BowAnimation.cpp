#include <iostream>
#include "BowAnimation.h"

BowAnimation::BowAnimation(sf::Texture *texture, sf::Vector2u imageCount, float switchTime) {
    this->imageCount = imageCount;
    this->switchTime = switchTime;
    totatTime = 0.0f;
    currentImage.x = 0;


    uvVrect.width = texture->getSize().x/float (imageCount.x);
    //denne ble endret
    uvVrect.height = texture->getSize().y/ float(imageCount.y);
}

void BowAnimation::Update(int row,float deltaTime,float switchTimer, int currentMin, int currentMax, bool firing, bool faceRight) {
   switchTime = switchTimer;
  // std::cout<<switchTime<<std::endl;
    currentImage.y = row;
    totatTime += deltaTime;
  //  std::cout<<uvVrect.width<<std::endl;

    if(totatTime >= switchTime){
        totatTime -= switchTime;
        if (firing){
            currentImage.x++;
            if(currentImage.x >= 4) {
                currentImage.x = 0;
            }
        } else {
            currentImage.x = 3;
        }
    }


     /*   uvVrect.top = currentImage.y * uvVrect.height;
        uvVrect.left = currentImage.x * uvVrect.width;
        uvVrect.width = abs(uvVrect.width); */


    if(faceRight){
        uvVrect.top = currentImage.y * uvVrect.height;
        uvVrect.height= abs(uvVrect.height);
        uvVrect.left = currentImage.x * uvVrect.width;
        uvVrect.width = abs(uvVrect.width);
    } else{
        uvVrect.top = (currentImage.y+1) * abs(uvVrect.width);
        uvVrect.height= -abs(uvVrect.height);
        uvVrect.left = currentImage.x * uvVrect.width;
        uvVrect.width = abs(uvVrect.width);
    }


}
