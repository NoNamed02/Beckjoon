#include <iostream>
#include <string>

int main()
{
    char input;
    std::cin >> input;
    // int ascii = input;
    int ascii = static_cast<int>(input);
    std::cout << ascii << "\n";
    return 0;
}
/*
명시적 초기화
char input{}; 로 초기화하면 의도 명확성이 올라갑니다.
*/