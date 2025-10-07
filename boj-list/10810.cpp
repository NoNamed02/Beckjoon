#include <iostream>
#include <vector>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int num_of_basket, try_count;
    std::cin >> num_of_basket >> try_count;

    std::vector<int> basket(num_of_basket, 0);

    for (int i = 0; i < try_count; i++)
    {
        int range_low, range_high, ball_num;
        std::cin >> range_low >> range_high >> ball_num;
        range_low--;
        range_high--;

        for (int i = range_low; i <= range_high; i++)
        {
            basket[i] = ball_num;
        }
    }
    for (int i : basket)
    {
        std::cout << i << " ";
    }
    std::cout << "\n";
    return 0;
}

/*
1. 불필요한 인덱스 감소 제거

입력값이 1-기반이므로 range_low--, range_high--를 하는 대신
루프에서 바로 보정할 수 있습니다.
가독성을 위해 변수를 건드리지 않는 편이 낫습니다.

for (int j = range_low - 1; j < range_high; j++)
    basket[j] = ball_num;

2. 내부 루프 변수 이름 중복

바깥 for (int i = 0; i < try_count; i++) 안에서
또 for (int i = range_low; …)를 사용 중입니다.
이건 섀도잉(shadowing) 이며 혼동 가능성이 있습니다.
→ 내부 루프는 for (int j = range_low; j <= range_high; j++)로 바꾸는 것이 좋습니다.

3. 출력 시 마지막 공백 제거 가능

문제에서는 공백 허용이지만, 미세하게 깔끔하게 만들고 싶다면:

for (int i = 0; i < num_of_basket; i++) {
    std::cout << basket[i];
    if (i < num_of_basket - 1) std::cout << ' ';
}
std::cout << '\n';

4. 입출력 속도 미세 최적화

이미 ios::sync_with_stdio(false)와 cin.tie(nullptr) 사용 중이라 충분합니다.
추가 최적화는 불필요합니다.

정리된 개선 포인트

변수 이름 충돌 제거 (i → j)

인덱스 보정 방식 명확화

출력 마지막 공백 제거 (선택 사항)

개선 후 형태 예시:

#include <iostream>
#include <vector>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int num_of_basket, try_count;
    std::cin >> num_of_basket >> try_count;

    std::vector<int> basket(num_of_basket, 0);

    for (int i = 0; i < try_count; i++) {
        int range_low, range_high, ball_num;
        std::cin >> range_low >> range_high >> ball_num;
        for (int j = range_low - 1; j < range_high; j++)
            basket[j] = ball_num;
    }

    for (int i = 0; i < num_of_basket; i++) {
        std::cout << basket[i];
        if (i < num_of_basket - 1) std::cout << ' ';
    }
    std::cout << '\n';
}


로직 동일, 가독성과 안정성 향상.
*/