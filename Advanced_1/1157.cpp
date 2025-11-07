#include <iostream>

int main()
{
    std::string word;
    std::cin >> word;
    
    int spellingList[26];

    int max = 0, max_spelling = 0;
    int duplicationCheck = 2;
    for (int i = 0; i < 26; i++)
    {
        spellingList[i] = 0;
    }

    for (int i = 0; i < word.size(); i++)
    {
        spellingList[int(std::tolower(word[i])) - 97]++;
    }
    max = spellingList[0];
    for (int i = 0; i < 26; i++)
    {
        if (max < spellingList[i])
        {
            max_spelling = i;
            max = spellingList[i];
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if (max == spellingList[i])
        {
            duplicationCheck--;
        }
    }
    if (duplicationCheck == 1)
    {
        std::cout << char(max_spelling + 65) << "\n";
    }
    else
    {
        std::cout << "?" << "\n";
    }
    
    return 0;
}