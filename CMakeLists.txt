cmake_minimum_required(VERSION 3.17)
project(PlatformShooter2D)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -static-libstdc++ -static-libgcc")

add_executable(PlatformShooter2D main.cpp Engine/AssetManager.cpp Engine/AssetManager.h Engine/Game.cpp Engine/InputManager.cpp Engine/InputManager.h
        States/StartScreen.cpp Engine/StateMachine.cpp Engine/State.h DEFINITIONS.h States/MainMenu.cpp States/InGame.cpp States/InGame.h States/Animations/Animation.cpp States/Animations/Animation.h
        States/Characters/Player.cpp States/Characters/Player.h States/Characters/Enemy1.cpp States/Characters/Enemy1.h States/Collision/Collision.cpp States/Collision/Collision.h States/Objects/bigRectangle.h
        States/Objects/bigRectangle.cpp States/Objects/movingRectangle.h States/Objects/movingRectangle.cpp States/Objects/Bullet.cpp States/Objects/Bullet.h States/Animations/Enemy1Animation.cpp States/Animations/Enemy1Animation.h
        States/Characters/CharacterBow.h States/Characters/CharacterBow.cpp States/Animations/BowAnimation.cpp States/Animations/BowAnimation.h States/Map/map.cpp States/Map/map.h
        States/Objects/layer.h States/Objects/layer.cpp States/Objects/object.h States/Objects/sprite.cpp States/Objects/sprite.h States/Objects/BulletReplacer.cpp States/Objects/BulletReplacer.h States/HelpState.cpp States/HelpState.h)





target_link_libraries (PlatformShooter2D jsoncpp sfml-graphics sfml-window sfml-system sfml-audio)
