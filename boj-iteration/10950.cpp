#include <iostream>
#include <vector>

int main()
{
    int iter, int_a, int_b;

    std::cin >> iter;

    std::vector<int> results(iter);
    for(int i = 0; i < iter; i++)
    {
        std::cin >> int_a >> int_b;
        results[i] = int_a + int_b;
    }
    for(int i = 0; i < iter; i++)
    {
        std::cout << results[i] << "\n";
    }
    return 0;
}