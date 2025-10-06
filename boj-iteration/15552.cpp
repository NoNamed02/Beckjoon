#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int test_case_count;
    std::cin >> test_case_count;

    int int_a, int_b;
    for (int i = 0; i < test_case_count; i++)
    {
        std::cin >> int_a >> int_b;
        std::cout << int_a + int_b << "\n";
    }
    return 0;
}