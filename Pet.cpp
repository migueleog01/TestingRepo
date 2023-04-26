#include "Pet.h"
#include <stdlib.h>
using namespace std;

Pet::Pet()
{
    srand(time(NULL));
    PetType = GetPetType();
    PetName = GetPetName();
    boredem = rand()%10;
    happiness= rand()%10;
    appetite = rand()%10; //"Ã¢â€”Â¼Ã¢â€”Â¼Ã¢â€”Â¼Ã¢â€”Â¼Ã¢â€”Â¼Ã¢â€”Â¼Ã¢â€”Â¼Ã¢â€”Â¼Ã¢â€”Â¼Ã¢â€”Â¼ 100%"
    hour = 0;
}

Pet::Pet(string PetName,int boredem, int happiness, int appetite, int hour)
{
    this->PetName = PetName;
    this->boredem=boredem;
    this->happiness= happiness;
    this->appetite=appetite;
    this->hour=hour;
}
int Pet::GetAction()
{
    return action;
}


int Pet::GetBoredem()
{
    return boredem;
}

int Pet::GetHappiness()
{
    return happiness;
}

int Pet::GetAppetite() // wil determine string by number, for example if we return 5 or > pet is hungry
{
    return appetite;
}
int Pet::GetHour()     // for every action we we will add 2 hours, every 6 hours pet will be hungry and every 12 pet will be sleepy
{
    return hour;
}
string Pet::GetPetName()
{
    return PetName;
}
string Pet::GetPetType()
{
    return PetType;
}

void Pet::SetAction(int _action)
{
    action = _action;
}

void Pet::SetBoredem(int _boredem)  // set action
{
    boredem = _boredem;
}
void Pet::SetHappiness(int _happiness) // how is pet feeling
{
    happiness = _happiness;
}
void Pet::SetAppetite(int _appetite)   // how hungry
{
    appetite = _appetite;
}
void Pet::SetHour(int _hour)      // military time hour
{
    hour = _hour;
}
void Pet::SetPetName(string _PetName)
{
    PetName = _PetName;
}


void Pet::PrintInfo()
{
    cout << endl;
    cout << "Pet name: "<<GetPetName() << endl;
    cout <<"Boredem: " <<GetBoredem() <<endl;
    cout <<"Happiness: "<< GetHappiness() <<endl;
    cout <<"Appetite: " << GetAppetite() << endl;
    cout <<"Hour" <<  GetHour() << endl;
}
void Pet::PrintGameOptions()
{
    cout << endl;
    cout << "What game would you like to play with " << GetPetName() <<", select the number corresponding to action!" <<endl;
    cout << "1. Soccer" << endl;
    cout << "2. Football" << endl;
    cout << "3. Fetch" << endl;
    cout << "4. Tug of War" << endl;
    cout << "5. Save and Exit" << endl;
}
void Pet::Setstats(int)
{

}
void Pet::suggestions()
{

}
void Pet::feed()
{

}
void Pet::SetPetType(string _PetType)
{
    PetType = _PetType;
}
