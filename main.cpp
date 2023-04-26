#include <iostream>
#include <string>
#include <fstream>
#include "Pet.h"
#include "Cat.h"
#include "Dragon.h"
#include "Dog.h"

using namespace std;

int main()
{

               float boredem;
               float happiness;
               float appetite;
               float hour;
               Pet apet;
               string pet;
               cout << endl;
               cout << "                                                       Tamagotchi Pet Game" << endl
                    << endl;
               cout << "                                         Select if you'd like to start a new game or load saved game" << endl
                    << endl;
               cout << "                                          1. New Game" << endl;
               cout << "                                          2. Load Game" << endl;
               cout << endl;
               int option;
               cin >> option;
               string petType = "";
               string petname;
               Cat acat;
               if (option == 1)
               {
                    cout << "                                       Please select what animal you'd like to interact with!" << endl;
                    cout << "                                               Select an animal to adopt and interact with." << endl;
                    cout << "                                                   The following images are the pets available for adoption" << endl;

                    cout << endl;

                    cout << "    ,_    _                 "
                         << "                  ______________                              "
                         << "            __        " << endl;
                    cout << "    |\\\_,~/|               "
                         << "             ,===:'.,            `-._                         "
                         << "             /  \\       " << endl;
                    cout << "    / _  _ |    ,--.        "
                         << "                 `:.`---.__         `-._                      "
                         << "          / ..|\\      " << endl;
                    cout << "   (  @  @ )   / ,-'        "
                         << "                   `:.     `--.         `.                    "
                         << "         (_\\  |_)     " << endl;
                    cout << "    \  _T_/-._( (           "
                         << "                      \\.        `.         `.                "
                         << "           /  \\@'       " << endl;
                    cout << "    /         `. \          "
                         << "             (,,(,     \\.         `.   ____,-`.,             "
                         << "          /     \\       " << endl;
                    cout << "   |         _  \ |         "
                         << "          (,'     `/    \\.   ,--.___`.'                      "
                         << "      _  /  `   |       " << endl;
                    cout << "    \ \ ,  /      |         "
                         << "      ,  ,'  ,--.  `,     \\.;'         `                     "
                         << "       \\\\/  \\  | _\\      " << endl;
                    cout << "     || |-_\__   /          "
                         << "       `{D, {    \\  :    \\;                                 "
                         << "        \\   /_ || \\\\_      " << endl;
                    cout << "    ((_/`(____,-'           "
                         << "       V,,'    /  /      //                                   "
                         << "      \\____)|_) \\_)    " << endl;
                    cout << "                            "
                         << "         j;;    /  ,' ,-//.    ,---.      ,                   " << endl;
                    cout << "                            "
                         << "         \\;'   /  ,' /  _   \\  /  _   \\   ,'/              " << endl;
                    cout << "        CAT                    "
                         << "              \    `'  /  \\  `'  /  \\  `.' /             "
                         << "            DOG          " << endl;
                    cout << "                            "
                         << "                `.___,'   `.__,'   `.__,'                     " << endl;
                    cout << endl;
                    cout << endl;
                    cout << "                                                       DRAGON                                                                    ";
                    cout << endl
                         << endl
                         << endl
                         << endl;
                    cout << "What Pet would you like to adopt and interact with?" << endl;
                    //    //cout << "Please input your selected pet! CAT, DRAGON, or DOG " << endl;
                    // string pet;
                    // cin >> pet;
                    bool answer = false;

                    do
                    {
                         cout << "Please input your selected pet! Cat, Dragon, or Dog " << endl;
                         cin >> pet;
                         if (pet == "Dragon")
                         {
                              cout << "You have selected a " << pet << " as your pet!" << endl;
                              answer = true;
                         }
                         if (pet == "Cat")
                         {
                              cout << "You have selected a " << pet << " as your pet!" << endl;
                              answer = true;
                         }
                         if (pet == "Dog")
                         {
                              cout << "You have selected a " << pet << " as your pet!" << endl;
                              answer = true;
                         }
                         else
                         {
                              // cout << "Please select CAT, DRAGON, DOG!" << endl;
                              answer == false;
                         }

                    } while (answer == false);
                    
                    // IFSTATEMENT!!!!!
                    cout << "CHECK!!!!!!!" << endl;
                    cin.ignore();
                    cout << "What would you like to name your " << pet << "?" << endl;
                    // string petname;
                    // cin.ignore();
                    getline(cin, petname);
                    // cin.ignore();
                    apet.SetPetName(petname);
                    acat.SetPetName(petname);
                    cout << "Your pet name is " << petname << "!" << endl;
                    system("cls");

                    cout << "The selected pet is " << pet << endl
                         << endl;
                    string sentence;
                    if (pet == "Cat")
                    {
                         ifstream catImage("CatImage.txt");
                         while (!catImage.eof())
                         {
                              getline(catImage, sentence);
                              cout << sentence << endl;
                         }
                         catImage.close();
                    }
                    if (pet == "Dog")
                    {
                         ifstream dogImage("DogImage.txt");
                         while (!dogImage.eof())
                         {
                              getline(dogImage, sentence);
                              cout << sentence << endl;
                         }
                         dogImage.close();
                    }
                    if (pet == "Dragon")
                    {
                         ifstream dragonImage("DragonImage.txt");
                         while (!dragonImage.eof())
                         {
                              getline(dragonImage, sentence);
                              cout << sentence << endl;
                         }
                         dragonImage.close();
                    }
               }
               //}//here fix
          string typeofanimal;
          //ifstream findcat("FileSave.txt");
          //findcat >> typeofanimal;
     //if(option == 1 or option == 2){
     if( option == 1 or option == 2)
     {
          if(option == 2){

          ifstream mytype("FileSave.txt");
               mytype >> pet;
               cout << "Thiis is workiung!" << endl;
               mytype.close();
          }
          if(pet == "Cat")
          {
               apet.SetPetType("Cat");
               acat.SetPetType("Cat");
               if (option == 2)
               {
                    //string typeofanimal;
                    ifstream findcat("FileSave.txt");
                    findcat >> typeofanimal;
                    ifstream fin("FileSave.txt");
                    // cin.ignore();
                    fin >> petType;
                    if (petType == "Cat")
                    {
                         apet.SetPetType("Cat");
                         acat.SetPetType("Cat");
                    }
                    // setpetypeWE NEED TO SET IT TO PET TYPE!!!!! HERE
                    fin.ignore();
                    getline(fin, petname);
                    acat.SetPetName(petname);
                    // fin >> apet.Getplay();
                    fin >> boredem;
                    acat.SetBoredem(boredem); // set action
                    fin >> happiness;
                    acat.SetHappiness(happiness);
                    fin >> appetite;
                    acat.SetAppetite(appetite); // how hungry
                    fin >> hour;
                    acat.SetHour(hour); // military time hour
                    acat.PrintInfo();
                    fin.close();
               }
               acat.SetPetName(petname);
               apet.PrintGameOptions();
               // Cat acat;

               int petAction;
               cin >> petAction;

               bool ActionInput = false;
               acat.SetPetName(petname);
               acat.SetPetType(pet);
               // acat.PrintInfo();
               do
               {
                    acat.SetPetType(pet);
                    // acat.PrintInfo();
                    // apet.PrintInfo();
                    // acat.PrintInfo(); /////TESTING!!!!!!!!!!!
                    //  apet.PrintGameOptions();
                    if (petAction == 1)
                    {
                         // acat.PrintInfo();
                         // acat.PrintInfo();
                         acat.Setstats(petAction);
                         cout << "You played soccer with " << petname << endl
                              << endl;
                         acat.PrintInfo();
                         acat.suggestions();
                         ActionInput = false;
                    }
                    else if (petAction == 2)
                    {
                         acat.Setstats(petAction);
                         cout << "You played football with " << petname << endl
                              << endl;
                         // apet.PrintGameOptions();
                         acat.PrintInfo();
                         acat.suggestions();
                         ActionInput = false;
                    }
                    else if (petAction == 3)
                    {
                         acat.Setstats(petAction);
                         cout << "You played fetch with " << petname << endl
                              << endl;
                         // apet.PrintGameOptions();
                         acat.PrintInfo();
                         acat.suggestions();
                         ActionInput = false;
                    }
                    else if (petAction == 4)
                    {
                         acat.Setstats(petAction);
                         cout << "You played Tug of War with " << petname << endl
                              << endl;
                         // apet.PrintGameOptions();
                         acat.PrintInfo();
                         acat.suggestions();
                         ActionInput = false;
                    }
                    else if (petAction == 5)
                    {
                         cout << "You dropped pet off at daycare to be fed! You have Saved and Exit." << endl
                              << endl;
                         // apet.PrintGameOptions();
                         // apet.PrintInfo();
                         acat.feed();
                         ofstream fout("FileSave.txt");
                         fout << pet << endl;
                         fout << petname << endl;
                         fout << acat.GetBoredem() << endl;
                         fout << acat.GetHappiness() << endl;
                         fout << acat.GetAppetite() << endl;
                         fout << acat.GetHour() << endl;
                         fout.close();
                         exit(-1);
                    }
                    else
                    {
                         cout << "Invalid input! Please enter one of the options";
                         // apet.PrintGameOptions();
                         ActionInput = false;
                         // cin >> petAction;
                    }

                    apet.PrintGameOptions();
                    cin >> petAction;

               } while (ActionInput == false);
          }     /////IF STATEMENT!!!!
     }
     ///////////////////////////////////////////////////////////////////////////////
     if(option == 1 or option == 2)
     {
          if(option == 2)
          {
               ifstream mytype("FileSave.txt");
               mytype >> pet;
               cout << "Dragonn funciton working!";
          }
          if(pet == "Dragon")
          {
               Dragon adragon;
               adragon.SetPetType("Dragon");
               if (option == 2)
               {

                    ifstream fin("FileSave.txt");
                    //ifstream findcat("FileSave.txt");
     //
                    //ifstream fin("FileSave.txt");
                    // cin.ignore();
                    fin >> petType;
                    if (petType == "Dragon")
                    {
                         adragon.SetPetType("Dragon");
                         apet.SetPetType("Dragon");
                    }
                    // setpetypeWE NEED TO SET IT TO PET TYPE!!!!! HERE
                    fin.ignore();
                    getline(fin, petname);
                    
                    adragon.SetPetName(petname);
                    // fin >> apet.Getplay();
                    fin >> boredem;
                    adragon.SetBoredem(boredem); // set action
                    fin >> happiness;
                    adragon.SetHappiness(happiness);
                    fin >> appetite;
                    adragon.SetAppetite(appetite); // how hungry
                    fin >> hour;
                    adragon.SetHour(hour); // military time hour
                    adragon.PrintInfo();
                    fin.close();
               }
               adragon.SetPetName(petname);
               apet.PrintGameOptions();
               // Cat acat;

               int petAction;
               cin >> petAction;

               bool ActionInput = false;
               adragon.SetPetName(petname);
               adragon.SetPetType(typeofanimal);
               // acat.PrintInfo();
               do
               {
                    adragon.SetPetType(pet);
                    // acat.PrintInfo();
                    // apet.PrintInfo();
                    // acat.PrintInfo(); /////TESTING!!!!!!!!!!!
                    //  apet.PrintGameOptions();
                    if (petAction == 1)
                    {
                         // acat.PrintInfo();
                         // acat.PrintInfo();
                         adragon.Setstats(petAction);
                         cout << "You played soccer with " << petname << endl
                              << endl;
                         adragon.PrintInfo();
                         adragon.suggestions();
                         ActionInput = false;
                    }
                    else if (petAction == 2)
                    {
                         adragon.Setstats(petAction);
                         cout << "You played football with " << petname << endl
                              << endl;
                         // apet.PrintGameOptions();
                         adragon.PrintInfo();
                         adragon.suggestions();
                         ActionInput = false;
                    }
                    else if (petAction == 3)
                    {
                         adragon.Setstats(petAction);
                         cout << "You played fetch with " << petname << endl
                              << endl;
                         // apet.PrintGameOptions();
                         adragon.PrintInfo();
                         adragon.suggestions();
                         ActionInput = false;
                    }
                    else if (petAction == 4)
                    {
                         adragon.Setstats(petAction);
                         cout << "You played Tug of War with " << petname << endl
                              << endl;
                         // apet.PrintGameOptions();
                         adragon.PrintInfo();
                         adragon.suggestions();
                         ActionInput = false;
                    }
                    else if (petAction == 5)
                    {
                         cout << "You dropped pet off at daycare to be fed! You have Saved and Exit." << endl
                              << endl;
                         // apet.PrintGameOptions();
                         // apet.PrintInfo();
                         adragon.feed();
                         ofstream fout("FileSave.txt");
                         fout << pet << endl;
                         fout << petname << endl;
                         fout << adragon.GetBoredem() << endl;
                         fout << adragon.GetHappiness() << endl;
                         fout << adragon.GetAppetite() << endl;
                         fout << adragon.GetHour() << endl;
                         fout.close();
                         exit(-1);
                    }
                    else
                    {
                         cout << "Invalid input! Please enter one of the options";
                         // apet.PrintGameOptions();
                         ActionInput = false;
                         // cin >> petAction;
                    }

                    apet.PrintGameOptions();
                    cin >> petAction;

               } while (ActionInput == false);
          }
     }
     /*


     /////////////////////////////////////////////////////////////////////////
     if(option == 1 or option == 2)
     {
          if(option == 2)
          {
               ifstream mytype("FileSave.txt");
               mytype >> pet;
               cout << "Dog funciton working!";
               mytype.close();
          }
          if(pet == "Dog")
          {
               Dog adog;
               apet.SetPetType("Dog");
               adog.SetPetType("Dog");
               if (option == 2)
               {

                    ifstream fin("FileSave.txt");
                    // cin.ignore();
                    fin >> petType;
                    if (petType == "Dog")
                    {
                         adog.SetPetType(petType);
                         apet.SetPetType(petType);
                    }
                    // setpetypeWE NEED TO SET IT TO PET TYPE!!!!! HERE
                    fin.ignore();
                    getline(fin, petname);
                    
                    adog.SetPetName(petname);
                    // fin >> apet.Getplay();
                    fin >> boredem;
                    adog.SetBoredem(boredem); // set action
                    fin >> happiness;
                    adog.SetHappiness(happiness);
                    fin >> appetite;
                    adog.SetAppetite(appetite); // how hungry
                    fin >> hour;
                    adog.SetHour(hour); // military time hour
                    adog.PrintInfo();
                    fin.close();
               }
               //adog.SetPetName(petname);
               apet.PrintGameOptions();
               // Cat acat;

               int petAction;
               cin >> petAction;

               bool ActionInput = false;
               adog.SetPetName(petname);
               adog.SetPetType(typeofanimal);



               //adog.SetPetName(petname);
               //adog.SetPetType(pet);
               //apet.SetPetType(pet);
               //apet.SetPetType("Dog");
               // acat.PrintInfo();
               do
               {
                    // acat.PrintInfo();
                    // apet.PrintInfo();
                    // acat.PrintInfo(); /////TESTING!!!!!!!!!!!
                    //  apet.PrintGameOptions();
                    adog.SetPetType(typeofanimal);
                    apet.SetPetType(typeofanimal);
                    if (petAction == 1)
                    {
                         // acat.PrintInfo();
                         // acat.PrintInfo();
                         adog.Setstats(petAction);
                         cout << "You played soccer with " << petname << endl
                              << endl;
                         adog.PrintInfo();
                         adog.suggestions();
                         ActionInput = false;
                    }
                    else if (petAction == 2)
                    {
                         adog.Setstats(petAction);
                         cout << "You played football with " << petname << endl
                              << endl;
                         // apet.PrintGameOptions();
                         adog.PrintInfo();
                         adog.suggestions();
                         ActionInput = false;
                    }
                    else if (petAction == 3)
                    {
                         adog.Setstats(petAction);
                         cout << "You played fetch with " << petname << endl
                              << endl;
                         // apet.PrintGameOptions();
                         adog.PrintInfo();
                         adog.suggestions();
                         ActionInput = false;
                    }
                    else if (petAction == 4)
                    {
                         adog.Setstats(petAction);
                         cout << "You played Tug of War with " << petname << endl
                              << endl;
                         // apet.PrintGameOptions();
                         adog.PrintInfo();
                         adog.suggestions();
                         ActionInput = false;
                    }
                    else if (petAction == 5)
                    {
                         cout << "You dropped pet off at daycare to be fed! You have Saved and Exit." << endl
                              << endl;
                         // apet.PrintGameOptions();
                         // apet.PrintInfo();
                         adog.feed();
                         ofstream fout("FileSave.txt");
                         fout << pet << endl;
                         fout << petname << endl;
                         fout << adog.GetBoredem() << endl;
                         fout << adog.GetHappiness() << endl;
                         fout << adog.GetAppetite() << endl;
                         fout << adog.GetHour() << endl;
                         fout.close();
                         exit(-1);
                    }
                    else
                    {
                         cout << "Invalid input! Please enter one of the options";
                         // apet.PrintGameOptions();
                         ActionInput = false;
                         // cin >> petAction;
                    }

                    apet.PrintGameOptions();
                    cin >> petAction;

               } while (ActionInput == false);
          }
     }
     */





    /*
          if( option == 1 or option == 2)
     {
          if(option == 2){

          ifstream mydog("FileSave.txt");
               mydog >> pet;
               cout << "Thiis is workiung!" << endl;
               mydog.close();
          }
          if(pet == "Cat")
          {
               apet.SetPetType("Cat");
               acat.SetPetType("Cat");
               if (option == 2)
               {
                    //string typeofanimal;
                    ifstream findcat("FileSave.txt");
                    findcat >> typeofanimal;
                    ifstream fin("FileSave.txt");
                    // cin.ignore();
                    fin >> petType;
                    if (petType == "Cat")
                    {
                         apet.SetPetType("Cat");
                         acat.SetPetType("Cat");
                    }
                    // setpetypeWE NEED TO SET IT TO PET TYPE!!!!! HERE
                    fin.ignore();
                    getline(fin, petname);
                    acat.SetPetName(petname);
                    // fin >> apet.Getplay();
                    fin >> boredem;
                    acat.SetBoredem(boredem); // set action
                    fin >> happiness;
                    acat.SetHappiness(happiness);
                    fin >> appetite;
                    acat.SetAppetite(appetite); // how hungry
                    fin >> hour;
                    acat.SetHour(hour); // military time hour
                    acat.PrintInfo();
                    fin.close();
               }
               acat.SetPetName(petname);
               apet.PrintGameOptions();
               // Cat acat;

               int petAction;
               cin >> petAction;

               bool ActionInput = false;
               acat.SetPetName(petname);
               acat.SetPetType(pet);
               // acat.PrintInfo();
               do
               {
                    acat.SetPetType(pet);
                    // acat.PrintInfo();
                    // apet.PrintInfo();
                    // acat.PrintInfo(); /////TESTING!!!!!!!!!!!
                    //  apet.PrintGameOptions();
                    if (petAction == 1)
                    {
                         // acat.PrintInfo();
                         // acat.PrintInfo();
                         acat.Setstats(petAction);
                         cout << "You played soccer with " << petname << endl
                              << endl;
                         acat.PrintInfo();
                         acat.suggestions();
                         ActionInput = false;
                    }
                    else if (petAction == 2)
                    {
                         acat.Setstats(petAction);
                         cout << "You played football with " << petname << endl
                              << endl;
                         // apet.PrintGameOptions();
                         acat.PrintInfo();
                         acat.suggestions();
                         ActionInput = false;
                    }
                    else if (petAction == 3)
                    {
                         acat.Setstats(petAction);
                         cout << "You played fetch with " << petname << endl
                              << endl;
                         // apet.PrintGameOptions();
                         acat.PrintInfo();
                         acat.suggestions();
                         ActionInput = false;
                    }
                    else if (petAction == 4)
                    {
                         acat.Setstats(petAction);
                         cout << "You played Tug of War with " << petname << endl
                              << endl;
                         // apet.PrintGameOptions();
                         acat.PrintInfo();
                         acat.suggestions();
                         ActionInput = false;
                    }
                    else if (petAction == 5)
                    {
                         cout << "You dropped pet off at daycare to be fed! You have Saved and Exit." << endl
                              << endl;
                         // apet.PrintGameOptions();
                         // apet.PrintInfo();
                         acat.feed();
                         ofstream fout("FileSave.txt");
                         fout << pet << endl;
                         fout << petname << endl;
                         fout << acat.GetBoredem() << endl;
                         fout << acat.GetHappiness() << endl;
                         fout << acat.GetAppetite() << endl;
                         fout << acat.GetHour() << endl;
                         fout.close();
                         exit(-1);
                    }
                    else
                    {
                         cout << "Invalid input! Please enter one of the options";
                         // apet.PrintGameOptions();
                         ActionInput = false;
                         // cin >> petAction;
                    }

                    apet.PrintGameOptions();
                    cin >> petAction;

               } while (ActionInput == false);
          }     /////IF STATEMENT!!!!
     }
     ///////////////////////////////////////////////////////////////////////////////

     string typeanimal2;
     if(option == 1 or option == 2)
     {
          if(option == 2)
          {
               ifstream mytype("FileSave.txt");
               mytype >> pet;
               cout << "Dog funciton working!";
          }
          if(pet == "Dog")
          {
               Dog adog;
               adog.SetPetType(pet);
               if (option == 2)
               {

                    ifstream fin("FileSave.txt");
                    //ifstream findcat("FileSave.txt");
     //
                    //ifstream fin("FileSave.txt");
                    // cin.ignore();
                    fin >> petType;
                    if (petType == "Dog")
                    {
                         adog.SetPetType("Dog");
                         apet.SetPetType("Dog");
                    }
                    // setpetypeWE NEED TO SET IT TO PET TYPE!!!!! HERE
                    fin.ignore();
                    getline(fin, petname);
                    
                    adog.SetPetName(petname);
                    // fin >> apet.Getplay();
                    fin >> boredem;
                    adog.SetBoredem(boredem); // set action
                    fin >> happiness;
                    adog.SetHappiness(happiness);
                    fin >> appetite;
                    adog.SetAppetite(appetite); // how hungry
                    fin >> hour;
                    adog.SetHour(hour); // military time hour
                    adog.PrintInfo();
                    fin.close();
               }
               adog.SetPetName(petname);
               apet.PrintGameOptions();
               // Cat acat;

               int petAction;
               cin >> petAction;

               bool ActionInput = false;
               adog.SetPetName(petname);
               adog.SetPetType(typeanimal2);
               // acat.PrintInfo();
               do
               {
                    adog.SetPetType(pet);
                    // acat.PrintInfo();
                    // apet.PrintInfo();
                    // acat.PrintInfo(); /////TESTING!!!!!!!!!!!
                    //  apet.PrintGameOptions();
                    if (petAction == 1)
                    {
                         // acat.PrintInfo();
                         // acat.PrintInfo();
                         adog.Setstats(petAction);
                         cout << "You played soccer with " << petname << endl
                              << endl;
                         adog.PrintInfo();
                         adog.suggestions();
                         ActionInput = false;
                    }
                    else if (petAction == 2)
                    {
                         adog.Setstats(petAction);
                         cout << "You played football with " << petname << endl
                              << endl;
                         // apet.PrintGameOptions();
                         adog.PrintInfo();
                         adog.suggestions();
                         ActionInput = false;
                    }
                    else if (petAction == 3)
                    {
                         adog.Setstats(petAction);
                         cout << "You played fetch with " << petname << endl
                              << endl;
                         // apet.PrintGameOptions();
                         adog.PrintInfo();
                         adog.suggestions();
                         ActionInput = false;
                    }
                    else if (petAction == 4)
                    {
                         adog.Setstats(petAction);
                         cout << "You played Tug of War with " << petname << endl
                              << endl;
                         // apet.PrintGameOptions();
                         adog.PrintInfo();
                         adog.suggestions();
                         ActionInput = false;
                    }
                    else if (petAction == 5)
                    {
                         cout << "You dropped pet off at daycare to be fed! You have Saved and Exit." << endl
                              << endl;
                         // apet.PrintGameOptions();
                         // apet.PrintInfo();
                         adog.feed();
                         ofstream fout("FileSave.txt");
                         fout << pet << endl;
                         fout << petname << endl;
                         fout << adog.GetBoredem() << endl;
                         fout << adog.GetHappiness() << endl;
                         fout << adog.GetAppetite() << endl;
                         fout << adog.GetHour() << endl;
                         fout.close();
                         exit(-1);
                    }
                    else
                    {
                         cout << "Invalid input! Please enter one of the options";
                         // apet.PrintGameOptions();
                         ActionInput = false;
                         // cin >> petAction;
                    }

                    apet.PrintGameOptions();
                    cin >> petAction;

               } while (ActionInput == false);
          }
     }
     */
          string mytypeofanimal;
          if(option == 1 or option == 2)
     {
          if(option == 2)
          {
               ifstream mydog("FileSave.txt");
               mydog >> pet;
               cout << "Dragonn funciton working!";
          }
          if(pet == "Dog")
          {
               Dog adog;
               adog.SetPetType("Dog");
               if (option == 2)
               {

                    ifstream fin("FileSave.txt");
                    //ifstream findcat("FileSave.txt");
     //
                    //ifstream fin("FileSave.txt");
                    // cin.ignore();
                    fin >> petType;
                    if (petType == "Dog")
                    {
                         adog.SetPetType("Dog");
                         apet.SetPetType("Dog");
                    }
                    // setpetypeWE NEED TO SET IT TO PET TYPE!!!!! HERE
                    fin.ignore();
                    getline(fin, petname);
                    
                    adog.SetPetName(petname);
                    // fin >> apet.Getplay();
                    fin >> boredem;
                    adog.SetBoredem(boredem); // set action
                    fin >> happiness;
                    adog.SetHappiness(happiness);
                    fin >> appetite;
                    adog.SetAppetite(appetite); // how hungry
                    fin >> hour;
                    adog.SetHour(hour); // military time hour
                    adog.PrintInfo();
                    fin.close();
               }
               adog.SetPetName(petname);
               apet.PrintGameOptions();
               // Cat acat;

               int petAction;
               cin >> petAction;

               bool ActionInput = false;
               adog.SetPetName(petname);
               adog.SetPetType(mytypeofanimal);
               // acat.PrintInfo();
               do
               {
                    adog.SetPetType(pet);
                    // acat.PrintInfo();
                    // apet.PrintInfo();
                    // acat.PrintInfo(); /////TESTING!!!!!!!!!!!
                    //  apet.PrintGameOptions();
                    if (petAction == 1)
                    {
                         // acat.PrintInfo();
                         // acat.PrintInfo();
                         adog.Setstats(petAction);
                         cout << "You played soccer with " << petname << endl
                              << endl;
                         adog.PrintInfo();
                         adog.suggestions();
                         ActionInput = false;
                    }
                    else if (petAction == 2)
                    {
                         adog.Setstats(petAction);
                         cout << "You played football with " << petname << endl
                              << endl;
                         // apet.PrintGameOptions();
                         adog.PrintInfo();
                         adog.suggestions();
                         ActionInput = false;
                    }
                    else if (petAction == 3)
                    {
                         adog.Setstats(petAction);
                         cout << "You played fetch with " << petname << endl
                              << endl;
                         // apet.PrintGameOptions();
                         adog.PrintInfo();
                         adog.suggestions();
                         ActionInput = false;
                    }
                    else if (petAction == 4)
                    {
                         adog.Setstats(petAction);
                         cout << "You played Tug of War with " << petname << endl
                              << endl;
                         // apet.PrintGameOptions();
                         adog.PrintInfo();
                         adog.suggestions();
                         ActionInput = false;
                    }
                    else if (petAction == 5)
                    {
                         cout << "You dropped pet off at daycare to be fed! You have Saved and Exit." << endl
                              << endl;
                         // apet.PrintGameOptions();
                         // apet.PrintInfo();
                         adog.feed();
                         ofstream fout("FileSave.txt");
                         fout << pet << endl;
                         fout << petname << endl;
                         fout << adog.GetBoredem() << endl;
                         fout << adog.GetHappiness() << endl;
                         fout << adog.GetAppetite() << endl;
                         fout << adog.GetHour() << endl;
                         fout.close();
                         exit(-1);
                    }
                    else
                    {
                         cout << "Invalid input! Please enter one of the options";
                         // apet.PrintGameOptions();
                         ActionInput = false;
                         // cin >> petAction;
                    }

                    apet.PrintGameOptions();
                    cin >> petAction;

               } while (ActionInput == false);
          }
     }


          return 0;
}
