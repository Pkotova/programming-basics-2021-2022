#include <iostream>
/*
* <type><name>({parametes}){
    
    };
-- void - empty return, procedure
-- int,double, char.. (primitive types by now) - 
-- return;
*/
int k = 4;

int sum(int a, int t = 10){
    return a + t;
}
void isAlfa(char c) {

    if (c >='a'&& c <= 'z' || c >= 'A' && c <= 'Z')
    {
        std::cout << "True" << std::endl;
    }
    else 
    {
        std::cout << "False" << std::endl;
    }
}
bool isAlfa(char c, int i) {
    if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
    {
        return true;
    }
    return false;
}

// 1зад Напишете функция, която проверява дали едно число е кратно на 7 и връща резултат
// 2зад Напишете функция, която използва функцията от първа задача и проверява дали едно число се дели на 5 и на 7
// 3зад Напишете функция, която по подаден ден от седмицата (1,2,3,4,5,6,7) извежда името на деня
// 4зад Напишете функция, извежда следната фигура
/*
    #
    ##
    ###
    ####
    #####
     n = 5
    #
    ##
    ###
    ####
    #####
    ######
     n = 5
    по въведено n, където n e височината на фигурата
*/

int main()
{
 
    isAlfa('c');   // 1
    isAlfa('1',0); //2 

    int p = 5;

    //  std::cin >> a; // 5

      //std::cout << sum(p, 15) <<std::endl;// 7, 9
}

