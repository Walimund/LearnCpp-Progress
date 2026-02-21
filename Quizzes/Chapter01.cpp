#include "Chapter01.h"
#include <iostream>


// Solution for chapter 1 quiz
void quiz01Solution()
{
    std::cout << "Quiz 1 solution is running...\n";

    std::cout << "Enter an Integer: ";

    int x{};
    std::cin >> x;

    std::cout << "Enter another integer: ";

    int y{};
    std::cin >> y;

    std::cout << x << " + " << y << " is " << x + y << '\n';

    std::cout << x << " - " << y << " is " << x - y << '\n';
}