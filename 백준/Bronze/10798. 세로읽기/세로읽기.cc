#include <iostream>

int main()
{
    std::string s[5];
	
	for (int i = 0; i < 5; i++)
		std::cin >> s[i];

	for (int i = 0; i < 15;i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i < s[j].length())
				std::cout << s[j][i];
		}
	}

	return 0;
}