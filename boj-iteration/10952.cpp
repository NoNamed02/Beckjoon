#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int i = 1, int_a, int_b;
    while (true)
    {
        std::cin >> int_a >> int_b;
        if (int_a == 0 && int_b == 0)
            break;
        std::cout << int_a + int_b << "\n";

        i++;
    }
    return 0;
}