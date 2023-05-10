#include <iostream>
#include <string>

int main()
{
    int arr[26] = { 0, };
	std::string s;

	std::cin >> s;

	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] < 'a')
			arr[s[i] - 65] += 1;
		else
			arr[s[i] - 97] += 1;
	}

	int index, max = 0;
	for (int i = 0; i < 26; i++)
	{
		if (arr[i] > max)
		{
			index = i;
			max = arr[i];
		}
	}

	int cnt = 0;
	for (int i = 0; i < 26; i++)
	{
		if (arr[i] == max)
			cnt++;
	}

	if (cnt > 1)
		std::cout << '?' << std::endl;
	else
		std::cout << (char)(index + 65) << std::endl;

	return 0;
}