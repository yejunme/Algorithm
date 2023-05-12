#include <iostream>

int main()
{
	int arr[100][100] = { 0, };
	int n, m, tmp;

	std::cin >> n >> m;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < m; k++)
			{
				std::cin >> tmp;
				arr[j][k] += tmp;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			std::cout << arr[i][j] << ' ';
		std::cout << std::endl;
	}

	return 0;
}