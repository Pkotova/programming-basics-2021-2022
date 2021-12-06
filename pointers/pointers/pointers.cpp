#include <iostream>

//Задача 1: Знаем, че всяка година Ники расте с по 1 см
// да се напише програма, която по въведени години и ръст извежда колко
// висок ще бъде Ники след 5 години 
// пример:
// вход: 1.60 15
// изход: 1.65 20
// да се реши с функция, която връща години и ръст
// double* calculateHeight(double height, double age)

double* raste(double height, int year) {

    height += 0.05;
    year += 5;

    double stoinosti[2];
    stoinosti[0] = height;
    stoinosti[1] = year;

    return stoinosti;
}

void incrementByOne(int* a) //int a = r, int * a = &r 
{
   *a += 1;
}
void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    double height = 1.60;
    double age = 15;
   // std::cout<<*calculateHeight(height, age);



    int value1 = 10;
    int value2 = 15;
    swap(value1, value2);

  //  std::cout << "value1: " << value1 << " value2: " << value2 << std::endl;


    // a = 10, b = 15 -> swap(a, b)-> b = 10, a = 15
    int r = 20;
    incrementByOne(&r);
    //std::cout << r << std::endl; // 20/21

    int a = 22;
    int* ptr = &a;
     /*
        std::cout << ptr << std::endl;    // address
        std::cout << *ptr << std::endl;   // value
        std::cout << &a << std::endl;     // address
       // std::cout << *a << std::endl;   // invalid
        std::cout << *&ptr << std::endl;  // address
        std::cout << &*ptr << std::endl;  // address
        std::cout << *&*ptr << std::endl; // value
    */
} 


