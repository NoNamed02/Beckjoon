#include <iostream>

int main()
{
    int total_money = 0, category_count = 0, total_money_check = 0;
    std::cin >> total_money;
    std::cin >> category_count;

    for (int i = 0; i < category_count; i++)
    {
        int product_value = 0, product_count = 0;
        std::cin >> product_value;
        std::cin >> product_count;
        
        total_money_check += product_value * product_count;
    }
    if (total_money == total_money_check)
    {
        std::cout << "Yes" << "\n";
    }
    else
    {
        std::cout << "No" << "\n";
    }
    return 0;
}

/*
논리적으로 완전하고 문제 요구사항(백준 25304 “영수증”) 기준으로 정답입니다.
다만 약간의 개선 여지는 있습니다.

입력 가독성 개선
두 변수 입력은 한 줄로 받는 것이 간결합니다.

std::cin >> product_value >> product_count;


불필요한 초기화 제거 가능
product_value와 product_count는 바로 입력으로 덮어쓰기 되므로 = 0은 생략 가능입니다.

출력 단순화
문자열 리터럴에 굳이 "\n"과 std::endl을 혼용할 필요는 없습니다. "\n"이 최적입니다.

정리된 코드:

#include <iostream>

int main()
{
    int total_money, category_count;
    std::cin >> total_money >> category_count;

    int total_money_check = 0;
    for (int i = 0; i < category_count; i++)
    {
        int product_value, product_count;
        std::cin >> product_value >> product_count;
        total_money_check += product_value * product_count;
    }

    std::cout << (total_money == total_money_check ? "Yes\n" : "No\n");
    return 0;
}


기능 동일하지만 더 간결하고 안전한 형태입니다.
*/