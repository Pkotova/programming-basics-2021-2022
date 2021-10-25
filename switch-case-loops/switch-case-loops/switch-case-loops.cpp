#include <iostream>
/*
	data type
	basic calculations
	boolean expressions
	if-statement
	if-else - statement
	if-elseif-else - statement
	ternary operator
	switch-case
	for - loop 
*/
int main()
{
	int a = 5;
	//for - loop
	//while - loop
	//do - while - loop
	/*
		initialization of a iterator/variable
		conditional statement
		update
	*/
	for (int i = 0; i < 10; i++) // 9, 10
	{
		std::cout << i << std::endl; // 0,1,..,9 
	}

	for (int i = 0; i <= 10; i++) // 9, 10
	{
		//even
		if (i % 2 == 0)
		{
			std::cout << i << std::endl; // 2,4,6,8,10 
		}
		//odd
		if (i % 2 != 0)
		{
			std::cout << i << std::endl; // 1,3,5,7,9
		}
	}







	/*
	(false) ? std::cout << "Hello" : std::cout << "Good morning!";
	//(conditional-statement) ? {if condition is true} : {if condition is false}

	bool result = (true && false) || !true; // false
	
	if (!(!result))
	{
		std::cout << "Yes";
	}
	else {
		std::cout << "No";
	}

	if (!true)
	{
		if (true)
		{
			if (false)
			{
				std::cout << "no1";
			}
			else
			{
				std::cout << "yes";
			}
		}
		else 
		{
			std::cout << "no2";
		}
	}

	if (true)
	{
		std::cout << "no1";
		std::cout << "no11";
	}

	if (false)
		std::cout << "no2";
	
	if (false)
		std::cout << "no3";
	
	else
		std::cout << "no4";
	

	int facultyNumber;
	std::cin >> facultyNumber; // 71933, 71866

	int flag; // 98 -> 85, 99 -> 86, 00 -> 87, 01 -> 90

	if ((facultyNumber % 1000) / 100 == 9) // 71866 % 1000 => 866 / 100 => 8
	{
		flag = (facultyNumber % 1000) / 100; // 9
	}
	else {
		flag = (facultyNumber % 1000) / 10; // 86
	}
	
	// 7185x -> 98
	// 7186x -> 99
	// 7187x -> 00
	// 719xx -> 01 71900,71902..,71909

	switch (flag)
	{
		case 85: {
			std::cout << "The student is 98";
			break;
		}
		case 86: {
			std::cout << "The student is 99";
			break;
		}
		case 87: {
			std::cout << "The student is 00";
			break;
		}
		case 9: {
			std::cout << "The student is 01";
			break;
		}
		default: std::cout << "This student does not bellow to the [98;01]";
			break;
	}
	
	*/
	
}
