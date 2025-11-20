#include <iostream>

int main()
{   //65 = A
    int num, B;
    std::cin >> num >> B;
    std::string word;
    while (num > 0)
    {
        int temp = num % B;
        if (temp < 10)
        {
            word.push_back(temp + '0');
        }
        else
        {
            word.push_back(char(temp-10 + 'A'));
        }
        num /= B;
    }
    for (int i = word.size(); i > 0; i--)
    {
        std::cout << word[i - 1];
    }
    return 0;
}