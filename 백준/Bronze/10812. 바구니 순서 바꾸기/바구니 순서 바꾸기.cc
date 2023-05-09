#include <iostream>

int main()
{
	int arr[101], brr[101];
	int n, m;
	int begin, mid, end;

	std::cin >> n >> m;

	for (int i = 1; i <= n; i++)
		arr[i] = i;

	for (int i = 0; i < m; i++)
	{
		std::cin >> begin >> end >> mid;

		int start = begin;
		for (int j = begin; j < mid; j++)
			brr[j] = arr[j];

		for (int j = mid; j <= end; j++)
			arr[start++] = arr[j];

		for (int j = begin; j < mid; j++)
			arr[start++] = brr[j];
	}

	for (int i = 1; i <= n; i++)
		std::cout << arr[i] << ' ';

	return 0;
}