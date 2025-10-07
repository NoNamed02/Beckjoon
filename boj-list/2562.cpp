#include <iostream>
#include <vector>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int *max, max_order;
    std::vector<int> list(9);
    for (int i = 0; i < 9; i++)
    {
        std::cin >> list[i];

        if (i == 0)
        {
            max = &list[i];
            max_order = i + 1;
        }
        
        if (list[i] > *max)
        {
            max = &list[i];
            max_order = i + 1;
        }
    }
    std::cout << *max << "\n" << max_order << "\n";
    
    return 0;
}
/*
. 포인터 불필요

max를 int*로 둘 이유가 없습니다.
단순 값 비교이므로 int 값 변수로 충분합니다.
포인터 역참조는 오히려 불필요한 간접 접근입니다.

→ 개선:

int max, max_order;


그리고 내부에서는

if (list[i] > max)


로 비교.

2. std::vector 불필요

입력 개수가 고정(9)이므로 std::array<int, 9> 또는 int list[9]이 더 적절합니다.
std::vector는 동적 메모리 할당이 발생합니다.
백준 2562번 같은 문제라면 array 또는 C배열이 가장 효율적입니다.

3. std::size(list) 활용 가능

매직 넘버 9 대신 std::size(list)를 쓰면 유지보수성이 높습니다.

4. 출력 개선

\n 대신 '\n' 사용이 미세하게 빠릅니다. (문자 리터럴은 문자열보다 변환 비용이 없음)

정리된 개선 포인트

포인터 대신 값 변수 사용

vector → array 또는 C배열로 변경

상수 9 제거

출력 효율 미세 개선
*/