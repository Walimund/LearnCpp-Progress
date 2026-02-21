#include <iostream>
#include "Chapter04.h"

namespace Chapter04 {
	// Quiz 4 Part 1 solution function declarations
	double getDouble();
	double doOperation(double x, double y, char z);
	char getOperation();

	// Quiz 4 Part 2 solution function declarations
	double getHeight();
	double distanceFallen(double towerHeight, int seconds);
	void printBallStatus(double ballHeight, int seconds);
	void getAndPrintBallHeight(double towerHeight, int seconds);

	// Quiz 4 Part 1 solution main function
	void quiz04Part1Solution()
	{
		double x{ getDouble() };
		double y{ getDouble() };
		char z{ getOperation() };

		double ans{ doOperation(x, y, z) };

		if (ans != 0)
			std::cout << x << " " << z << " " << y << " is " << ans;
	}

	// BEGINNING of functions for Quiz 4 Part 1
	double getDouble()
	{
		std::cout << "Enter a decimal number: ";
		double x{};
		std::cin >> x;

		return x;
	}

	double doOperation(double x, double y, char z)
	{

		if (z == '+')
			return x + y;
		else if (z == '-')
			return x - y;
		else if (z == '/')
			return x / y;
		else if (z == '*')
			return x * y;
		else
			std::cout << "Invalid input, exiting...";

		return 0;
	}

	char getOperation()
	{
		std::cout << "What operation would you like to perform?\n(Ex: +, -, /, *)\n";
		char z{};
		std::cin >> z;

		return z;
	}
	// END of functions for Quiz 4 Part 1

	// Quiz 4 Part 2 solution main function
	void quiz04Part2Solution()
	{
		std::cout << "Quiz 4 part 2 solution is running...\n";

		double towerHeight{ getHeight() };

		getAndPrintBallHeight(towerHeight, 0);
		getAndPrintBallHeight(towerHeight, 1);
		getAndPrintBallHeight(towerHeight, 2);
		getAndPrintBallHeight(towerHeight, 3);
		getAndPrintBallHeight(towerHeight, 4);
		getAndPrintBallHeight(towerHeight, 5);
	}

	// BEGINNING of Quiz 4 Part 2 functions
	double getHeight()
	{
		std::cout << "The height of the tower is: ";
		double towerHeight{};
		std::cin >> towerHeight;

		return towerHeight;
	}

	double distanceFallen(double towerHeight, int seconds)
	{
		double gravity{ 9.81 };

		double distanceFall{ gravity * (seconds * seconds) / 2 };

		double ballHeight{ towerHeight - distanceFall };

		if (ballHeight < 0.0)
			return 0.0;

		return ballHeight;
	}

	void printBallStatus(double ballHeight, int seconds)
	{
		if (ballHeight > 0.0)
			std::cout << "At " << seconds << " seconds, the ball is at height: "
			<< ballHeight << " meters\n";
		else
			std::cout << "At " << seconds << " seconds, the ball is on the ground.\n";
	}

	void getAndPrintBallHeight(double towerHeight, int seconds)
	{
		double ballHeight{ distanceFallen(towerHeight, seconds) };
		printBallStatus(ballHeight, seconds);
	}
	// END of Quiz 4 Part 2 functions
}