#include <bitset>
#include <cstdint>
#include <iostream>

namespace ChapterO {

	// Function declarations for CH O.2 quiz
	std::bitset<4> rotl(std::bitset<4> bits);

	// Funtion declarations for CH O.4 quiz
	int isOddAndDivide(int x, int y);
	void printBit(int x);

	// Solution for CH O.2 quiz
	void quizOPart1Solution()
	{
		std::bitset<4> bits1{ 0b0001 };
		std::cout << rotl(bits1) << '\n';

		std::bitset<4> bits2{ 0b1001 };
		std::cout << rotl(bits2) << '\n';

	}

	// Solution for CH O.3 quiz
	void quizOPart2Solution()
	{
		[[maybe_unused]] constexpr std::uint8_t option_viewed{ 0x01 };
		[[maybe_unused]] constexpr std::uint8_t option_edited{ 0x02 };
		[[maybe_unused]] constexpr std::uint8_t option_favorited{ 0x04 };
		[[maybe_unused]] constexpr std::uint8_t option_shared{ 0x08 };
		[[maybe_unused]] constexpr std::uint8_t option_deleted{ 0x10 };

		std::uint8_t myArticleFlags{ option_favorited };

		myArticleFlags |= option_viewed;

		if (myArticleFlags & option_deleted)
			myArticleFlags |= option_deleted;

		myArticleFlags &= static_cast<std::uint8_t>(~option_favorited);

		std::cout << std::bitset<8>{ myArticleFlags } << '\n';
	}

	// Solution for CH O.4 quiz
	void quizOPart3Solution()
	{
		std::cout << "What number would you like to convert to binary?"
			<< " (between 0 and 255)\n";
		int userNum{ 0 };
		std::cin >> userNum;

		printBit(isOddAndDivide(userNum, 1));
		printBit(isOddAndDivide(userNum, 2));
		printBit(isOddAndDivide(userNum, 4));
		printBit(isOddAndDivide(userNum, 8));
		std::cout << "'";
		printBit(isOddAndDivide(userNum, 16));
		printBit(isOddAndDivide(userNum, 32));
		printBit(isOddAndDivide(userNum, 64));
		printBit(isOddAndDivide(userNum, 128));
	}

	// BEGINNING of functions for CH O.2
	std::bitset<4> rotl(std::bitset<4> bits)
	{
		return (bits << 1) | (bits >> 3);
	}
	//END of functions for O.2

	// BEGINNING of functions for CH O.4
	int isOddAndDivide(int bitAssign, int divide)
	{
		return ((bitAssign / divide) % 2 != 0) and (divide < bitAssign) ? 1 : 0;
	}

	void printBit(int bit)
	{
		std::cout << bit;
	}
}