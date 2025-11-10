#include <iostream>
#include <vector>

int main()
{
    int iteration;
    int count = 0;
    std::cin >> iteration;
    std::string word;

    for (int i = 0; i < iteration; i++)
    {
        bool alphabet[26] = {false};
        std::vector<char> checkList;
        std::cin >> word;

        alphabet[word[0] - 97] = true;
        for (int j = 0; j < word.size(); j++)
        {
            if (j > 0 && word[j] != word[j - 1])
            {
                if (alphabet[word[j] - 97] == true)
                {
                    break;
                }
                else
                {
                    alphabet[word[j] - 97] = true;
                }
            }
            if (j == word.size() - 1)
            {
                count++;
            }
        }
    }
    std::cout << count << "\n";
    return 0;
}