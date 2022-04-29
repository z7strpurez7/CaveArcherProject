#include <iostream>
#include "Animation.h"
#include "../../DEFINITIONS.h"
Animation::Animation(sf::Texture *texture, sf::Vector2u imageCount, float switchTime) {
    this->imageCount = imageCount;
    this->switchTime = switchTime;
    totatTime = 0.0f;
    currentImage.x = 0;

    uvVrect.width = texture->getSize().x/float (imageCount.x);
    uvVrect.height = texture->getSize().y/ float(imageCount.y);
}

void Animation::Update(int row, float deltaTime,int currentMax,int currentMin, bool faceRight, bool standStill, bool jumpingUp, bool jumpingDown, bool runRight) {
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

        if ((runRight && faceRight)|| (!faceRight && !runRight)){

           if(currentImage.x >= currentMax) {
                currentImage.x = currentMin;
            }


        if (standStill) {
            switchTime = 0.3f;
           //     currentImage.x++;
            currentImage.x = 0;
        }
        else if (jumpingUp){
            //switchTime = 0.3f;
          //  currentImage.x++;
         currentImage.x = 2;
        } else if (jumpingDown){
            //switchTime = 0.3f;
            //  currentImage.x++;
            currentImage.x = 5;
        }else {
            switchTime = 0.1f;
                currentImage.x++;
        }
        } else if((!runRight && faceRight) || (!faceRight && runRight)) {


             if(currentImage.x <= currentMin) {
                 currentImage.x = currentMax;
             }

            if (standStill) {
                switchTime = 0.3f;
               // currentImage.x--;
                    currentImage.x = 0;
            } else if (jumpingUp) {
                //switchTime = 0.3f;
                //  currentImage.x++;
                currentImage.x = 2;
            } else if (jumpingDown) {
                //switchTime = 0.3f;
                //  currentImage.x++;
                currentImage.x = 5;
            } else {
                switchTime = 0.1f;
                currentImage.x--;
            }
        }



   /*    if (standStill) {
            currentImage.x++;
            if(currentImage.x >= 8) {      //Starter animasjonen på nytt (setter x posision tilbake til 0).
                currentImage.x = 0;
            }
            switchTime = 0.5f;
        } else {
            switchTime = 0.02f;
            if(currentImage.x >= 9) {      //Starter animasjonen på nytt (setter x posision tilbake til 0).
                currentImage.x = 0;
            }
            currentImage.x++;
        } */
    }

   // uvVrect.left = currentImage.x * uvVrect.width;
    uvVrect.top = currentImage.y * uvVrect.height;
    if(faceRight){
        uvVrect.left = currentImage.x * uvVrect.width;
        uvVrect.width = abs(uvVrect.width);
    } else{
        uvVrect.left = (currentImage.x+1) * abs(uvVrect.width);
        uvVrect.width = -abs(uvVrect.width);
    }
}
