#include <iostream>

namespace Chapter07 {

	void quiz07Part1Solution()
	{
		std::cout << "Input an integer: ";
		int userInputSmaller{};
		std::cin >> userInputSmaller;

		std::cout << "Input a larger integer: ";
		int userInputBigger{};
		std::cin >> userInputBigger;

		if (userInputSmaller > userInputBigger)
		{
			std::cout << "Swapping the values...\n";
			int swap{userInputSmaller}; // Swap value start here

			userInputSmaller = userInputBigger;
			userInputBigger = swap;
		} // The int swap value is destroyed here
	
		std::cout << "The smaller value is: " << userInputSmaller << '\n';
		std::cout << "The bigger value is: " << userInputBigger << '\n';
	}
}