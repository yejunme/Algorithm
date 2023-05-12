#include <iostream>

int main()
{
	int arr[100][100] = { 0, };
	int brr[100][100] = { 0, };
	int n, m;

	std::cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			std::cin >> arr[i][j];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			std::cin >> brr[i][j];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			std::cout << arr[i][j] + brr[i][j] << ' ';
		std::cout << std::endl;
	}

	return 0;
}