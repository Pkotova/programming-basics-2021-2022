#include <iostream>
/* for loop - предусловие
 do-while - следусловие
 while - предусловие
 loop components;
	1. intialization
	2. condition
	3. Incrementation/ update

 sintax: как го пиша? Как го програмирам?
 semantic: какво се опитвам да постигна?


 */


int main()
{
	/*
		int number;

		for (int i = 0; i < 10; i++)
		{
			std::cin >> number;
		}

		int i = 10;
		do
		{
			std::cout << "This is the do-while loop" << std::endl;
			std::cin >> number;
			i++;

		} while (i < 10);

		while (i < 10)
		{
			std::cout << "This is the while loop" << std::endl;
			std::cin >> number;
			i++;
		}
	*/

	// Въведе в конзолата годините на 10 момичета, ако съществува от момичетата е >= 20г. изведете съобщение "Браво!"

	int age;
	int i = 0;
	/*	while (i < 10)
		{
			std::cin >> age;
			if (age >= 20)
			{
				std::cout << "Bravo!";
				break; // determines loop execution
			}
			i++; // IMPORTANT!!!!!!!!
		}
		*/
		/*
		for (int i = 0; i < 10; i++)
		{
			std::cin >> age;
			if (age >= 20)
			{
				std::cout << "Bravo!";
				break; // determines loop execution
			}
		}

		// Въведе в конзолата годините на 10 момичета, ако ВСЯКО от момичетата е >= 20г. изведете съобщение "Браво!"

		// continue

		for ( i = 0; i < 10; i++)
		{
			std::cin >> age;
			if (age < 20)
			{
				break; // determines loop execution
			}
		}

		if (i == 10)
		{
			std::cout << "Bravo"<< std::endl;
		}
		*/
	/*
	for (int i = 0; i < 5; i++)
	{
		for (int j = i + 1; j < 5; j++)
		{
			std::cout << j << ' ';
		}
		std::cout << std::endl;
	}*/
	//'@', '#', '^'

	int n; 
	std::cin >> n;
	//
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j == n - i - 1)
			{
				std::cout << "# ";
			}
			else if (i == j)
			{

				std::cout << "@ ";
			}
			else 
			{
				std::cout << "^ ";
			}
		}
		std::cout << std::endl;
	}




}

