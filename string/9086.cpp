#include <iostream>
#include <string>
#include <vector>

int main()
{
    int test_case_num;
    std::cin >> test_case_num;

    std::vector<std::string> test_case(test_case_num);
    for (int i = 0; i < test_case_num; i++)
    {
        std::cin >> test_case[i];
        std::cout << test_case[i][0] << test_case[i][test_case[i].size() - 1] << "\n";
    }
    return 0;
}

// front() / back() 사용
// 인덱스로 접근보다 의도를 명확히 표현합니다.

// std::cout << test_case[i].front() << test_case[i].back() << "\n";