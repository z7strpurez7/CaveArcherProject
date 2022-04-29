#include "bigRectangle.h"

bigRectangle::bigRectangle(sf::Texture *texture, sf::Vector2f size, sf::Vector2f position) {
body.setSize(size);
body.setOrigin(size/2.0f);
body.setTexture(texture);
body.setFillColor(sf::Color::Yellow);
//body.setTextureRect(sf::IntRect(spritePosition.left, spritePosition.top, spritePosition.width,spritePosition.height));
body.setPosition(position);

}

bigRectangle::~bigRectangle() {

}


void bigRectangle::Draw(sf::RenderWindow &window) {
window.draw(body);
}



