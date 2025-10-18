#include <iostream>
#include <string>

int reverse_string_to_int(std::string str);

int main()
{
    std::string value_a, value_b;
    std::cin >> value_a >> value_b;
    
    if (reverse_string_to_int(value_a) > reverse_string_to_int(value_b))
    {
        std::cout << reverse_string_to_int(value_a) << "\n";
    }
    else
    {
        std::cout << reverse_string_to_int(value_b) << "\n";
    }

    return 0;
}

int reverse_string_to_int(std::string str)
{
    std::string temp_str = "";
    for (int i = str.size() - 1; i > -1; i--)
    {
        temp_str += str[i];
    }
    int value = std::stoi(temp_str);
    return value;
}

/*
1. reverse_string_to_int를 반복 호출

main에서 같은 문자열에 대해 함수를 여러 번 호출하고 있음 → 비효율적.

개선: 한 번만 호출하고 변수에 저장해서 재사용.

2. 문자열 뒤집기 로직 개선

for문으로 직접 뒤집는 것보다 **std::reverse**를 사용하는 것이 더 직관적이고 빠름.

3. 음수 입력 처리 고려 필요(선택 사항)

현재 코드는 음수가 입력될 경우 에러가 발생할 가능성이 있음.

4. 코드 가독성을 위한 구조 정돈

함수명은 명확하지만, 문자열 뒤집기와 정수 변환이 한 함수에 섞여 있음.

기능을 분리하면 재사용성과 테스트가 쉬워짐.
*/