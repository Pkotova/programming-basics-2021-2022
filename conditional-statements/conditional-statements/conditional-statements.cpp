#include <iostream>
 
int w = 7; // global variable

// boolean expressions
// local, global variables
// scope of a variable
// cast int to char, and char to int
// conditional statement
// ternary operator 


int main()
{  // 4
	//{ // 3
	//	{ // 2
	//		{ // 1
	//			int c = 10; // 1
	//			k = 2;
	//		}
	//		int k = 10; // 1,2
	//		u = 3;
	//	}
	//	int u = 15; // 1,2,3
	//}
	//int l = 60; // 1,2,3,4

	//c,k,u,l - local variable
	//double height; // declaration
	//height = 4; // initialization

	//const double e = 2.7;
	//const double pi = height;

	//bool result = height && true; //true
	//bool result1 = height || false;//true

	//std::cin >> height; // 0 

	//bool result = height && true; // false 
	//bool result = height || true; // true

	//bool result = !height && true; // true
	//bool result = !height && !true; // false
	//bool result = !(!height && !!true); // false 

	//bool result = !(!height && !!true) && !true; // false 

	//bool result = !(!height && !!true) || !true;

	//std::cout << result;

	//int a = 61;
	//char letter = char(a);
	//std::cout << letter<<std::endl; // '=' 

	//char A = int('a');
	//std::cout << (int)A << std::endl; // 
	//
	

	int a = 2;
	int b = 3; 
	bool bIsEven = b % 2 == 0; //Напишете булев израз, който ... 
	bool aIsEqual3 = a == 3;
	//is b even? b четно ли е ? 
	if (bIsEven)
	{
		std::cout << a << std::endl;
	}
	else
	{
		std::cout << b << std::endl;
		
	}

	//if (conditional statamenet) else (statement);

	// ternary operator

	//(condition) ? statement1 : statement2;

	(a == 3) ? std::cout << a + 10 : std::cout << b + 10;

	if (aIsEqual3)
	{
		a = a + 10; //12 ,новата стойност на а да бъде равна на старата + 10; 2 + 10;


	}
	else
	{
		b = b + 10; // 13
	}
}

