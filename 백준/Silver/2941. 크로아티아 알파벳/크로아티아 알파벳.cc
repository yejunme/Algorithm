#include <iostream>
#include <string>

int main()
{
    std::string arr[] = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };
	std::string s;
	int cnt = 0;

	std::cin >> s;

	for (int i = 0; i < 8; i++)
	{
		while (1)
		{
			int idx = s.find(arr[i]);
			if (idx == -1)
				break;
			s.replace(idx, arr[i].length(), "#");
		}
	}

	std::cout << s.length() << std::endl;

	return 0;
}