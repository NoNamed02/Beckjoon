#include <iostream>

int main()
{
    while (true)
    {
        int a, b;
        std::cin >> a >> b;
        if (a < b && b % a == 0)
        {
            std::cout << "factor" << "\n";
        }
        else if (a > b && a % b == 0)
        {
            std::cout << "multiple" << "\n";
        }
        else if (a == 0 && b == 0)
        {
            break;
        }
        else
        {
            std::cout << "neither" << "\n";
        }
    }
}

/*
A B
첫 번째 숫자가 두 번째 숫자의 약수이다.
약수 -> A < B && B % A == 0
첫 번째 숫자가 두 번째 숫자의 배수이다.
배수 -> A > B && A % B == 0
첫 번째 숫자가 두 번째 숫자의 약수와 배수 모두 아니다.
*/