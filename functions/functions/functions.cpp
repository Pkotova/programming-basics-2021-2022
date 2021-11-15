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
        std::cout << "True";
    }
    else 
    {
        std::cout << "False";
    }
   
}
int main()
{
    int p = 5;

  //  std::cin >> a; // 5

    //std::cout << sum(p, 15) <<std::endl;// 7, 9
    isAlfa('c');
    isAlfa('1');
}

