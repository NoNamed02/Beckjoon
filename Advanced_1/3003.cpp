#include <iostream>

int main()
{
    int piece_input[6];
    int piece_count_official[6] = {1, 1, 2, 2, 2, 8};

    std::cin >> piece_input[0] >> piece_input[1] >> piece_input[2] >> piece_input[3] >> piece_input[4] >> piece_input[5];
    for(int i = 0; i < sizeof(piece_input) / sizeof(int); i++)
        std::cout << piece_count_official[i] - piece_input[i] << " ";
    return 0;
}