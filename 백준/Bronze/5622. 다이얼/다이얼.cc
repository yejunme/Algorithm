#include <iostream>
#include <string>

int main()
{
    int arr[] = { 3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10 };
	int sec = 0;
	std::string s;

	std::cin >> s;

	for (int i = 0; i < s.length(); i++)
	{
		sec += arr[s[i] - 65];
	}

	std::cout << sec << std::endl;

	return 0;
}