#include <iostream>
#include <string>

int main()
{
    std::string s;

	std::cin >> s;

	int len = s.length();
	for (int i = 0; i < len / 2; i++)
	{
		if (s[i] != s[len - (i + 1)])
		{
			std::cout << 0 << std::endl;
			return 0;
		}
	}

	std::cout << 1 << std::endl;

	return 0;
}