#include "character.h"

Character::Character() {
    //cout << "Класс Легкий" << endl;
    this->_class = 1;
    this->hitpoints = 3;
    this->armor = 3;
    this->endurance = 3;
}

Character::Character(int _clss) {
     switch (_clss) {
     case 1:
         //cout << "Класс Легкий" << endl;
         this->_class = 1;
         this->hitpoints = 3;
         this->armor = 3;
         this->endurance = 3;
         break;
     case 2:
         //cout << "Класс Средний" << endl;
         this->_class = 2;
         this->hitpoints = 6;
         this->armor = 6;
         this->endurance = 6;
         break;
     case 3:
         //cout << "Клас Важкий" << endl;
         this->_class = 3;
         this->hitpoints = 9;
         this->armor = 9;
         this->endurance = 9;
         break;
     }
}

Character::Character(int ph, int pa, int pe) {
    //cout << "Класс Свой" << endl;
    this->_class = 4;
    this->hitpoints = ph;
    this->armor = pa;
    this->endurance = pe;
}

Character::~Character() {

}

void Character::setClass(int pc) {
    this->_class = pc;
}

void Character::setHitpoints(int ph) {
    this->hitpoints = ph;
}

void Character::setArmor(int pa) {
    this->armor = pa;
}

void Character::setEndurance(int pe) {
    this->endurance = pe;
}

int Character::getClass() {
    return this->_class;
}

int Character::getHitpoints() {
    return this->hitpoints;
}

int Character::getArmor() {
    return this->armor;
}

int Character::getEndurance() {
    return this->endurance;
}
