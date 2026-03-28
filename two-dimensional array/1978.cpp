#include <iostream>

bool isPrime(int n);

int main()
{
    int inputCount = 0;

    int input = 0;

    int primeCount = 0;
    std::cin >> inputCount;
    for (int i = 0; i < inputCount; i++)
    {
        std::cin >> input;
        if (isPrime(input)) primeCount++;
    }

    std::cout << primeCount << "\n";
}

bool isPrime(int n)
{
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;

    for (int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0) return false;
    }
    return true;
}
