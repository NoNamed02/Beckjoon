#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int basket_count, basket_change_count;
    int basket[100];

    int change_basket_a, change_basket_b;

    std::cin >> basket_count >> basket_change_count;

    for (int i = 0; i < basket_count; i++)
    {
        basket[i] = i + 1;
    }

    for (int i = 0; i < basket_change_count; i++)
    {
        std::cin >> change_basket_a >> change_basket_b;

        int temp = basket[change_basket_a - 1];
        basket[change_basket_a - 1] = basket[change_basket_b - 1];
        basket[change_basket_b - 1] = temp;
    }

    for (int i = 0; i < basket_count; i++)
        std::cout << basket[i] << " ";
    std::cout << "\n";

    return 0;
}

/*
std::swap 사용
수동 교환 대신 표준 라이브러리 함수 사용이 명확합니다.

std::swap(basket[change_basket_a - 1], basket[change_basket_b - 1]);


배열 크기 가변화
문제에서 basket_count가 100 이하로 제한되어 있지 않다면 std::vector<int>로 바꾸는 것이 안전합니다.

std::vector<int> basket(basket_count);


입출력 가독성
"\n" 대신 '\n'을 쓰면 미세하게 효율적입니다.

std::cout << basket[i] << ' ';


의미 있는 변수명
change_basket_a, change_basket_b는 간결하게 a, b로 바꿔도 문맥상 충분히 명확합니다.
*/