//Petya Kotova
/*
	Sofia University Faculty of Mathematics and Informatics
	1st course 
	Information Systems
	2nd group
*/
// Start the program with ctrt + F5 

#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	cout << "Hello World" << endl;

//Declaration of integer 
	int integer;

//Initialization
	integer = 124;

//literal
	const double e = 2.7182; 
	const double pi = 3.1415;
	const double fi = (1 + sqrt(5)) / 2;

//data types 
	int myInt = 1;

	double doubleNum = 1.2;
	float floatNum = 1.23;

	bool iamSmart = false; //poor you ;(
	bool iamAFool = 0; 
	bool iamPretty = true;
	bool isHandsome = 1;

	char letter = 'a';
	char number = '2';
	char percentSymbol = '%';
	char dolarSymbol = '&';
	char hashTag = '#'; // followForFollow

//Input/Output of console 
	int favouriteNumber;
	cout << "My favourite number is: ";
	cin >> favouriteNumber;
	cout << "Here is my favourite number! " << favouriteNumber <<endl;

// Displaying and not displaying symbols
	cout << "\n this is new line";
	cout << endl;
	cout << "\t this is tabulation";

//Arithmetic Operations 
	double sum = 1 + 12;
	cout << sum << endl; 

	double subtraction = 14 - 154;
	cout << subtraction << endl;

	double product = 13 * 123;
	cout << product << endl;

	double devision = 15 / 2; // 15 / 2 = 7
	cout << devision << endl;

	double modDevision = 15 % 2; // 15 % 2 = 0.5;
	cout << modDevision << endl;

//Operators priority (Arithmetic)
//(), *, / ,% ,+ ,- 
	double result = ((5 - 16) * 13 / 2) % 14 - 154 * 3 + 54 % 2;
	cout << result << endl;

// cmath functions good to know
	cout << sin(90) << endl;		//all trigonometric functions
	cout << log(10) << endl;		//natural logarithm
	cout << log10(10) << endl;		// common logarithm
	cout << pow(2, 10) << endl;	    //power 2 * 2 * 2 * 2 .... 
	cout << sqrt(69) << endl;		//square of number 
	cout << ceil(13.23) << endl;	//round up value
	cout << floor(134.25) << endl;	//round down value
	cout << round(5.49) << endl;	//round to nearest
	cout << fabs(-123.23) << endl;	//abosolute value double numbers
	cout << abs(-123) << endl;		//absolute value integer numbers
}

