#include <iostream>
#include <string>

int main()
{
    std::string s;
	int n, cnt = 0;

	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::cin >> s;

		bool flag = true;
		for (int j = 0; j < s.length(); j++)
		{
			for (int k = 0; k < j; k++)
			{
				if (s[j] != s[j-1] && s[j] == s[k])
				{
					flag = false;
					break;
				}
			}
		}

		if (flag)
			cnt++;
	}

	std::cout << cnt << std::endl;
    
    return 0;
}