#include <iostream>

int main()
{
    int n;

	std::cin >> n;

	int cnt = 0;
	for (int i = 2; i <= n; cnt++)
		i += (6 * cnt);

	if (n == 1)
		cnt = 1;
	
	std::cout << cnt << std::endl;

	return 0;
}