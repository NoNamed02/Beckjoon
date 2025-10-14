#include <iostream>
#include <string>

int main()
{
    std::string word;
    std::cin >> word;

    // std::cout << word.length() << "\n";
    int size = 0;
    for (char i : word)
    {
        size++;
    }
    std::cout << size << "\n";
    return 0;
}