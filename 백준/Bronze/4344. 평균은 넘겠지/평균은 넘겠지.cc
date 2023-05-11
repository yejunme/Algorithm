#include <stdio.h>
int main()
{
	int n, sum, cnt, arr[1000];

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		sum = 0, cnt = 0;
		scanf("%d", &arr[0]);
		for (int j = 1; j < arr[0] + 1; j++)
		{
			scanf("%d", &arr[j]);
			sum += arr[j];
		}
		for (int j = 1; j < arr[0] + 1; j++)
		{
			if (arr[j] > (double)sum / arr[0])
				cnt++;
		}
		printf("%.3lf%%\n", 100.0 * cnt / arr[0]);
	}

	return 0;
}