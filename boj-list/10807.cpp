#include <iostream>
#include <vector>

int main(void)
{
    int iteration_count;
    std::cin >> iteration_count;
    std::vector<int> list(iteration_count);

    for (int i = 0; i < iteration_count; i++)
    {
        std::cin >> list[i];
    }
    int find_num, find_count = 0;
    std::cin >> find_num;
    for (int i = 0; i < iteration_count; i++)
    {
        if (list[i] == find_num)
            find_count++;
    }
    std::cout << find_count << "\n";

    return 0;
}

/*
범위 기반 for문 사용 (가독성 향상)

for (int n : list)
    if (n == find_num) find_count++;


표준 알고리즘 사용 (간결화)

#include <algorithm>
find_count = std::count(list.begin(), list.end(), find_num);
*/