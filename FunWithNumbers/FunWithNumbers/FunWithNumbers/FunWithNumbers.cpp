#include <iostream>
/**
*This Program will ask the user to enter a number between 0 to 10.
Then it print the english word corresponding to the number.
*/
void PrintEnglishWord(int inputNumber)
{
	if (inputNumber == 0)
	{
		std::cout << "Zero" << std::endl;
	}

	else if (inputNumber == 1)
	{
		std::cout << "One" << std::endl;
	}
}

void readNumberAndPrintWord()
{
	std::cout << "Please enter a number between 0-10." << std::endl;
	int a;
	std::cin >> a;
	std::cout << "You have entered-" << a << std::endl;
	PrintEnglishWord(a);
}
int main()
{
	PrintEnglishWord(0);
	PrintEnglishWord(1);
	readNumberAndPrintWord();
}