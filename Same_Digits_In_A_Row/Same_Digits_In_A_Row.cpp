#include <iostream>
#include <string>

int main()
{
	std::string number;
	bool same_digits = false;

	std::cout << "Enter a number: ";
	std::getline(std::cin, number);

	for (int i = 1; i < number.size(); i++)
	{
		if (number[i - 1] == number[i])
		{
			same_digits = true;
		}		
	}

	if (same_digits)
	{
		std::cout << number << " - the number has the same digits in a row\n";
	}
	else
	{
		std::cout << number << " - the number doesn't have the same digits in a row\n";
	}
}