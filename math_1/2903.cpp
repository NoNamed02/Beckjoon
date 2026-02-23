#include <iostream>
int main()
{
    int input = 0; 
    int temp = 2;
    std::cin >> input;

    for (int i = 0; i < input; i++)
    {
        temp = temp + temp - 1;
    }
    std::cout << temp * temp;

    return 0;
}



// 0 / 2 
// 1 / 3 = 2 + 1
// 2 / 5 = 3 + 2
// 3 / 9 = 5 + 4
// 4 / 17 = 9 + 8
// 5 / 33 = 17 + 16