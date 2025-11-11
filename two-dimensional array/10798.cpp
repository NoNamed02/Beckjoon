#include <iostream>

int main()
{
    std::string word[5];
    for (int i = 0; i < 5; i++)
    {
        std::cin >> word[i];
    }
    for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (word[j].length() > i)
            {
                std::cout << word[j][i];
            }
        }
    }

    return 0;
}