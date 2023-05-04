int main()
{
    int arr[31];
	int n;

	for (int i = 1; i <= 28; i++)
	{
		scanf("%d", &n);
		arr[n] = n;
	}

	for (int i = 1; i <= 30; i++)
	{
		if (arr[i] != i)
			printf("%d\n", i);
	}

	return 0;
}