#include <iostream>

int main()
{
    //int matrix[9][9] = {0};
    int temp;
    int max = 0, n, m;
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            //std::cin >> matrix[i][j];
            std::cin >> temp;
            if (max <= temp)
            {
                max = temp;
                n = i + 1;
                m = j + 1;
            }
        }
    }
    std::cout << max << "\n" << n << " " << m;

    return 0;
}