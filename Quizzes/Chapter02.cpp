#include "Chapter02.h"
#include <iostream>

int readNumber();
void writeAnswer(int x);

void quiz02Solution()
{
	std::cout << "Quiz 2 solution is running...\n";

	int x{ readNumber() };
	int y{ readNumber() };

	writeAnswer(x + y);
}

int readNumber()
{
	std::cout << "Enter a number to add: ";

	int x{};
	std::cin >> x;

	return x;
}

void writeAnswer(int x)
{
	std::cout << "The two numbers added is: " << x << '\n';
}