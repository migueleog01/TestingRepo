#include "Dragon.h"

Dragon::Dragon()
{
    agility = rand() % 10 + 1;
    speed = rand() % 10 + 1;
    reflexes = rand() % 10 + 1;
}
Dragon::Dragon(string PetName, int boredem, int happiness, int appetite, int hour, int speed, int agility, int reflexes) : Pet(PetName, boredem, happiness, appetite, hour)
{
    this->agility = agility;
    this->speed = speed;
    this->reflexes = reflexes;
}
int Dragon::GetAgility()
{
    return agility;
}
int Dragon::GetSpeed()
{
    return speed;
}
int Dragon::GetReflexes()
{
    return reflexes;
}

void Dragon::SetAgility(int _agility)
{
    agility = _agility;
}
void Dragon::SetSpeed(int _speed)
{
    speed = _speed;
}
void Dragon::SetReflexes(int _reflexes)
{
    reflexes = _reflexes;
}

// virtual functions
// int GetAction();S
// void SetAction(int);
void Dragon::Setstats(int _action)
{
    if (_action == 1)
    {

        SetBoredem(GetBoredem() - 2); // set action
        SetHappiness(GetHappiness() + 3);
        SetAppetite(GetAppetite() + 2); // how hungry
        SetHour(GetHour() + 1);         // military time hour
        SetPetName(GetPetName());
    }
    else if (_action == 2)
    {
        SetBoredem(GetBoredem() - 1);
        SetHappiness(GetHappiness() + 2);
        SetAppetite(GetAppetite() + 4);
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

        SetHappiness(GetHappiness() - 2);
        SetAppetite(GetAppetite() + 3);
        SetHour(GetHour() + 1);
        SetPetName(GetPetName());
    }
    else if (_action == 4)
    {
        SetBoredem(GetBoredem() - 4);
        SetHappiness(GetHappiness() - 1);
        SetAppetite(GetAppetite() + 3);
        SetHour(GetHour() + 1);
        SetPetName(GetPetName());
    }
    else if (_action == 5)
    {
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
void Dragon::PrintInfo()
{
    cout << "Pet Type: " << GetPetType() << endl;
    cout << "Pet name: " << GetPetName() << endl;
    cout << "Speed: " << GetSpeed() << endl;
    cout << "Boredem: " << GetBoredem() << endl;
    cout << "Hapiness: " << GetHappiness() << endl;
    cout << "Appetite: " << GetAppetite() << endl;
    cout << "Hour: " << GetHour() << endl;
}
// void PrintGameOptions();
void Dragon::suggestions()
{
    // if boredemen >
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
void Dragon::feed()
{
    SetAppetite(GetAppetite() - 7);
}