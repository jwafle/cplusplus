#include <iostream>

int main()
{
    int x{};
    std::cout << "Enter an integer you'd like to double: ";
    std::cin >> x;
    std::cout << "Double " << x << " is " << x*2 << '\n';
    std::cout << "Triple " << x << " is " << x*3 << '\n';
    
    return 0;
}
