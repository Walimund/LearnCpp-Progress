#include <iostream>

namespace Chapter06 {
	//Function declarations for CH 6.3 quiz
	constexpr bool isEven(int x);
	int userInputNum();

	//Solution for CH 6.3 quiz
	void quiz06Part1Solution()
	{
		int userNum{ userInputNum() };

		if (isEven(userNum))
			std::cout << userNum << " is even\n";
		else
			std::cout << userNum << " is odd\n";
	}

	constexpr bool isEven(int userNum)
	{
		return (userNum % 2) == 0;
	}

	int userInputNum()
	{
		std::cout << "Please enter a number: ";
		int userNum{};
		std::cin >> userNum;
		return userNum;
	}
}
