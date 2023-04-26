#include "Cat.h"    
    
Cat::Cat()
{
    srand(time(NULL));
    agility = rand()%10+1;
    speed= rand()%10+1;
    reflexes = rand()%10+1; //"Ã¢â€”Â¼Ã¢â€”Â¼Ã¢â€”Â¼Ã¢â€”Â¼Ã¢â€”Â¼Ã¢â€”Â¼Ã¢â€”Â¼Ã¢â€”Â¼Ã¢â€”Â¼Ã¢â€”Â¼ 100%"
}
Cat::Cat(string PetName, int boredem, int happiness, int appetite,int hour,int agility,int speed,int reflexes) : Pet(PetName,boredem,happiness,appetite,hour)
{
    this->agility = agility;
    this->speed = speed;
    this->reflexes = reflexes;
}

int Cat::GetAgility()
{
    return agility;
}
int Cat::GetSpeed()
{
    return speed;
}
int Cat::GetReflexes()
{
    return reflexes;
}

void Cat::SetAgility(int _agility)
{
    agility = _agility;
}
void Cat::SetSpeed(int _speed)
{
    speed = _speed;
}
void Cat::SetReflexes(int _reflexes)
{
    reflexes = _reflexes;
}


void Cat::PrintInfo()
{   
    cout << "Pet Type: " << GetPetType() << endl;
    cout << "Pet name: " << GetPetName() << endl;
    cout << "Agility: " << GetAgility() << endl;
    cout << "Boredem: " << GetBoredem() << endl; 
    cout <<"Hapiness: "  <<GetHappiness() << endl;
    cout <<"Appetite: " << GetAppetite() << endl;
    cout <<"Hour: " << GetHour() << endl;

}
/*
void Cat::PrintGameOptions()
{

}
*/

void Cat::Setstats(int _action)
{
    if(_action == 1)
    {
        //cout << "THIS WORKS AGAIN!!! CELEBRATE" << endl;
        //cout << "THIS IS NEW INFO FOR SOCCER" << endl;
        
        //cout << "Before:" << endl;
        //cout << GetHappiness() << endl;
        //cout << "after:" << endl;
        SetBoredem(GetBoredem() - 1); // set action
        SetHappiness(GetHappiness() + 2);
        SetAppetite(GetAppetite() + 1); // how hungry
        SetHour(GetHour() + 1); // military time hour
        SetPetName(GetPetName());
        //cout << "New Happiness! " <<GetHappiness() << endl;
    }
    else if(_action == 2)
    {
        SetBoredem(GetBoredem() - 2); 
        SetHappiness(GetHappiness() + 3);
        SetAppetite(GetAppetite() + 3); 
        SetHour(GetHour() + 1); 
        SetPetName(GetPetName());
    }
    else if(_action == 3)
    {
        if(GetBoredem() - 2 <= 0){
            SetBoredem(0);
        }
        else
        {
            SetBoredem(GetBoredem() - 2);   
        }
        
        SetHappiness(GetHappiness() + 4);
        SetAppetite(GetAppetite() + 1); 
        SetHour(GetHour() + 1); 
        SetPetName(GetPetName());      
    }
    else if(_action == 4)
    {
        SetBoredem(GetBoredem()); 
        SetHappiness(GetHappiness() -1);
        SetAppetite(GetAppetite()); 
        SetHour(GetHour() + 1); 
        SetPetName(GetPetName());
    }
    else if(_action == 5)
    {
        if(GetBoredem() - 2 <= 0)
        {
            SetBoredem(0);
        }
        if(GetAppetite() -5 <= 0)
        {
            SetAppetite(0);
        }
    }
}

void Cat::suggestions()
{
    // if boredemen > 
    if(GetBoredem() > 5)
    {
        
        cout << "The daycare suggests you play Fetch with Cat, it will make it less bored and more happy!" << endl;    
    }
    // boredem < 

    // if Happiness < 
    if(GetHappiness() < 3)
    {
        cout << "The daycare suggests you play ANYTHING besides Tug of War" << endl;
    }

    // if Appetite >
    if(GetAppetite() > 6)
    {
        cout << "We suggest you drop pet off at daycare again so that its fed!" << endl;
    }
}
void Cat::feed()
{
    SetAppetite(GetAppetite()-5);
}
