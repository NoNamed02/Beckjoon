// #include <iostream>
// #include <vector>
// #include <algorithm>

// int main()
// {
//     std::ios::sync_with_stdio(false);
//     std::cin.tie(nullptr);

//     int list_length, find_small_num, find_small_num_count = 0;
//     std::cin >> list_length >> find_small_num;

//     std::vector<int> find_num_list = {};

//     for (int i = 0; i < list_length; i++)
//     {
//         int num;
//         std::cin >> num;
//         if (num < find_small_num)
//             find_num_list.push_back(num);
//     }
//     for (int i : find_num_list)
//     {
//         std::cout << i << " ";
//     }
//     return 0;
// }

// 기존 메모리 2156 수정 후 2156
#include <iostream>
#include <vector>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int list_length, find_small_num;
    std::cin >> list_length >> find_small_num;

    std::vector<int> find_num_list;

    for (int i = 0; i < list_length; i++)
    {
        int num;
        std::cin >> num;
        if (num < find_small_num)
            find_num_list.push_back(num);
    }
    for (int i : find_num_list)
    {
        std::cout << i << " ";
    }
    return 0;
}

/*
불필요한 변수 제거
find_small_num_count는 사용되지 않으므로 삭제.

벡터 초기화 단순화
std::vector<int> find_num_list = {}; → std::vector<int> find_num_list;

reserve로 메모리 재할당 최소화
입력 개수를 알고 있으므로 미리 용량 예약.

불필요한 헤더 제거
<algorithm>은 사용되지 않음.
*/