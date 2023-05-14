#include <iostream>

int main()
{
    int n, b;

	std::cin >> n >> b;

	std::string s;
	for (int i = 0; n != 0; i++)
	{
		int tmp = n % b;
		if (tmp > 9)
			s += (tmp + 55);
		else
			s += (tmp + 48);

		n /= b;
	}

	for (int i = s.length() - 1; i >= 0; i--)
		std::cout << s[i];

	return 0;
}