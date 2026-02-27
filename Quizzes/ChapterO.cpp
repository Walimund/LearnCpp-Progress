#include <bitset>
#include <cstdint>
#include <iostream>

namespace ChapterO {

	// Function declarations for CH O.2 quiz
	std::bitset<4> rotl(std::bitset<4> bits);

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

	// BEGINNING of functions for CH O.2
	std::bitset<4> rotl(std::bitset<4> bits)
	{
		return (bits << 1) | (bits >> 3);
	}
	//END of functions for O.2
}