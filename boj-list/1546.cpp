#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int subject_count, max_subject_count = 1000;
    double subjects[max_subject_count], max_score, avg = 0;

    std::cin >> subject_count;

    for (int i = 0; i < subject_count; i++)
    {
        std::cin >> subjects[i];
    }
    max_score = subjects[0];
    for (int i = 1; i < subject_count; i++)
    {
        if (subjects[i] > max_score) max_score = subjects[i];
    }
    for (int i = 0; i < subject_count; i++)
    {
        subjects[i] = (subjects[i] / max_score) * 100;
        avg += subjects[i];
    }
    avg /= (double)subject_count;

    std::cout << avg << '\n';
    return 0;
}

/*
배열 상수는 상수 표현으로 분리

constexpr int MAX_SUBJECTS = 1000;
double subjects[MAX_SUBJECTS];


불필요한 형변환 제거
avg와 subject_count가 모두 double 연산에 포함되므로 (double) 캐스팅 불필요.

avg /= subject_count;


max_subject_count 변수 제거
고정 상수면 변수로 둘 이유가 없다.

초기 최대값을 구하는 루프 간소화

double max_score = 0;
for (int i = 0; i < subject_count; i++) {
    std::cin >> subjects[i];
    if (subjects[i] > max_score) max_score = subjects[i];
}


입력과 동시에 최댓값 계산 가능.

출력 형식 일관성 유지
평균이 항상 실수이므로 std::fixed와 std::setprecision(6) 같은 명시적 표현이 좋다.

#include <iomanip>
std::cout << std::fixed << std::setprecision(6) << avg << '\n';
*/