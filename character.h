#ifndef CHARACTER_H
#define CHARACTER_H

class Character
{
protected:
    int hitpoints;
    int armor;
    int endurance;
    int _class;
public:
    Character();
    Character(int _clss);
    Character(int ph, int pa, int pe);
    ~Character();
    void setClass(int pc);
    void setHitpoints(int ph);
    void setArmor(int pa);
    void setEndurance(int pe);
    int getClass();
    int getHitpoints();
    int getArmor();
    int getEndurance();
};

#endif // CHARACTER_H
