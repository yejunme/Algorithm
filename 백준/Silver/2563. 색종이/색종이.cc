#include <iostream>

int main()
{
    int arr[100][100] = { 0, };
	int n;
	int x, y, sum = 0;

	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::cin >> x >> y;

		for (int j = x; j < x + 10; j++)
		{
			for (int k = y; k < y + 10; k++)
				if (!arr[j][k])
				{
					sum++;
					arr[j][k] = 1;
				}
		}
	}

	std::cout << sum << std::endl;

	return 0;
}