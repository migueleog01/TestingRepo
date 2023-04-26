#include "Dog.h"
Dog::Dog()
{
    srand(time(NULL));
    agility = rand() % 10 + 1;
    speed = rand() % 10 + 1;
    reflexes = rand() % 10 + 1;
}
Dog::Dog(string PetName, int boredem, int happiness, int appetite, int hour, int speed, int agility, int reflexes) : Pet(PetName, boredem, happiness, appetite, hour)
{
    this->agility = agility;
    this->speed = speed;
    this->reflexes = reflexes;
}
int Dog::GetAgility()
{
    return agility;
}
int Dog::GetSpeed()
{
    return speed;
}
int Dog::GetReflexes()
{
    return reflexes;
}

void Dog::SetAgility(int _agility)
{
    agility = _agility;
}
void Dog::SetSpeed(int _speed)
{
    speed = _speed;
}
void Dog::SetReflexes(int _reflexes)
{
    reflexes = _reflexes;
}

// virtual functions
// int GetAction();S
// void SetAction(int);
void Dog::Setstats(int _action)
{
    if (_action == 1)
    {

        SetBoredem(GetBoredem() - 1); // set action
        SetHappiness(GetHappiness() + 4);
        SetAppetite(GetAppetite() + 1); // how hungry
        SetHour(GetHour() + 1);         // military time hour
        SetPetName(GetPetName());
    }
    else if (_action == 2)
    {
        SetBoredem(GetBoredem() - 1);
        SetHappiness(GetHappiness() + 2);
        SetAppetite(GetAppetite() + 1);
        SetHour(GetHour() + 1);
        SetPetName(GetPetName());
    }
    else if (_action == 3)
    {
        if (GetBoredem() - 2 <= 0)
        {
            SetBoredem(0);
        }
        else
        {
            SetBoredem(GetBoredem() - 2);
        }

        SetHappiness(GetHappiness() + 5);
        SetAppetite(GetAppetite() + 1);
        SetHour(GetHour() + 1);
        SetPetName(GetPetName());
    }
    else if (_action == 4)
    {
        SetBoredem(GetBoredem() - 4);
        SetHappiness(GetHappiness() - 1);
        SetAppetite(GetAppetite() + 1);
        SetHour(GetHour() + 1);
        SetPetName(GetPetName());
    }
    else if (_action == 5)
    {
        SetBoredem(0);
        if (GetBoredem() - 2 <= 0)
        {
            SetBoredem(0);
        }
        if (GetAppetite() - 5 <= 0)
        {
            SetAppetite(0);
        }
    }
}

void Dog::PrintInfo()
{
    cout << "Pet Type: " << GetPetType() << endl;
    cout << "Pet name: " << GetPetName() << endl;
    cout << "reflexes: " << GetReflexes() << endl;
    cout << "Boredem: " << GetBoredem() << endl;
    cout << "Hapiness: " << GetHappiness() << endl;
    cout << "Appetite: " << GetAppetite() << endl;
    cout << "Hour: " << GetHour() << endl;
}
// void PrintGameOptions();
void Dog::suggestions()
{
    if (GetBoredem() > 3)
    {

        cout << "The daycare suggests you play Fetch with cat, it will make it less bored and more happy!" << endl;
    }
    // boredem <

    // if Happiness <
    if (GetHappiness() < 2)
    {
        cout << "The daycare suggests you play ANYTHING besides Tug of War" << endl;
    }

    // if Appetite >
    if (GetAppetite() > 8)
    {
        cout << "We suggest you drop pet off at daycare again so that its fed!" << endl;
    }
}
void Dog::feed()
{
    SetAppetite(GetAppetite() - 4);
}