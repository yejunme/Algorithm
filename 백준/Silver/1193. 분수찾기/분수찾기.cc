#include <iostream>

int main()
{
    int x;

	std::cin >> x;

	int i = 0;
	while (x > 0)
		x -= ++i;

	if (i % 2 == 1)
		std::cout << 1 - x << '/' << i + x;
	else
		std::cout << i + x << '/' << 1 - x;

	return 0;
}