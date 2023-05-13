#include <iostream>
#include <cmath>

int main()
{
	std::string s;
	int b, result = 0;

	std::cin >> s >> b;
	
	int cnt = 0;
	for (int i = s.length() - 1; i >= 0; i--)
	{
		if (s[i] >= 65)
			result += (s[i] - 55) * pow(b, cnt);
		else
			result += (s[i] - 48) * pow(b, cnt);
		
		cnt++;
	}

	std::cout << result << std::endl;

	return 0;
}