#include <stdio.h>

int main()
{
    int arr[101];
	int n, m;
	int i, j;

	scanf("%d %d", &n, &m);

	for (int a = 1; a <= n; a++)
		arr[a] = a;

	for (int a = 1; a <= m; a++)
	{
		scanf("%d %d", &i, &j);
		int tmp = arr[i];
		arr[i] = arr[j];
		arr[j] = tmp;
	}

	for (int a = 1; a <= n; a++)
		printf("%d ", arr[a]);


	return 0;
}