#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int star_layer_count;
    std::cin >> star_layer_count;

    for (int i = 1; i <= star_layer_count; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << "*";
        }
        std::cout << "\n";
    }
    return 0;
}
/*
성능이나 논리상 문제는 없습니다.
다만 약간의 개선 여지는 있습니다.

출력 효율 개선
std::cout 대신 std::string(i, '*')를 사용하면 루프를 단축할 수 있습니다.

for (int i = 1; i <= star_layer_count; ++i)
    std::cout << std::string(i, '*') << '\n';


입력 검증
입력값이 0 이하일 경우 처리하지 않도록 하는 조건이 있으면 안전합니다.

if (star_layer_count <= 0) return 0;


출력 버퍼링 유지 목적 명시
std::ios::sync_with_stdio(false);와 std::cin.tie(nullptr);는 필요하지만,
단순 콘솔 입출력에서는 성능 차이가 미미합니다. 유지하더라도 괜찮습니다.

정리하면 다음 형태가 가장 간결하고 효율적입니다:

#include <iostream>
#include <string>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    if (n <= 0) return 0;

    for (int i = 1; i <= n; ++i)
        std::cout << std::string(i, '*') << '\n';
}

*/