#ifndef PET_H
#define PET_H

#include <iostream>
#include <string>
using namespace std;

class Pet
{
public:
    Pet();
    Pet(string,int, int, int, int);
    
    virtual int GetAction();
    int GetBoredem();
    int GetHappiness();
    int GetAppetite(); // wil determine string by number, for example if we return 5 or > pet is hungry
    int GetHour(); // for every action we we will add 2 hours, every 6 hours pet will be hungry and every 12 pet will be sleepy
    string GetPetName();
    string GetPetType();

    virtual void SetAction(int);
    void SetPetType(string);
    void SetBoredem(int); // set action
    void SetHappiness(int);
    void SetAppetite(int); // how hungry
    void SetHour(int); // military time hour
    void SetPetName(string);


    virtual void Setstats(int);

    virtual void PrintInfo();
    virtual void PrintGameOptions();
    virtual void suggestions();
    virtual void feed();
private:
    int action;
    int boredem;
    int happiness;
    int appetite;
    int hour;
    string PetName;
    string PetType;
};

#endif