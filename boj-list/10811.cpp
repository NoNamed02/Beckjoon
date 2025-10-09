#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);    

    int basket[100];
    int basket_count, chage_count;
    std::cin >> basket_count >> chage_count;

    for (int i = 0; i < basket_count; i++)
    {
        basket[i] = i + 1;
    }
    for (int i = 0; i < chage_count; i++)
    {
        int chage_range_first, change_range_end;
        std::cin >> chage_range_first >> change_range_end;

        chage_range_first--;
        change_range_end--;
        
        // int temp_value = chage_range_first;
        for (int j = change_range_end; j > chage_range_first; j--)
        {
            int temp = basket[chage_range_first];
            basket[chage_range_first] = basket[j];
            basket[j] = temp;
            chage_range_first++;
        }
    }
    for (int i = 0; i < basket_count; i++)
    {
        std::cout << basket[i] << " ";
    }
    std::cout << "\n";
    return 0;
}

/*
변수명 오타 수정:
chage_count, chage_range_first → change_count, change_range_first

인덱스용 임시 변수 사용:
루프 안에서 change_range_first++ 대신

int left = change_range_first - 1;
int right = change_range_end - 1;
while (left < right) {
    std::swap(basket[left], basket[right]);
    left++;
    right--;
}


매직 넘버 제거:

constexpr int MAX_BASKETS = 100;
int basket[MAX_BASKETS];


입력 검증 추가:

if (change_range_first < 1 || change_range_end > basket_count || change_range_first > change_range_end)
    continue;


출력에서 '\n' 사용.
*/