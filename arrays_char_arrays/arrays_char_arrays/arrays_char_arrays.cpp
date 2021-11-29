#include <iostream>
#include <cstring> 
// array is 
int size(char seq[]) { // strlen()
    int size = 0;

    for (int i = 0; seq[i] != '\0'; i++)
    {
        size++;
    }
    return size;
}
// comparing size first, then values
int compare(char word1[], char word2[]) { // 0 - equal, 1 - word1 > word2, -1 word1 < word2

    if (size(word1) == size(word2))// 'abc' 'abd' 'xy' 'abc'
    {
        for (int i = 0; word1[i] != '\0'; i++)
        {
            if (word1[i] < word2[i]) // 'abc' 'abc' 
            {
                 return -1;
            }
            if (word1[i] > word2[i]) 
            {
                return 1;
            }
        }
        return 0;
    }
    else if(size(word1) > size(word2))
    {
        return 1;
    }
        return -1;
}
int main()
{ 
    // "abc" < "abd" 
    // "abcd" > "abc"
    double nums[10];  //2.56
    long numbers[10]; //2 

    char seq[32]; // "abc" 'a''b'c'

    //std::cin >> seq; // 'dog'
   // std::cin.getline(seq, 32); // 'this is a dog'\
    
   // std::cout << seq[5];

  //  std::cout << size(seq);
    char word1[10] = "xy";
    char word2[10] = "abc";
    std::cout << compare(word1, word2); // 1
    std::cout << strcmp("xy", "abc"); // 1

    char watch[32] = "Kaks 828hKu";

    for (int i = 0; i < 5; i++)
    {

    }
}
