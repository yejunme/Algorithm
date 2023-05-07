#include <iostream>
#include <string>

int main()
{
    std::string a, b;
	std::string bigger;

	std::cin >> a >> b;

	for (int i = 2; i >= 0; i--)
	{
		if (a[i] == b[i])
			continue;
		else if (a[i] > b[i])
		{
			bigger = a;
			break;
		}
		else if (a[i] < b[i])
		{
			bigger = b;
			break;
		}
	}

	std::cout << bigger[2] << bigger[1] << bigger[0] << std::endl;

	return 0;
}