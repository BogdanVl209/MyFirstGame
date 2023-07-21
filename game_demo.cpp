#include "game_demo.h"

game_demo::game_demo()
{
    this->main_hero = new Hero();
    this->enemy1 = new Enemy();
}

int game_demo::fight() {
    int hero_stat;
    int enemy_stat;
    int rand1;
    hero_stat = this->main_hero->getArmor() + this->main_hero->getEndurance() + this->main_hero->getHitpoints();
    enemy_stat = this->enemy1->getArmor() + this->enemy1->getEndurance() + this->enemy1->getHitpoints();
    std::random_device rd;        //non-deter generator
    std::mt19937 gen(rd());   //mersenne twister + random_device gen as a seed = non-deter result
    std::uniform_int_distribution<> dist(1, 30);  //distribute results between 1 and 10
    rand1 = dist(gen);
    hero_stat += rand1;
    rand1 = dist(gen);
    enemy_stat += rand1;
    if (hero_stat > enemy_stat && hero_stat!=enemy_stat) {
        Wins++;
        return 1;
    } else if (hero_stat < enemy_stat && hero_stat!=enemy_stat) {
        Loss++;
        return 2;
    } else if (hero_stat == enemy_stat) {
        Draw++;
        return 0;
    } else {
       return -1;
    }
}
