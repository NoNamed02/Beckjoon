#include <iostream>

int main()
{
    int area[100][100] = {0};

    int shapeCount;
    std::cin >> shapeCount;
    for (int i = 0; i < shapeCount; i++)
    {
        int n, m;
        std::cin >> n >> m;
        n--;
        m--;
        for (int j = n; j < n+10; j++)
        {
            for (int k = m; k < m+10; k++)
            {
                area[j][k] = 1;
            }
        }
    }

    int result = 0;
    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            if (area[i][j] == 1)
                result++;
        }
    }

    std::cout << result << "\n";

    return 0;
}