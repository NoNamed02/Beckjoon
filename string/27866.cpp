#include <iostream>
#include <string>

int main()
{
    std::string word;
    int word_num;
    std::cin >> word >> word_num;
    
    std::cout << word[--word_num] << "\n";

    return 0;
}