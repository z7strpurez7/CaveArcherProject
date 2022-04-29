#ifndef GAMEENGINE_INGAME_H
#define GAMEENGINE_INGAME_H

#include "../Engine/State.h"
#include "../Engine/Game.h"
#include "StartScreen.h"
#include "../DEFINITIONS.h"
#include "MainMenu.h"
#include "iostream"
#include "SFML/Graphics.hpp"
#include "Characters/Player.h"
#include "vector"
#include "Characters/Enemy1.h"
#include "Objects/bigRectangle.h"
#include "Objects/movingRectangle.h"
#include "Objects/Bullet.h"
#include "cmath"
#include "SFML/Audio.hpp"
#include "Characters/CharacterBow.h"
#include "Map/map.h"
#include "Objects/object.h"
#include "Objects/layer.h"
#include "Objects/sprite.h"
#include "Objects/BulletReplacer.h"


class InGame : public State {
public:
explicit InGame (GameDataRef data);
void Init();
void HandleInput( );
void Update(float dt);
void Draw(float dt);


private:
GameDataRef _data;
std::vector<bigRectangle*> tiles;
std::vector<bigRectangle*> foregroundTiles;
std::vector<movingRectangle*> boxes;
std::vector<Player*> players;
std::vector<Enemy1*> enemy1;
std::vector<Enemy1*> enemyBoss1;
std::vector<Bullet> bullets;
Bullet b1;
std::shared_ptr<Layer> foreground;
std::list<std::shared_ptr<Object>> objects;
sf::Clock clock;
sf::RectangleShape body;
sf::RenderWindow window;
Map map;
unsigned int gid;
float firerate;
movingRectangle* platform1;
movingRectangle* platform2;
bigRectangle* platform3;
sf::Clock firerateclock;
std::vector<BulletReplacer> replacers;
BulletReplacer bulletReplacer1;


sf::Vector2f bowCenter;
sf::SoundBuffer buffer;

sf::SoundBuffer bufferFall;

sf::SoundBuffer bufferBoss;

sf::SoundBuffer bufferDMG;

sf::Sound sound;

sf::Sound soundFall;

sf::Sound soundBossDeath;

sf::Sound soundDMG;


bool bossIsAlive = true;

sf::Vector2f playerCenter;
sf::Vector2f mousePosWindow;
sf::Vector2f aimDir;
sf::Vector2f aimDirNorm;

Player* player1;

CharacterBow* bowOver;


Enemy1* greenSlimes;
Enemy1* greenSlimes1;
Enemy1* greenSlimes2;
Enemy1* greenSlimes3;
Enemy1* greenSlimes4;

Enemy1* greenSlimes5;
Enemy1* greenSlimes6;
Enemy1* greenSlimes7;
Enemy1* greenSlimes8;

Enemy1* boss;



bool hitEnemy;
float angleDegree;
float bossLocX;
float bossLocY;

sf::View view;
sf::Vector2f startViewCenter;


};
#endif //GAMEENGINE_INGAME_H
