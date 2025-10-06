#include <iostream>

int main()
{
    int byte_size;
    std::cin >> byte_size;
    int long_count = byte_size % 4 == 0 ? byte_size / 4 : byte_size / 4 + 1;

    for (int i = 0; i < long_count; i++)
    {
        std::cout << "long ";
    }
    std::cout << "int" << "\n";

    return 0;
}