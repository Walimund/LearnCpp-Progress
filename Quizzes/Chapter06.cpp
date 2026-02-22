#include <iostream>
#include <string>

namespace Chapter06 {
	// Function declarations for CH 6.3 quiz
	constexpr bool isEven(int x);
	int userInputNum();

	// Function declarations for CH 6.x quiz
	std::string_view getQuantityPhrase(int x);
	std::string_view getApplesPluralized(int x);

	// Solution for CH 6.3 quiz
	void quiz06Part1Solution()
	{
		int userNum{ userInputNum() };

		if (isEven(userNum))
			std::cout << userNum << " is even\n";
		else
			std::cout << userNum << " is odd\n";
	}

	// Solution for CH 6.x quiz
	void quiz06Part2Solution()
	{
		constexpr int maryApples{ 3 };
		std::cout << "Mary has " << getQuantityPhrase(maryApples) << ' '
			<< getApplesPluralized(maryApples) << ".\n";

		std::cout << "How many apples do you have? ";
		int numApples{};
		std::cin >> numApples;

		std::cout << "You have " << getQuantityPhrase(numApples) << ' '
			<< getApplesPluralized(numApples) << ".\n";
	}

	// BEGINNING of functions for CH 6.3
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
	// END of functions for CH 6.3

	// BEGINNING of functions for CH 6.x
	std::string_view getQuantityPhrase(int quantity)
	{
		if (quantity < 0)
			return "negative";
		else if (quantity == 0)
			return "no";
		else if (quantity == 1)
			return "a single";
		else if (quantity == 2)
			return "a couple";
		else if (quantity == 3)
			return "a few";
		else if (quantity > 3)
			return "many";
	}

	std::string_view getApplesPluralized(int quantity)
	{
		return (quantity == 1) ? "apple" : "apples";
	}
}
