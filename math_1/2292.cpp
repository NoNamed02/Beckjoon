#include <iostream>

int main()
{
    int input = 0;
    int checkValue = 0;
    std::cin >> input;

    int i = 1;
    int value = 1;
    while(true)
    {
        if (value < input)
        {
            value += 6 * i;
            i++;
        }
        else
        {
            std::cout << i << "\n";
            break;
        }
    }
}

/*
1 6 12 18
6 * N
*/