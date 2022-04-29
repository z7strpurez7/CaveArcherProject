#include "../Collision/Collision.h"
#ifndef GAMEENGINE_MOVINGRECTANGLE_H
#define GAMEENGINE_MOVINGRECTANGLE_H
class movingRectangle{
public:
    movingRectangle(sf::Texture* texture, sf::Vector2f size, sf::Vector2f position);

    void Update(float deltaTime);
    void OnCollision(sf::Vector2f direction);
    void Draw(sf::RenderWindow& window);


    sf::Vector2f GetPosition() {
        return body.getPosition();
    }
    Collision getCollision() {
        return Collision(body);
    }
    float getPushPower(){
        return push;
    }
    sf::Vector2f BoxHit(){
        velocity.x = (40 * 10)*push;
    };



private:
    sf::RectangleShape body;
    sf::Vector2f velocity;
    float push;

};
#endif //GAMEENGINE_MOVINGRECTANGLE_H
