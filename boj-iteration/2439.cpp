#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int star_layer_count;
    std::cin >> star_layer_count;

    for (int current_layer = 1; current_layer <= star_layer_count; current_layer++)
    {
        for (int node = 1; node <= star_layer_count; node++)
        {
            if (star_layer_count - node < current_layer)
            {
                std::cout << "*";
            }
            else
            {
                std::cout << " ";
            }
        }
        std::cout << "\n";
    }

    return 0;
}

/*
1. 출력 효율 개선

현재는 std::cout을 매 칸마다 호출합니다.
이 방식은 I/O 호출이 많아 비효율적입니다.
한 줄을 문자열로 조립한 뒤 한 번만 출력하는 게 낫습니다.

for (int current_layer = 1; current_layer <= star_layer_count; ++current_layer) {
    int space_count = star_layer_count - current_layer;
    std::cout << std::string(space_count, ' ')
              << std::string(current_layer, '*')
              << '\n';
}


이렇게 하면 내부 루프와 조건문이 없어지고 훨씬 간결하며 빠릅니다.

2. 입력 검증

입력값이 0 이하일 경우 출력을 생략하도록 조건을 두면 안전합니다.

if (star_layer_count <= 0) return 0;

3. 변수명 명확화

current_layer와 star_layer_count는 의미가 명확하지만
node는 “열”을 의미하므로 col이 더 직관적입니다.

4. 불필요한 동기화 해제 검토

std::ios::sync_with_stdio(false);와 std::cin.tie(nullptr);는
입출력 성능을 약간 향상시키지만, 이 정도 코드에서는 체감 효과가 거의 없습니다.
남겨도 문제 없지만 학습용 예제라면 생략해도 됩니다.

개선된 전체 코드
#include <iostream>
#include <string>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    if (n <= 0) return 0;

    for (int i = 1; i <= n; ++i)
        std::cout << std::string(n - i, ' ')
                  << std::string(i, '*')
                  << '\n';
}


구조 단순화, 성능 개선, 가독성 향상 — 세 측면 모두 개선됩니다.
*/