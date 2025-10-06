#include <iostream>
int main()
{
    long long value = 0, sum = 0;
    std::cin >> value;

    for (long long i = 1; i <= value; i++)
    {
        sum += i;
    }
    std::cout << sum << "\n";
    return 0;
}