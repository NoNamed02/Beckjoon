#include <iostream>
#include <cmath>

int main()
{
    int B;
    std::string word; 
    std::cin >> word >> B;

    int result = 0;
    for (int i = 0; i < word.size(); i++)
    {
        int num;
        if (word[i] <= 57 && word[i] >= 48)
        {
            num = word[i] - 48;
        }
        else 
        {
            num = word[i] - 55;
        }
        result += num * std::pow(B, word.size() - i - 1);
    }
    std::cout << result << "\n";

    return 0;
}