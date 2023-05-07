#include <iostream>
#include <string>

int main()
{
    std::string s;
	int cnt = 1;

	std::getline(std::cin, s);

	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			cnt++;
	}

	if (s[0] == ' ')
		cnt--;
	if (s[s.length() - 1] == ' ')
		cnt--;

	std::cout << cnt << std::endl;

	return 0;
}