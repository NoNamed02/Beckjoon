#include <iostream>
#include <vector>

int main() {
    int testCase = 0;
    std::vector<int> cent;
    
    std::cin >> testCase;
    for (int i = 0; i < testCase; i++)
    {
        int tempValue = 0;
        std::cin >> tempValue;
        cent.push_back(tempValue);
    }
    // check
    for (int i = 0; i < testCase; i++)
    {
        int Quarter = cent[i] / 25;
        cent[i] %= 25;
        
        int Dime = cent[i] / 10;
        cent[i] %= 10;
        
        int Nickel = cent[i] / 5;
        cent[i] %= 5;
        
        int Penny = cent[i];
        
        
        std::cout << Quarter << " " << Dime << " " << Nickel << " " << Penny << "\n";
    }
    
    //(Quarter, $0.25)의 개수, 다임(Dime, $0.10)의 개수, 니켈(Nickel, $0.05)의 개수, 페니(Penny, $0.01)의 개수를 구하는 프로그램
    return 0;
}