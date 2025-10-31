#include <iostream>

int main()
{
    int num;
    std::cin >> num;

    int star_count = 1;
    
    for (int i = 0; i < num * 2 - 1; i++)
    {
        if (i < num)
        {
            for (int j = 0; j < num - star_count; j++)
            {
                std::cout << " ";
            }
            for (int j = 0; j < star_count; j++)
            {
                std::cout << "*";
            }
            for (int j = 0; j < star_count - 1; j++)
            {
                std::cout << "*";
            }
            star_count++;
        }
        else
        {
            if (star_count > num)
                star_count = num - 1;
            for (int j = 0; j < num - star_count; j++)
            {
                std::cout << " ";
            }
            for (int j = 0; j < star_count; j++)
            {
                std::cout << "*";
            }
            for (int j = 0; j < star_count - 1; j++)
            {
                std::cout << "*";
            }
            star_count--;
        }
        std::cout << "\n";
    }
    return 0;
}