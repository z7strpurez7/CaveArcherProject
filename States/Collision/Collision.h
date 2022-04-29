#ifndef GAMEENGINE_COLLISION_H
#define GAMEENGINE_COLLISION_H
#include <SFML/Graphics.hpp>

class Collision
{
public:
    Collision(sf::RectangleShape& body);
    ~Collision();

    void Move(float dx, float dy){
        body.move(dx,dy);
    };

    bool checkCollision(Collision other,sf::Vector2f& direction, float push);
    sf::Vector2f GetPositions(){return body.getPosition();}
    sf::Vector2f GetHalfSize(){return body.getSize()/2.0f;}

private:
    sf::RectangleShape& body;
};

#endif //GAMEENGINE_COLLISION_H
