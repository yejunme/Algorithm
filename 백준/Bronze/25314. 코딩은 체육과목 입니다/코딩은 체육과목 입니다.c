#include <stdio.h>

int main()
{
	int n, cnt = 0;

	scanf("%d", &n);

	if (n % 4 == 0)
		cnt = n / 4;

	for (int i = 0; i < cnt; i++)
		printf("long ");
	printf("int");

	return 0;
}