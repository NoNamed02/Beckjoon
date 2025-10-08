#include <iostream>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    bool student_list[30];
    std::fill(student_list, student_list + 30, false);

    int student_num;
    
    for (int i = 0; i < 28; i++)
    {
        std::cin >> student_num;

        student_list[student_num - 1] = true;
    }
    for (int i = 0; i < int(sizeof(student_list) / sizeof(student_list[0])); i++)
    {
        if (!student_list[i])
        {
            std::cout << i + 1 << " ";
        }
    }
    std::cout << "\n";

    return 0;
}

/*
1. 명시적 초기화

std::fill 대신 선언 시 초기화를 바로 하면 더 간결합니다.

bool student_list[30] = {false};


→ 모든 값이 false로 자동 초기화됩니다.

2. 상수 정의

매직 넘버(30, 28)는 상수로 정의하면 의미가 분명해집니다.

constexpr int total_students = 30;
constexpr int submitted_students = 28;


그다음 반복문에 사용:

for (int i = 0; i < submitted_students; i++)

3. 출력 형식 일관성

현재 공백으로 구분된 출력은 맞지만, 깔끔히 처리하려면 조건문 대신 '\n' 처리도 명시적으로:

std::cout << "\n";


(이미 있으므로 유지)

4. 입력 검증(선택적)

경계 밖 번호(예: 0, 31)를 방지하려면 체크를 추가할 수 있습니다.

if (student_num < 1 || student_num > total_students) continue;
*/