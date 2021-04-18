#include <iostream>
using namespace std;

int main()
{
    
        cout << "This program will multiply 2 numbers then print out the answer. The first step is to type in two diffrent numbers(make  sure to have space between the two numbers), then press enter." << endl;
    
    double firstNumber, secondNumber, productOfTwoNumbers;
    
    // Stores two floating point numbers in variable firstNumber and secondNumber respectively
    cin >> firstNumber >> secondNumber;
    cout << "You have entered: " << firstNumber;
    cout << "x" << secondNumber << endl;
    // Performs multiplication and stores the result in variable productOfTwoNumbers
    productOfTwoNumbers = firstNumber * secondNumber;

    cout << "The answer is: " << productOfTwoNumbers << endl;

    return 0;
}