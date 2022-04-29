#include "movingRectangle.h"
movingRectangle::movingRectangle(sf::Texture *texture, sf::Vector2f size, sf::Vector2f position) {
body.setSize(size);
body.setOrigin(size/2.0f);
body.setTexture(texture);
body.setPosition(position);

push = ((body.getSize().x/1000.f *5));
}

void movingRectangle::Update(float deltaTime) {


    velocity.x *= 0.8f;
     velocity.y += 50 * 9.81f * deltaTime;

    body.move(velocity *deltaTime);


}


void movingRectangle::OnCollision(sf::Vector2f direction) {
    if(direction.x < 0.0f){
        //collision on the left
        velocity.x = 0.0f;
    } else if (direction.x > 0.0f){
        //collision on the right
        velocity.x = 0.0f;
    }
    if(direction.y < 0.0f){
        velocity.y = 0.0f;
    } else if (direction.y > 0.0f){
        //collision on the top
        velocity.y = 0.0f;
    }
}

void movingRectangle::Draw(sf::RenderWindow &window) {
    window.draw(body);
}

