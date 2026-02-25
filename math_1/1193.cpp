#include <iostream>

int main()
{
    int input = 0;
    std::cin >> input;
    int x = 1;
    int y = 1;
    bool xLayer = true;
    for (int i = 1; i < input; i++)
    {
        if (x == 1 && xLayer == true)
        {
            xLayer = false;
            y++;
        }
        else if (y == 1 && xLayer == false)
        {
            xLayer = true;
            x++;
        }
        else
        {
            if (xLayer)
            {
                x--;
                y++;
            }
            else
            {
                x++;
                y--;
            }
        }
    }
    std::cout << x << "/" << y << "\n";
}

/*
1/1 → 1/2 → 2/1 → 3/1 → 2/2 → 1/3 - 1/4 - 2/3 - 3/2 - 4/1
*/