#include <iostream>
#include "time.h"

const int MAX_SIZE = 256;
// static array C++ 
// dynamic array - vector 
// linked list 10->10
// doubly linked list
// queue
// stack
// hash table 
int randomNumber() {
	srand(time(NULL));
	return rand() % 100; // [0;99]
}
int main()
{
	std::cout << randomNumber();
// Редица с точно определен брой елементи, последователно подредени в паметта
// достъпване елементите на масива като използва следния синтаксис
// <arrayName>[index];, numbers[5]


	int n;
	std::cin >> n; // 3
	int a[MAX_SIZE];
	for (int i = 0; i < n; i++)
	{
		std::cin >> a[i];
	}
	for (int i = 1; i < n; i += 2)
	{
		std::cout << a[i] << std::endl;
	}
	std::cout << "-------------------" << std::endl;
	for (int i = 0; i < n; i += 2)
	{
		std::cout << a[i] << std::endl;
	}


	//std::cout << a[33]; //-2 miliarda; +2 miliards
	//-858993460 ,10
	//-858993460 ,11
	//-858993460 ,12
	//-858993460 ,33
	/*std::cout << "The array contains: " << std::endl;
	for (int i = 0; i < n; i++)
	{
		std::cout << i + 1 << ':' << a[i] << std::endl; // index: number
	}*/
	// 1: 2
	// 2: 304
	// 3: 954
	
	//зад да се намери
	//  минимално, 
	//	максимално число, 
	//	числа, които се делят на 5 без остатък, да се въведат в масив b и масив b, да се изведе

	int b[MAX_SIZE];
	int index = 0;
	int max = a[0], min = a[0];
	for ( int i = 0; i < n; i++) //a[0] = 10, a[1] = 4, a[2] = 2, a[3] = 15
	{
		if (a[i] < min) // 10 < 200000000 , 5 < 10, 2 < 4 , 15 < 2
		{
			min = a[i]; // min = 2
		}
		if (a[i] > max) // 10 > -200000000, 5 > 10, 2 > 10, 15 > 10 
		{
			max = a[i]; // max = 15
		}
		if (a[i] % 5 == 0)
		{
			b[index++] = a[i]; // b[0] = a[0] = 10, b[1] = a[3] = 15
		}
	}
	std::cout << "Array a[i] % 5 = 0 " << std::endl;
	for (int i = 0; i < index; i++)
	{
		std::cout << b[i] << ' '; // 10 15 
	}
	std::cout << std::endl;
	std::cout << "MAX: " << max << ", MIN: " << min;

/*
	srand(time(NULL));
	int k = rand() % 100; // [0;99]
	int l = rand() % 100 + 1; // [1;100]
	int r = rand() % 1000 + 1; // [1;1000]
	int t = rand() % 500 + 500; //[500-999]
	int u = rand() % 501 + 500; //[500-1000]
	//std::cout << t;

	for (int i = 0; i < 6; i++)
	{
		int f = rand() % 100000; // [0;99]
		std::cout << f << std::endl;
	}
*/
/*
	int a, b;
	std::cin >> a >> b;

	for (int  i = a; i <= b; i=++a) 
	{
		while (i != 0)
		{
			if ( i >= 20)
			{
				std::cout << "Water";
				i -= 20;
			}
			else if(i >= 12)
			{
				std::cout << "Universe";
				i -= 12;
			}
			else if (i >= 8)
			{
				std::cout << "Air";
				i -= 8;
			}
			else if (i >= 6)
			{
				std::cout << "Earth";
				i -= 6;
			}
			
			else if (i >= 4)
			{
				std::cout << "Fire";
				i -= 4;
			}
			else if (i >= 1)
			{
				std::cout << "Plasma";
				i--;
			}
		}
		std::cout << std::endl;
	}
*/
}
