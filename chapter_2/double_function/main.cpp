#include <iostream>

int getInputFromUser()
{
    std::cout << "Type in a integer and hit enter: ";
    int input{};
    std::cin >> input;

    return input;
}

int main()
{
    int x{ getInputFromUser() };
    int y{ getInputFromUser() };

    std::cout << "The two numbers added together equal: " << x + y << '\n';

    return 0;
}
