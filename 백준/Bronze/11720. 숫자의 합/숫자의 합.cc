#include <iostream>

int main()
{
    char ch;
	int n;
	int sum = 0;

	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::cin >> ch;
		sum += (ch - '0');
	}

	std::cout << sum << std::endl;	

	return 0;
}