#include <iostream>

bool isPrime(int n);

int main()
{
    int min, max;

    std::cin >> min >> max;
    int sum = 0;
    bool isPrimeIn = false;
    int minPrime = 0;
    for (int i = min; i <= max; i++)
    {
        if (isPrime(i))
        {
            sum += i;
            isPrimeIn = true;
            if (minPrime == 0)
            {
                minPrime = i;
            }
        }
    }

    if (!isPrimeIn)
    {
        std::cout << "-1" << "\n";
    }
    else
    {
        std::cout << sum << "\n" << minPrime << "\n";
    }
    return 0;
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