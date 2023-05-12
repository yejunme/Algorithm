#include <iostream>

int main()
{
    int arr[9][9] = { 0, };
	int row = 0, column = 0, max = 0;

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			std::cin >> arr[i][j];
			if (arr[i][j] > max)
			{
				max = arr[i][j];
				row = i;
				column = j;
			}
		}
	}

	std::cout << max << std::endl;
	std::cout << row + 1 << ' ' << column + 1 << std::endl;

	return 0;
}