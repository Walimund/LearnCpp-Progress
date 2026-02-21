#include <iostream>
#include <string>

namespace Chapter05 {
	// Function declarations for CH 5.x (final) quiz
	void ageCompare(int ageName1, int ageName2, std::string name1, std::string name2);
	std::string getName(int num);
	int getAge(std::string aName);

	// Solution for chapter 5.8 quiz
	void quiz05Part1Solution()
	{
		std::cout << "Solution for CH 5.8 quiz is running...\n";

		std::cout << "Enter your full name: ";
		std::string name{};
		std::getline(std::cin >> std::ws, name);

		std::cout << "Enter your age: ";
		int age{};
		std::cin >> age;

		int ageAndName{ static_cast<int>(name.length()) + age };

		std::cout << "Your age + length of name is: " << ageAndName;
	}

	// Solution for CH 5.x (final) quiz
	void quiz05Part2Solution()
	{
		std::string name1{ getName(1) };
		int ageName1{ getAge(name1) };

		std::string name2{ getName(2) };
		int ageName2{ getAge(name2) };

		ageCompare(ageName1, ageName2, name1, name2);
	}

	// BEGINNING of functions for CH 5.x (final) quiz
	int getAge(std::string name)
	{
		std::cout << "What is " << name << "'s age? ";
		int age{};
		std::cin >> age;
		return age;
	}

	void ageCompare(int ageName1, int ageName2, std::string name1, std::string name2)
	{
		if (ageName1 > ageName2)
			std::cout << name1 << " (" << ageName1 << ") " << "is older than "
			<< name2 << " (" << ageName2 << ") ";
		else if (ageName2 > ageName1)
			std::cout << name2 << " (" << ageName2 << ") " << "is older than "
			<< name1 << " (" << ageName1 << ") ";
		else
			std::cout << "The ages of " << name1 << " and " << name2
			<< " are equal! (" << ageName1 << ")\n";
	}

	std::string getName(int num)
	{
		std::cout << "Enter the name of person #" << num << ": ";
		std::string name{};
		std::getline(std::cin >> std::ws, name);
		return name;
	}
	// END of functions for CH 5.x (final) quiz
}