#include <iostream>
#include <string>

int main()
{
    std::string input;
    std::cin >> input;

    int alphabets[26];
    for (int i = 0; i < sizeof(alphabets) / sizeof(int); i++)
    {
        alphabets[i] = -1;
    }
    
    for (int i = 0; i < input.size(); i++)
    {
        int check_char_num = static_cast<int>(input[i]);
        for (int j = 0; j < sizeof(alphabets) / sizeof(int); j++)
        {
            if (check_char_num == j+97 && alphabets[j] == -1)
            {
                alphabets[j] = i;
            }
        }
    }

    for (int i = 0; i < sizeof(alphabets) / sizeof(int); i++)
    {
        std::cout << alphabets[i] << " ";
    }

    std::cout << "\n";

    return 0;
}

/*
내부 루프 제거
for (int j...) 이중 루프는 불필요합니다. input[i] - 'a'로 바로 인덱스 접근이 가능합니다.

sizeof 대신 상수 26 사용
알파벳 개수는 고정이므로 명시적으로 26을 사용하는 것이 가독성과 의도를 명확히 합니다.

static_cast<int> 불필요
char를 'a'로 빼면 자동으로 정수형 변환이 됩니다.

코드 단순화
루프, 변수, 출력 모두 간결하게 표현할 수 있습니다.

개선된 코드:

#include <iostream>
#include <string>

int main()
{
    std::string input;
    std::cin >> input;

    int alphabets[26];
    for (int i = 0; i < 26; i++)
        alphabets[i] = -1;

    for (int i = 0; i < input.size(); i++)
    {
        int idx = input[i] - 'a';
        if (alphabets[idx] == -1)
            alphabets[idx] = i;
    }

    for (int i = 0; i < 26; i++)
        std::cout << alphabets[i] << " ";

    std::cout << "\n";
    return 0;
}


이 버전은 시간 복잡도 O(n)으로 단순하고, 불필요한 연산이 없습니다.
*/