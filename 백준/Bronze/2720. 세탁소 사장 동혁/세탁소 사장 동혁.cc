#include <iostream>

int main()
{
    int arr[] = { 25, 10, 5, 1 };
	int t, c;

	std::cin >> t;

	for (int i = 0; i < t; i++)
	{
		std::cin >> c;

		for (int j = 0; j < 4; j++)
		{
			std::cout << c / arr[j] << ' ';
			c %= arr[j];
		}
		std::cout << std::endl;
	}

	return 0;
}