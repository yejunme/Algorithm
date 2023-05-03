#include <stdio.h>

int main()
{
    int arr[101] = { 0, };
	int n, m;
	int i, j, k;

	scanf("%d %d", &n, &m);

	for (int x = 0; x < m; x++)
	{
		scanf("%d %d %d", &i, &j, &k);
		for (int a = i; a <= j; a++)
			arr[a] = k;
	}

	for (int x = 1; x <= n; x++)
		printf("%d ", arr[x]);

	return 0;
}