#include <iostream>

int main()
{
    std::string className;
    float score;
    std::string credit;

    float AVG = 0.0f;
    float scoreSum = 0.0f;

    for (int i = 0; i < 20; i++)
    {
        std::cin >> className >> score >> credit;

        if (credit == "P")
            continue;

        float creditScore = 0;
        if (credit == "A+")
            creditScore = 4.5f;
        else if (credit == "A0")
            creditScore = 4.0f;
        else if (credit == "B+")
            creditScore = 3.5f;
        else if (credit == "B0")
            creditScore = 3.0f;
        else if (credit == "C+")
            creditScore = 2.5f;
        else if (credit == "C0")
            creditScore = 2.0f;
        else if (credit == "D+")
            creditScore = 1.5f;
        else if (credit == "D0")
            creditScore = 1.0f;
        else
            creditScore = 0.0f;
            
        AVG += score * creditScore;
        scoreSum += score;
    }
    AVG /= scoreSum;

    std::cout << AVG << "\n";

    return 0;
}

// 로직은 맞지만 구조가 비효율적입니다.
// 가독성과 유지보수를 개선하려면 등급 점수를 매핑 테이블로 관리하면 됩니다.

// 아래처럼 std::map을 이용하면 조건문이 사라집니다:

// #include <iostream>
// #include <string>
// #include <map>

// int main()
// {
//     std::map<std::string, float> gradeMap = {
//         {"A+", 4.5}, {"A0", 4.0},
//         {"B+", 3.5}, {"B0", 3.0},
//         {"C+", 2.5}, {"C0", 2.0},
//         {"D+", 1.5}, {"D0", 1.0},
//         {"F", 0.0}
//     };

//     std::string className, credit;
//     float score;
//     double sum = 0.0, total = 0.0;

//     for (int i = 0; i < 20; i++)
//     {
//         std::cin >> className >> score >> credit;
//         if (credit == "P") continue;
//         sum += score * gradeMap[credit];
//         total += score;
//     }

//     std::cout << sum / total << "\n";
//     return 0;
// }