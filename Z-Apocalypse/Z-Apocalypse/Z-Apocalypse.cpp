// Z-Apocalypse.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> 
using namespace std;

void intro()
{
    cout << "Intro- You are a scientist survivor trapped in a Zombie apocalypes. Everyone you knew is dead or turned into zombies.   The only way to save the world is to go to the science station no.3, the only problem, its's located on the ocean, near the coast of new york." 
<< endl;
}

int prepare()
{
    cout << "What is Your first course of action?" << endl;
    cout << "Opt.1 Charge the batteries and fill your bottles up with water" << endl;
    cout << "Opt.2 Make weapons" << endl;
    cout << "Opt.3 Study the zombies and their behaviour" << endl;
    cout << "Opt.4 Stock up on food, water, and drinks" << endl;

    cout << "Enter your choice: ";
    int choice;
    cin >> choice;
    
    cout << "You have chosen: " << choice << endl;
    return choice;
}

int selfDefence()
{
    cout << "What is the best way to defend yourself?" << endl;
    cout << "Opt.1 Baseball bat" << endl;
    cout << "Opt.2 Kitchen knife" << endl;
    cout << "Opt.3 Sword" << endl;
    cout << "Opt.4 Chainsaw" << endl;

    cout << "Enter your choice of weapon: ";
    int choice;
    cin >> choice;

    cout << "You have chosen: " << choice << endl;
    return choice;
}

int landTransportation()
{
    cout << "How do You want to travel to the port?" << endl;
    cout << "Opt.1 Car" << endl;
    cout << "Opt.2 Minivan" << endl;
    cout << "Opt.3 By walk" << endl;
    cout << "Opt.4 Bike" << endl;

    cout << "Enter your choice of transportation: ";
    int choice;
    cin >> choice;

    cout << "You have chosen: " << choice << endl;
    return choice;
}

int main()
{
    intro();

    int prepareChoice = prepare();

    int selfDefenceChoice = selfDefence();
    
    int landTransportaionChoice = landTransportation();
 
    /* int seaTransportation ()
  {
  cout << "How do you want to travel the sea?" << endl:
  }
  */
    
  //wait for user to press a key
    if (prepareChoice == 3 && selfDefenceChoice == 4 && landTransportaionChoice == 1)
    {
        cout << "You have reached the port." << endl;
    }
    else
    {

        cout << "You died while going to the port." << endl;
    }
    char k;
    cin >> k;
}
