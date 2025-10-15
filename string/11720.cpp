#include <iostream>
#include <string>

int main()
{
    int num_count;
    std::string input;
    std::cin >> num_count >> input;

    int sum = 0;
    
    for (int i = 0; i < num_count; i++)
    {
        sum += input[i] - '0';
    }

    std::cout << sum << "\n";
    return 0;
}

/*
문자 검증
input에 숫자가 아닌 문자가 들어올 가능성이 있다면 std::isdigit으로 필터링하십시오.

반복 조건 단순화
input.size()를 직접 사용하는 편이 더 안전합니다.
입력 길이와 num_count가 불일치할 경우 문제 방지.
*/