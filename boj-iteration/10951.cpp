#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int a, b;
    while(std::cin >> a >> b)
    {
        std::cout << a + b << "\n";
    }
    return 0;
}