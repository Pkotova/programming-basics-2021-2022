#include <iostream>
class Person {
public:
	int age;
};
// рекурсия - функцията извиква сама себе 
int getDigitsSum(int num, int sum) //12,7; 1,9
{
	//1. дъно на рекусията 
	if (num / 10 == 0) { // 1234 / 10 == 0? , 123 / 10 == 0? , 12 / 10 ==? 0 , 1 / 10 =?
		sum += num % 10; // 9 + (1 % 10) = 9 + 1 = 10
		return sum;
	}
	sum += num % 10; // sum = 4 1234 % 10 = ? 4 + 3 = 7 + 2 = 9
	return getDigitsSum(num / 10, sum); // 1234 / 10, 4 = 123, 4; 123 / 10 = 12, 7 , 12/10 = 1, 9
}
int getDigitsSum(int num) { // 1234
	return getDigitsSum(num, 0); // 1234, 0  int sum = 0;-> 10
}
void read(int* arr, int size, int i)
{
	if (i == size) return;
	std::cin >> *arr;
	read(arr + 1, size, i + 1);
}
int getDigiFrequency(int num, int digit, int digitFrequency)
{
	if (num / 10 == 0)
	{
		if (num % 10 == digit)
		{
			digitFrequency++;
		}
		return digitFrequency;
	}
	if (num % 10 == digit)
	{
		digitFrequency++;
	}
	return getDigiFrequency(num / 10, digit, digitFrequency);
}
int getDigiFrequency(int num, int digit)
{
	return getDigiFrequency(num, digit, 0);
}
bool isArrayAscending(int* arr, int size, int index) // recursive
{
	bool isAscending = arr[index - 1] <= arr[index];
	if (index == size - 1)
	{
		return isAscending;
	}
	return isAscending && isArrayAscending(arr, size, index + 1);
}
bool isArrayAscending(int* arr, int size) {
	return isArrayAscending(arr, size, 1);
}
bool isAscending(int* arr, int size) // loop
{	
	for (int i = 1; i < size - 1; i++)
	{
		if (arr[i - 1] > arr[i]) // 1, 2, 3, 4, 5
		{
			return false;
		}
	}
	return true;
}
int main()
{
	//Recursion
	// Task 1

//	int num = 1234;
//	std::cout << getDigitsSum(num);
// 
// 	Task 3
//	int arr[10];
//	read(arr, 4, 0);

	//Task 2
//	int n = 2021;
//	int digit = 2;
//	std::cout << getDigiFrequency(n, digit);
	
// task4
	int arr[] = { 1,2,3,4,5 };
	std::cout << std::boolalpha << isArrayAscending(arr, 5) << std::endl;

// Dynamic memory : * + new, delete
	// 
   /*	int * p = new int(); // винаги различен адрес
	   //p = &a;

	   int* ptr = nullptr;
	   int a = 10;
	   ptr = &a;


	   std::cout << ptr << std::endl;

	   //delete p;

	   //0113FBF0
	   //0078F718
	   //0053F928
	   */
	   /*
		   Person* c = new Person();

		   std::cin >> c->age;

		   delete c;*/

}
