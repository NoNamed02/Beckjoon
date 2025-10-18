#include <iostream>
#include <string>

// ascii 65 = A 90 = Z

int get_dial_time(std::string word);

int main()
{
    std::string word;
    std::cin >> word;
    
    std::cout << get_dial_time(word) << "\n";

    return 0;
}

int get_dial_time(std::string word)
{
    int time = 0;
    for (int i = 0; i < word.size(); i++)
    {
        int word_ascii_num = static_cast<int>(word[i]);
        int word_area;
        if (word_ascii_num >= 'A' && word_ascii_num <= 'C')
        {
            word_area = 1;
        }
        else if (word_ascii_num >= 'D' && word_ascii_num <= 'F')
        {
            word_area = 2;
        }
        else if (word_ascii_num >= 'G' && word_ascii_num <= 'I')
        {
            word_area = 3;
        }
        else if (word_ascii_num >= 'J' && word_ascii_num <= 'L')
        {
            word_area = 4;
        }
        else if (word_ascii_num >= 'M' && word_ascii_num <= 'O')
        {
            word_area = 5;
        }
        else if (word_ascii_num >= 'P' && word_ascii_num <= 'S')
        {
            word_area = 6;
        }
        else if (word_ascii_num >= 'T' && word_ascii_num <= 'V')
        {
            word_area = 7;
        }
        else
        {
            word_area = 8;
        }
        
        
        time += 2 + word_area;
    }
    return time;
}