#include <iostream>
#include <string>

int main()
{
	std::string s;

	std::getline(std::cin, s);

	std::cout << s.length() << std::endl;

	return 0;
}