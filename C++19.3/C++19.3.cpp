#include <iostream>
#include <string>
#include <vector>

int main()
{
	std::vector<std::string> a_1;
	std::string b_1[] = { "1", "2", "3", "4", "5", "6", "7", "8", "9" };

	for (std::string i : b_1)
	{
		a_1.push_back(i);
	}

	for (std::string i : a_1)
	{
		std::cout << i << " ";
	}

	std::cout << std::endl;

	return 0;
}