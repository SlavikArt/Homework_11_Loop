#include <iostream>
#include <string>

int main()
{
	std::string number;
	bool asc_order = true;

	std::cout << "Enter a number: ";
	std::getline(std::cin, number);

	int max = number[0];

	for (int i = 1; i < number.size(); i++)
	{
		if (number[i] >= max)
		{
			max = number[i];
		}
		else
		{
			asc_order = false;
		}
	}

	if (asc_order)
	{
		std::cout << number << " - all digits are in an ascending order\n";
	}
	else
	{
		std::cout << number << " - all digits are not in an ascending order\n";
	}
}