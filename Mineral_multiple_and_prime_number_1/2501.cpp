#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int N, K;
    std::cin >> N >> K;
    std::vector<int> Values;

    for (int i = 1; i * i <= N; i++)
    {
        if (N % i == 0)
        {
            Values.push_back(i);
            if (i * i != N)
            {
                Values.push_back(N/i);
            }
        }
    }
    std::sort(Values.begin(), Values.end());
    if (Values.empty())
    {
        std::cout << "0" << "\n";
        return 0;
    }
    std::cout << Values[K - 1] << "\n";
    return 0;
}