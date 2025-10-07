#include <iostream>
#include <array>
#include <algorithm>
int main()
{
    std::array<int, 3> dice = {};
    int price = 0;

    std::cin >> dice[0] >> dice[1] >> dice[2];

    int max_value = *std::max_element(dice.begin(), dice.end());

    if (dice[0] == dice[1] && dice[1] == dice[2])
    {
        price = 10000 + dice[0] * 1000;
    }
    else if (dice[0] == dice[1] || dice[0] == dice[2])
    {
        price = 1000 + dice[0] * 100;
    }
    else if (dice[1] == dice[2])
    {
        price = 1000 + dice[1] * 100;
    }
    else
    {
        price = max_value * 100;
    }

    std::cout << price << std::endl;

    return 0;
}