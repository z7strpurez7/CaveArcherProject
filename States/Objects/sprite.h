#ifndef SPRITE_H
#define SPRITE_H

#include <SFML/System/Clock.hpp>

#include "object.h"
#include "../Collision/Collision.h"

class Sprite : public Object
{
    // Map needs to access protected/private data
    friend class Map;

public:
    explicit Sprite(Map& map) : Object(map) {}

    void process(float time) override;
    void draw(sf::RenderWindow& window) override;

    Collision getCollision() {
        return Collision(body);
    }


protected:
    sf::Sprite sprite;

    sf::RectangleShape body;
    sf::Vector2f size;
    // Object id
    int id = 0;

    // Id of first tile
    unsigned int gid = 0;

    // Location on screen
    int x = 0;
    int y = 0;

    // Dimensions
    int width = 0;
    int height = 0;

    // Current animation frame
    int frame = 0;

    // Times the animation
    sf::Clock clock;
};

#endif
