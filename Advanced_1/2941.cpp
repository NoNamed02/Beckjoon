#include <iostream>

int main()
{
    std::string word;
    std::cin >> word;
    int checkCount = 0;

    std::string check = "";
    std::string check3 = "";
    
    for (int i = 0; i < word.size(); i++)
    {
        check = "";
        check3 = "";
        if (i <= word.size() - 2)
        {
            check = word.substr(i, 2);
        }
        if (i <= word.size() - 3)
        {
            check3 = word.substr(i, 3);
        }
        
        if (check == "c=" || check == "c-" || check == "d-" || check == "lj" || check == "nj" || check == "s=" || check == "z=")
        {
            checkCount++;
            i++;
        }
        else if (check3 == "dz=")
        {
            checkCount++;
            i += 2;
        }
        else
        {
            checkCount++;
        }
    }

    std::cout << checkCount << "\n";

    return 0;
}