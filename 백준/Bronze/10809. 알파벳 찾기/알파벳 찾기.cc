#include <iostream>
#include <string>

int main()
{
    std::string s;

	std::cin >> s;
	
	for (char ch = 'a'; ch <= 'z'; ch++)
	{
		std::cout << (int)s.find(ch) << ' ';
	}

	return 0;
}