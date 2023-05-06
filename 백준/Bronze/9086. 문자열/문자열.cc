#include <iostream>
#include <string>

int main()
{
	std::string s;
	int t;

	std::cin >> t;
	std::cin.ignore();

	for (int i = 0; i < t; i++)
	{
		std::getline(std::cin, s);
		std::cout << s[0] << s[s.length() - 1] << std::endl;
	}

	return 0;
}