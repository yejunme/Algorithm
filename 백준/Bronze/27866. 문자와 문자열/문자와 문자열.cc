#include <iostream>
#include <string>

int main()
{
	std::string s;
	int i;

	std::getline(std::cin, s);
	std::cin >> i;

	std::cout << s[i -1] << std::endl;

	return 0;
}