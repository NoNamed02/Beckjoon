#include <iostream>
#include <string>

int main()
{
    int currentHour, currentMinute, cookTime;

    std::cin >> currentHour >> currentMinute;
    std::cin >> cookTime;

    currentMinute += cookTime;
    if (currentMinute / 60 >= 1)
    {
        currentHour += currentMinute / 60;
        currentMinute %= 60;
    }
    
    currentHour %= 24;

    std::cout << currentHour << " " << currentMinute << std::endl;

    return 0;
}

    // really need if ?? i dont think so...
    // if (currentMinute / 60 >= 1)
    // {
    //     currentHour += currentMinute / 60;
    //     currentMinute %= 60;
    // }