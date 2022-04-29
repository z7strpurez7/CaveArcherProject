#include "InGame.h"
#include <iostream>
#include "Characters/Player.h"
#include "Objects/bigRectangle.h"


InGame::InGame(GameDataRef data) : _data(data) {

}
void InGame::Init() {
    //Vindu instillinger
    this->_data->window.setFramerateLimit(120);
    this->_data->window.setView(_data->window.getDefaultView());
    view.setSize(SCREEN_WIDTH, SCREEN_HEIGHT);
    startViewCenter = sf::Vector2f(SCREEN_WIDTH/2.f, SCREEN_HEIGHT/2.f);
    view.setCenter(startViewCenter);


    //laster inn data resursene fra DEFINITIONS, burde kanskje gjøres under startScreen
    this->_data->assets.LoadTexture("Enemy1", ENEMY_SLIME_GREEN);
    this->_data->assets.LoadTexture("Enemy1HealthBar", ENEMY_SLIME_HEALTHBAR);
    this->_data->assets.LoadTexture("woodenCrate", BOX_CRATE);
    this->_data->assets.LoadTexture("MossyFPlatforms", MOSSY_FLOATING_PLATFORMS);
    this->_data->assets.LoadTexture("MossyGPlatforms", MOSSY_ON_GROUND_PLATFORMS);
    this->_data->assets.LoadTexture("Arrow", ARROW);
    this->_data->assets.LoadTexture("ARCHER", PLAYER_ARCHER);
    this->_data->assets.LoadTexture("ARMBOWOVER", PLAYER_ARMBOW_OVER);


    //laster inn lyder
    if (!buffer.loadFromFile(HITMARKER)){
        std::cout<<"Error Sounds"<<std::endl;
    }
    if (!bufferDMG.loadFromFile(DMGDEALT)){
        std::cout<<"Error Sounds"<<std::endl;
    }
    if (!bufferBoss.loadFromFile(BOSSDEATH)){
        std::cout<<"Error Sounds"<<std::endl;
    }
    if (!bufferFall.loadFromFile(FALL)){
        std::cout<<"Error FALL SOUND"<<std::endl;
    }

    soundFall.setBuffer(bufferFall);
    soundFall.setVolume(10);
    soundBossDeath.setBuffer(bufferBoss);
    soundBossDeath.setVolume(100);
    sound.setBuffer(buffer);
    soundDMG.setBuffer(bufferDMG);



    //laster inn map og tegner opp
   /* if (!map.loadFromFile("../Recourses/Map/Level1New.json"))
    {
        std::cout << "Failed to load map datassss." << std::endl;
    } */
    if (!map.loadFromFile(MAP1))
    {
        std::cout << "Failed to load map datassss." << std::endl;
    }

    // Copy layer references from map object to Game list
    std::copy(map.getLayers().begin(), map.getLayers().end(), std::back_inserter(objects));
    // Copy sprite references from map object to Game list
    std::copy(map.getSprites().begin(), map.getSprites().end(), std::back_inserter(objects));

    for (int y = 0; y < map.getHeight(); y++)
    {
        for (int x = 0; x < map.getWidth(); x++)
        {
            gid = map.getLayer("foreground")->getTilemap()[x + y * map.getWidth()];
            if (gid != 0){
                foregroundTiles.push_back(new bigRectangle(nullptr, sf::Vector2f(map.getTileWidth(), map.getTileHeight()), sf::Vector2f (map.getTileWidth()*x, map.getTileHeight()*y)));
            }
        }
    }

    for (int y = 0; y < map.getHeight(); y++)
    {
        for (int x = 0; x < map.getWidth(); x++)
        {
            gid = map.getLayer("foreground")->getTilemap()[x + y * map.getWidth()];
            if (gid != 0){
                foregroundTiles.push_back(new bigRectangle(nullptr, sf::Vector2f(map.getTileWidth(), map.getTileHeight()), sf::Vector2f (map.getTileWidth()*x, map.getTileHeight()*y)));
            }
        }
    }

  /*  this->platform1 = new movingRectangle(&this->_data->assets.GetTexture("woodenCrate"), sf::Vector2f(120.f, 120.f), sf::Vector2f(3250, 2500));
    this->platform2 = new movingRectangle(&this->_data->assets.GetTexture("woodenCrate"), sf::Vector2f(80.f, 80.f), sf::Vector2f(1520, 2400));
    boxes.push_back(platform1);
    boxes.push_back(platform2); */


    b1 = Bullet(&this->_data->assets.GetTexture("Arrow"));
    bulletReplacer1 = BulletReplacer(&this->_data->assets.GetTexture("Arrow"));
    replacers.push_back(bulletReplacer1);

    this->player1= new Player(&this->_data->assets.GetTexture("ARCHER"),&this->_data->assets.GetTexture("Enemy1HealthBar"), sf::Vector2u(10, 3), 0.0500f, 50.f, 120.0f);
    this->bowOver = new CharacterBow(&this->_data->assets.GetTexture("ARMBOWOVER"),sf::Vector2u(4,1), 0.125f, 50.f, startViewCenter);

    players.push_back(player1);


    this->greenSlimes5 = new Enemy1(&this->_data->assets.GetTexture("Enemy1"),&this->_data->assets.GetTexture("Enemy1HealthBar"),sf::Vector2u(29, 1), 0.020f, 126.f ,sf::Vector2f(94,64),
                                    sf::Vector2f (-2000,960.0f),false,false);
    this->greenSlimes6 = new Enemy1(&this->_data->assets.GetTexture("Enemy1"),&this->_data->assets.GetTexture("Enemy1HealthBar"),sf::Vector2u(29, 1), 0.020f, 126.f ,sf::Vector2f(94,64),
                                    sf::Vector2f (-2000,960.0f),false,false);
    this->greenSlimes7 = new Enemy1(&this->_data->assets.GetTexture("Enemy1"),&this->_data->assets.GetTexture("Enemy1HealthBar"),sf::Vector2u(29, 1), 0.020f, 126.f ,sf::Vector2f(94,64),
                                    sf::Vector2f (-2000+50,960.0f),false,false);
    this->greenSlimes8 = new Enemy1(&this->_data->assets.GetTexture("Enemy1"),&this->_data->assets.GetTexture("Enemy1HealthBar"),sf::Vector2u(29, 1), 0.020f, 126.f ,sf::Vector2f(94,64),
                                    sf::Vector2f (-2000+50,960.0f),false,false);
    enemy1.push_back(greenSlimes5);
    enemy1.push_back(greenSlimes6);
    enemy1.push_back(greenSlimes7);
    enemy1.push_back(greenSlimes8);


    for (int y = 0; y < map.getHeight(); y++)
    {
        for (int x = 0; x < map.getWidth(); x++)
        {
            gid = map.getLayer("Enemy1")->getTilemap()[x + y * map.getWidth()];
            if (gid != 0){
                enemy1.push_back(new Enemy1(&this->_data->assets.GetTexture("Enemy1"),&this->_data->assets.GetTexture("Enemy1HealthBar"),sf::Vector2u(29, 1), 0.020f, 100.f ,sf::Vector2f(94,64),
                                            sf::Vector2f (map.getTileWidth()*x, map.getTileHeight()*y),false,true));   }

        }
    }
    for (int y = 0; y < map.getHeight(); y++) {
        for (int x = 0; x < map.getWidth(); x++) {
            gid = map.getLayer("SmallBox")->getTilemap()[x + y * map.getWidth()];
            if (gid != 0) {
                boxes.push_back(
                        new movingRectangle(&this->_data->assets.GetTexture("woodenCrate"), sf::Vector2f(80.f, 80.f),
                                            sf::Vector2f(map.getTileWidth() *x, map.getTileHeight()*y)));
            }
        }
    }

    this->boss = new Enemy1(&this->_data->assets.GetTexture("Enemy1"),&this->_data->assets.GetTexture("Enemy1HealthBar"),sf::Vector2u(29, 1), 0.020f, 50.f ,sf::Vector2f(376,256),
                            sf::Vector2f(11000, 2300),true, false);
    enemyBoss1.push_back(boss);
    soundFall.play();
    //default fireate 500.f
    firerate = 500.f;
}
void InGame::HandleInput() {
    sf::Event evnt;
    while (this->_data->window.pollEvent(evnt)){
        if(sf::Event::Closed == evnt.type){

            this->_data->window.close( );
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)){
            this->_data->window.close( );
        }
        }

  /*  if (evnt.key.code == sf::Keyboard::F5)
    {
        objects.clear();
        if (!map.loadFromFile("../Recourses/Map/Level1New.json"))
        {
            std::cout << "Failed to load map datassss." << std::endl;
        }
        std::copy(map.getLayers().begin(), map.getLayers().end(), std::back_inserter(objects));
        std::copy(map.getSprites().begin(), map.getSprites().end(), std::back_inserter(objects));
    }
   if (evnt.key.code == sf::Keyboard::F6)
    {
        Init();
        std::cout<<"it restarted init"<<std::endl;
    } */

        if(sf::Mouse::isButtonPressed(sf::Mouse::Left)){
           if (firerateclock.getElapsedTime().asMilliseconds() > firerate){
                b1.startDegree = angleDegree;
                b1.Fire(sf::Vector2f (playerCenter), aimDirNorm);
                bullets.push_back(b1);
                firerateclock.restart();
           }
        }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num1)){
        //Velg firerate
        firerate = 500;
        b1.setArrowSpeed(15, 9.81*2);
        bowOver->setBowColor(sf::Color::Yellow);
        bowOver->setSwitchTime(firerate/4000.f);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num2)){
        firerate = 1000;
        b1.setArrowSpeed(20, 9.81/4);
        bowOver->setBowColor(sf::Color::Green);
        bowOver->setSwitchTime(firerate/4000.f);
    }

       if(sf::Keyboard::isKeyPressed(sf::Keyboard::Y)){
            std::cout<<"mous "<<playerCenter.x << " "<< playerCenter.y<<std::endl;
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::O)){
            std::cout<<view.getCenter().x<<" "<< view.getCenter().y <<std::endl;
        }
       if(sf::Keyboard::isKeyPressed(sf::Keyboard::P)){
    //    greenSlimes5->setBodyPos(sf::Vector2f (playerCenter));
       std::cout<< greenSlimes5->GetCollisionBody().getPosition().x<< " " <<greenSlimes5->GetCollisionBody().getPosition().y<<std::endl;
       }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::J)){
           player1->body.move(sf::Vector2f(100, 5));
        }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::L)){
        player1->body.setPosition(sf::Vector2f(6900, 850));
        view.setCenter(sf::Vector2f (playerCenter.x, view.getCenter().y));
        //  view.setCenter(playerCenter);
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::K)){
        player1->body.setPosition(sf::Vector2f(150, 0));
        view.setCenter(sf::Vector2f (playerCenter.x, view.getCenter().y));
    }
}

void InGame::Update(float dt) {
    sf::Vector2f direction;
   /* if(bullets[i].GetPosition().x < -(startViewCenter.x - view.getCenter().x)|| bullets[i].GetPosition().x > SCREEN_WIDTH -(startViewCenter.x - view.getCenter().x)
       || bullets[i].GetPosition().y< -(startViewCenter.y - view.getCenter().y) || bullets[i].GetPosition().y> SCREEN_HEIGHT-(startViewCenter.y - view.getCenter().y )){
        bullets.erase(bullets.begin() + i);
        break;
    } */
    /// KULE TREFF LOGIKK START
    for (size_t i = 0; i < bullets.size(); ++i) {
        //oppdaterer kulene
        bullets[i].Update(dt);
        hitEnemy = false;
        //sjekker om kulene går ut av skjermen og fjerner
        if(bullets[i].GetPosition().x < 0|| bullets[i].GetPosition().x >  map.getWidth()*map.getTileWidth()
           || bullets[i].GetPosition().y< 0 || bullets[i].GetPosition().y>  map.getHeight()*map.getTileHeight()){
            bullets.erase(bullets.begin() + i);
            break;
        } else {
            //fjerner kule ved kollisjon av

                for (int j = 0; j < enemyBoss1.size(); ++j) {
                    if (bullets[i].GetGlobalBoundsintersects(enemyBoss1[j]->GetCollisionBody())) {
                        soundDMG.play();
                        enemyBoss1[j]->losehp();
                        if (enemyBoss1[j]->getHP() == 0){
                         //   soundBossDeath.play();
                            bossLocX = enemyBoss1[j]->GetPosition().x;
                            bossLocY = enemyBoss1[j]->GetPosition().y;
                            greenSlimes5->setBodyPos(sf::Vector2f (bossLocX-50,bossLocY-500));
                            greenSlimes6->setBodyPos(sf::Vector2f (bossLocX,bossLocY-500));
                            greenSlimes7->setBodyPos(sf::Vector2f (bossLocX+50,bossLocY-500));
                            greenSlimes8->setBodyPos(sf::Vector2f (bossLocX+100,bossLocY-500));
                            std::cout<<"it ran"<<std::endl;
                            bossIsAlive = false;
                            enemyBoss1.erase(enemyBoss1.begin() + j);
                        }
                        bullets.erase(bullets.begin() + i);
                        hitEnemy = true;
                        break;
                    }
                }
             /*   if (bullets[i].GetGlobalBoundsintersects(current->GetCollisionBody())) {
                    bullets.erase(bullets.begin() + i);
                    soundDMG.play();
                    boss->losehp();
                    if (boss->getHP() < 0 && bossIsAlive) {
                        soundBossDeath.play();
                        bossLocX = current->GetPosition().x;
                        bossLocY = current->GetPosition().y;
                        enemyBoss1.erase(enemyBoss1.begin());
                        greenSlimes5->setBodyPos(sf::Vector2f (bossLocX-50,bossLocY-500));
                        greenSlimes6->setBodyPos(sf::Vector2f (bossLocX,bossLocY-500));
                        greenSlimes7->setBodyPos(sf::Vector2f (bossLocX+50,bossLocY-1000));
                        greenSlimes8->setBodyPos(sf::Vector2f (bossLocX+100,bossLocY-2000));
                        bossIsAlive = false;
                        break;
                    }
                    hitEnemy = true;
                }  */

            if (!hitEnemy) {
                for (int j = 0; j < enemy1.size(); ++j) {
                    if (bullets[i].GetGlobalBoundsintersects(enemy1[j]->GetCollisionBody())) {
                        soundDMG.play();
                        enemy1[j]->losehp();
                        if (enemy1[j]->getHP() == 0){
                            enemy1.erase(enemy1.begin() + j);
                        }
                        bullets.erase(bullets.begin() + i);
                        hitEnemy = true;
                        break;
                    }
                }
            }

            if (!hitEnemy) {
                for (auto &tile : foregroundTiles) {
                    if (bullets[i].GetGlobalBoundsintersects(tile->body)) {
                        // stopper skuddene.
                         //   bullets[i].currVelocity = sf::Vector2f(0.f,-9.81*2*dt);
                        sound.play();
                        //bullets.erase(bullets.begin() +i );
                        //     skeleton.erase(skeleton.begin() + j);
                  /*      if (replacers.size() > 5){
                            replacers.erase(replacers.begin());
                        } */
                        replacers[replacers.size()-1].setPosition(bullets[i].GetPosition(), bullets[i].GetAngle());
                        replacers.push_back(bulletReplacer1);
                        bullets.erase(bullets.begin() + i);
                        break;
                    }

                }
            }

        }
    }

    /// KULE TREFF LOGIKK SLUTT

//std::cout<<replacers.size()<<std::endl;
///COLLISION START
    for (Player* player:players) {
        if (player->getHP() < 0){
            this->_data->machine.AddState(StateRef(new MainMenu(_data)), true);
        }
        for (Enemy1* enemy: enemy1){
            if (player->body.getGlobalBounds().intersects(enemy->body.getGlobalBounds())){
                if (enemy->canDMG()){
                    player->losehp();
                    enemy->resetDmgTimer();
                }
            }
        }
            for (Enemy1* bosss:enemyBoss1) {
                if (player->body.getGlobalBounds().intersects(bosss->body.getGlobalBounds())){
                    if (bosss->canDMG()){
                        player->losehp();
                        bosss->resetDmgTimer();
                    }
                }
            }



    }


        for (auto &tile : foregroundTiles) {
                        if (tile->GetCollision().checkCollision(player1->getCollision(), direction, 1.f)){
                            player1->OnCollision(direction);
                }
            for (Enemy1* enemy: enemy1){
                if(tile->GetCollision().checkCollision(enemy->getCollision(),direction,1.f)){
                    enemy->OnCollision(direction);
                }
            }
            for (Enemy1* enemy: enemyBoss1) {
                if(tile->GetCollision().checkCollision(enemy->getCollision(),direction,1.f)){
                    enemy->OnCollision(direction);
                }
            }
            for (movingRectangle* box: boxes){
                    if(box->getCollision().checkCollision(player1->getCollision(),direction,box->getPushPower())){
                        player1->OnCollision(direction);
                }
                if(tile->GetCollision().checkCollision(box->getCollision(),direction,1.f))
                    box->OnCollision(direction);
            }
        }
        ///COLLISSION STOP


    for (Enemy1* current:enemy1) {
        current->Update(dt, playerCenter);
    }
    for (Enemy1* current:enemyBoss1) {
        current->Update(dt, player1->GetPosition());
    }
    for (Player* current:players) {
        current->Update(dt, view.getCenter());
    }

    playerCenter = sf::Vector2f(player1->GetPosition().x  , player1->GetPosition().y);
    if(firerateclock.getElapsedTime().asMilliseconds() < firerate){
        bowOver->setFiring(true);
    } else {
        bowOver->setFiring(false);
    }

    angleDegree = bowOver->getAngleDegree();
    aimDirNorm = bowOver->getAimDirNorm();
 //   view.setCenter( sf::Vector2f(floor(player1->GetPosition().x)  , floor(player1->GetPosition().y)));
    if (angleDegree>0){
        player1->setAngle(true);
        bowOver->setAngle(true);
      //  bowOver->Update(dt, sf::Vector2f (playerCenter.x-15, playerCenter.y-15), _data->window, view.getCenter());
        bowOver->Update(dt, sf::Vector2f (playerCenter.x, playerCenter.y-15), _data->window, view.getCenter());
        bowCenter = sf::Vector2f (playerCenter.x-15, playerCenter.y-15);
    } else{
        player1->setAngle(false);
        bowOver->setAngle(false);
      //  bowOver->Update(dt, sf::Vector2f (playerCenter.x+15, playerCenter.y-15), _data->window, view.getCenter());
        bowOver->Update(dt, sf::Vector2f (playerCenter.x, playerCenter.y-15), _data->window, view.getCenter());
        bowCenter = sf::Vector2f (playerCenter.x-15, playerCenter.y-15);
    }

    for(movingRectangle* current:boxes){
        current->Update(dt);
    }

    if (player1->GetPosition().x > (SCREEN_WIDTH/2.f) ) {
        view.setCenter(floor(player1->GetPosition().x), floor(view.getCenter().y));
    }


    if (player1->GetPosition().y > (SCREEN_HEIGHT*2.0) &&player1->GetPosition().y > floor((SCREEN_HEIGHT*2)+player1->body.getSize().y/2)) {
        view.setCenter(floor(view.getCenter().x), floor((SCREEN_HEIGHT*2.5 +player1->body.getSize().y)));
    }
   else if (player1->GetPosition().y < (SCREEN_HEIGHT*2.0) && player1->GetPosition().y > floor((SCREEN_HEIGHT*1)+player1->body.getSize().y)) {
        view.setCenter(floor(view.getCenter().x), floor((SCREEN_HEIGHT*1.5)+player1->body.getSize().y));
    } else if (player1->GetPosition().y < (SCREEN_HEIGHT) && player1->GetPosition().y > 0) {
        view.setCenter(floor(view.getCenter().x), floor(startViewCenter.y+player1->body.getSize().y));
    }
    player1->setHpBarPos(sf::Vector2f (25+view.getCenter().x-(SCREEN_WIDTH/2.f), 25+view.getCenter().y-(SCREEN_HEIGHT/2.f)));


    this->_data->window.setView(view);

}
void InGame::Draw(float dt) {
    this->_data->window.clear(sf::Color(48,166,255));

    for (auto& layer: map.getLayers()) {
        if (layer == map.getLayer("background")){
            layer->process(dt);
            layer->draw(this->_data->window);
        }
    }

    for (BulletReplacer replacer: replacers) {
        replacer.Draw(this->_data->window);
    }
    for (Enemy1* current:enemy1) {
        current->Draw(_data->window);
    }
    for (Enemy1* current:enemyBoss1) {
        current->Draw(_data->window);
    }

    for (Player* skelet:players) {
       skelet->Draw(_data->window);
    }
    bowOver->Draw(_data->window);

    for (size_t i = 0; i < bullets.size(); ++i) {
        bullets[i].Draw(_data->window);
    }
    for(movingRectangle* box: boxes){
        box->Draw(_data->window);
    }
    for (auto& layer: map.getLayers()) {
        if (layer == map.getLayer("foreground")){
            layer->process(dt);
            layer->draw(this->_data->window);
        }
    }

 /*  for (auto& object: objects)
    {
        object->process(dt);
        object->draw(this->_data->window);
    } */
    for (auto& layer: map.getLayers()) {
        if (layer == map.getLayer("overlay")){
            layer->process(dt);
            layer->draw(this->_data->window);
        }
    }
    for (Player* player:players) {
        player->DrawHP(_data->window);
    }
    this->_data->window.display();
}


