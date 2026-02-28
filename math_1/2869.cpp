#include <iostream>

int main()
{
    int A, B, V;
    int Day;
    std::cin >> A >> B >> V;

    Day = (((V - A) + (A - B - 1)) / (A - B)) + 1;

    std::cout << Day << "\n";
}