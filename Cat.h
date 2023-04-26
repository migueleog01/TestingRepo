#ifndef CAT_H
#define CAT_H
#include "Pet.h"


class Cat : public Pet
{
public:
    Cat();
    Cat(string,int,int,int,int,int,int,int);
    int GetAgility();
    int GetSpeed();
    int GetReflexes();

    
    void SetAgility(int);
    void SetSpeed(int);
    void SetReflexes(int);

    //virtual functions
    //int GetAction();S
    //void SetAction(int);
    void Setstats(int);
    void PrintInfo() override;
    //void PrintGameOptions();
    void suggestions() override;
    void feed() override;

    
private:
    int agility;
    int speed;
    int reflexes;

};
#endif