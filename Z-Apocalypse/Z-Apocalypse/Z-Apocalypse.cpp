// Z-Apocalypse.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> 
using namespace std;

void intro()
{
    cout << "Intro- You are a scientist survivor trapped in a Zombie apocalypes. Everyone you knew is dead or turned into zombies.   The only way to save the world is to go to the science station no.3, the only problem, its's located on the ocean, near the coast of new york." 
<< endl;
}

int firstAction()
{
    cout << "What is Your first course of action?" << endl;
    cout << "Opt.1 charge the batteries and fill your bottles up with water" << endl;
    cout << "Opt.2 Make weapons" << endl;
    cout << "Opt.3 Study the zombies and their behaviour" << endl;
    cout << "Opt.4 Stock up on food, water, and drinks" << endl;

    cout << "Enter your choice: ";
    int choice;
    cin >> choice;

    cout << "You have chosen: " << choice << endl;
    return choice;
}

int secondAction()
{
    cout << "What is the safest way to travel?" << endl;
    cout << "Opt.1 Car" << endl;
    cout << "Opt.2 Plane" << endl;
    cout << "Opt.3 By walk" << endl;
    cout << "opt.4 Bike" << endl;

    cout << "Enter your second choice: ";
    int choice;
    cin >> choice;

    cout << "You have chosen: " << choice << endl;
    return choice;
}

int main()
{
    intro();

    firstAction();
    
    
    secondAction();
  
    //wait for user to press a key
    char k;
    cin >> k;
}