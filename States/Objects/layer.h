#ifndef LAYER_H
#define LAYER_H

#include <string>

#include "../Objects/object.h"
#include "../Collision/Collision.h"

// Class representing a tile layer
class Layer : public Object
{
    // Map needs to access protected/private data
    friend class Map;

public:
    explicit Layer(Map& map) : Object(map) { }
    ~Layer() override { delete[] tilemap; }

    void draw(sf::RenderWindow& window) override;

    Collision getCollision() {
        return Collision(body);
    }
    int getWidth() const { return width; }
    int getHeight() const { return height; }
    unsigned int* getTilemap() { return tilemap; }

    std::vector<sf::Vector2f> positions;

protected:


    sf::RectangleShape body;
    sf::Vector2f size;
    int id = 0;
    std::string name;
    int width = 0;
    int height = 0;
    bool visible = false;
    unsigned int* tilemap = nullptr;
};

#endif
