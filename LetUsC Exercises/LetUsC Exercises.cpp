#include <iostream>

int main()
{
	float fahrenhit;
	std::cout << "Enter your city's tempreture: ";
	std::cin >> fahrenhit;
	float celcius;
	float minus32 = fahrenhit - 32.0;
	float times5 = minus32 * 5.0;
	celcius = times5 / 9.0;
	printf("Celcius = %.1f", celcius);
}

