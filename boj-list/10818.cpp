#include <iostream>
#include <vector>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int num_length, min, max;
    std::cin >> num_length;

    std::vector<int> list;
    list.reserve(num_length);

    for (int i = 0; i < num_length; i++)
    {
        int num;
        std::cin >> num;
        list.push_back(num);
    }
    min = max = list[0];
    for (int i : list)
    {
        if (i < min) min = i;
        if (i > max) max = i;
    }
    std::cout << min << " " << max << "\n";

    return 0;
}

/*
벡터 불필요
min, max를 입력 중에 바로 갱신하면 벡터 자체가 필요 없습니다.
백준 10818번처럼 단순 최소·최대 문제는 전체 저장 없이도 해결 가능합니다.
(메모리 절약)

변수 초기화 방식 개선
min과 max는 첫 입력값으로 초기화하면 더 안전합니다.
(현재 코드에서는 벡터가 비지 않으니 문제 없지만, 논리적으로 명시적임)

타입 명시
for (int i : list) 대신 for (const int& i : list)로 불필요한 복사 방지.
큰 입력에서도 미세하게 효율적입니다.

출력 포맷 일관성
백준은 '\n' 사용 권장. 현재 이미 그 방식이므로 적절합니다.
*/