#include <iostream>
#include <string>

int main()
{
    std::string s;
	int t, r;
	
	std::cin >> t;

	for (int i = 0; i < t; i++)
	{
		std::cin >> r >> s;

		for (int j = 0; j < s.length(); j++)
		{
			for (int k = 0; k < r; k++)
				std::cout << s[j];
		}
		std::cout << std::endl;
	}

	return 0;
}