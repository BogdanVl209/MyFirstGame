#ifndef GAME_DEMO_H
#define GAME_DEMO_H

#include <random>
#include "enemy.h"
#include "hero.h"

class game_demo
{
public:
    game_demo();
    Hero *main_hero;
    Enemy *enemy1;
    int fight();
    int Wins=0;
    int Loss=0;
    int Draw=0;
};

#endif // GAME_DEMO_H
