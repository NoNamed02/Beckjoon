#include <iostream>
#include <string>

int main()
{
    int iteration_count;
    std::cin >> iteration_count;


    for (int i = 0; i < iteration_count; i++)
    {
        std::string word;
        int iter;

        std::cin >> iter >> word;
        for (int j = 0; j < word.size(); j++)
        {
            for (int k = 0; k < iter; k++)
            {
                std::cout << word[j];
            }
        }
        std::cout << "\n";
    }
    return 0;
}

/*
변수명 명확화

iteration_count → test_case_count

iter → repeat_count
의미를 더 명확히 표현합니다.

입출력 최적화

std::ios::sync_with_stdio(false);

std::cin.tie(nullptr);
C 표준 입출력과의 동기화를 끊어 속도를 높입니다.

출력 버퍼링 개선

std::string result;를 이용해 문자열을 미리 조립 후 한 번에 출력하면 std::cout 호출 횟수가 줄어듭니다.
*/