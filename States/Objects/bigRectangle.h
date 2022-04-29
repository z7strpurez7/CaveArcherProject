#include "SFML/Graphics.hpp"

#ifndef GAMEENGINE_BIGRECTANGLE_H
#define GAMEENGINE_BIGRECTANGLE_H
#include "../Collision/Collision.h"
class bigRectangle{
public:
    bigRectangle(sf::Texture* texture, sf::Vector2f size, sf::Vector2f position);
    ~bigRectangle();

    void Draw(sf::RenderWindow& window);


    Collision GetCollision(){
        return Collision(body);
    }
    sf::RectangleShape body;

private:

    sf::Vector2f velocity;
};
#endif //GAMEENGINE_BIGRECTANGLE_H
