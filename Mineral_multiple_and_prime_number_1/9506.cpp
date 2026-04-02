#include <iostream>
#include <list>

int main()
{
    int input;
    while(true)
    {
        std::cin >> input;
        if (input == -1)
            break;
        std::list<int> prime;

        for (int i = 1; i < input; i++)
        {
            if (input % i == 0)
            {
                prime.push_back(i);
            }
        }
        int sum = 0;
        for (int i : prime)
        {
            sum += i;
        }
        if (sum == input)
        {
            bool first = true;
            std::cout << input << " = ";
            for (int i : prime)
            {
                if (!first)
                {
                    std::cout << " + ";
                }
                std::cout << i;
                first = false;
            }
            std::cout << "\n";
        }
        else
        {
            std::cout << input << " is NOT perfect." << "\n";
        }
    }
}