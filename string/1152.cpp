#include <iostream>
#include <string>

int main()
{
    std::string word;
    std::getline(std::cin, word);
    
    int count = 0;
    bool is_word = false;

    for (int i = 0; i < word.size(); i++)
    {
        if (word[i] != 32 && is_word == false)
        {
            is_word = true;
            count++;
        }
        else if (word[i] == 32)
        {
            is_word = false;
        }
    }

    std::cout << count << "\n";

    return 0;
}