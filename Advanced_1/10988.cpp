#include <iostream>

int main()
{
    std::string word;
    std::cin >> word;
    
    int check = 1;
    for (int i = 0; i < word.size() / 2; i++)
    {
        if (word[i] != word[word.size() - 1 - i])
        {
            check = 0;
        }
    }
    std::cout << check << "\n";
    return 0;
}