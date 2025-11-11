#include <iostream>
#include <vector>

int main()
{
    int n, m;
    std::cin >> n >> m;
    std::vector<std::vector<int>> matrix(n*2, std::vector<int>(m, 0));

    for (int i = 0; i < n*2; i ++)
    {
        for (int j = 0; j < m; j++)
        {
            std::cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < n; i ++)
    {
        for (int j = 0; j < m; j++)
        {
            std::cout << matrix[i][j] + matrix[i+n][j] << " ";
        }
        std::cout << "\n";
    }
    return 0;
}