#include <SFML/Graphics.hpp>
#include <iostream>

#include "sprite.h"
#include "../Map/map.h"

void Sprite::process(float deltaTime)
{
    auto& animation = map.getAnimation(gid);

    if (!animation)
        return;

    // Go to next animation frame if required
    if (clock.getElapsedTime().asMilliseconds() < (*animation)[frame].duration)
        return;

    if (++frame >= (int)animation->size())
        frame = 0;

    clock.restart();
}

void Sprite::draw(sf::RenderWindow& window)
{

    map.setSpriteTextureFromGid(sprite, gid, frame);

    //Get sprite size
    sf::Vector2f size = sf::Vector2f(width, height);

    sf::Sprite sprite;
    map.setSpriteTextureFromGid(sprite, gid, frame);
    sprite.setPosition((float)x, (float)y);

    window.draw(sprite);

    sprite.setOrigin(size / 2.0f);
    sprite.setPosition((float)x, (float)y);

    body.setPosition(sprite.getGlobalBounds().left, sprite.getGlobalBounds().top);
    body.setOutlineColor(sf::Color::Red);
    body.setOutlineThickness(5);


    window.draw(sprite);



    window.draw(body);

}
