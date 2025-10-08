#include <iostream>
#include <vector>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    constexpr int input_count = 10;
    constexpr int divide_value = 42;

    std::vector<int> mod_list;
    int result = 0;

    for (int i = 0; i < input_count; i++)
    {
        int mod;
        int num;
        std::cin >> num;
        mod = num % divide_value;
        // if (mod_list.empty())
        // {
        //     mod_list.push_back(mod);
        //     result++;
        //     continue;
        // }
        bool check = false;
        for (int j = 0; j < (int)mod_list.size(); j++)
        {
            if (mod == mod_list[j])
            {
                check = true;
                break;
            }
        }
        if (check == false)
        {
            mod_list.push_back(mod);
            result++;
        }
    }

    std::cout << result << "\n";

    return 0;
}

/*
1. std::set 사용 (중복 자동 제거)

std::set은 자동으로 중복을 허용하지 않으므로,
중복 검사 루프와 bool check 변수를 모두 없앨 수 있습니다.

#include <iostream>
#include <set>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    constexpr int input_count = 10;
    constexpr int divide_value = 42;

    std::set<int> mods;

    for (int i = 0; i < input_count; i++)
    {
        int num;
        std::cin >> num;
        mods.insert(num % divide_value);
    }

    std::cout << mods.size() << '\n';
    return 0;
}


→ 코드 길이 1/3, 메모리 안전, 중복 제거 자동.

2. int mod; 선언 위치 이동

mod는 for 안에서만 쓰이므로, 바로 선언해도 됩니다.

int num;
std::cin >> num;
int mod = num % divide_value;

3. 불필요 주석 제거

// if (mod_list.empty()) 같은 주석은 유지 이유가 없습니다. 삭제.
*/