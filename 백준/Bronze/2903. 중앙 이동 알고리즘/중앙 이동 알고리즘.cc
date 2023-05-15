#include <iostream>

int main()
{
    int n;
    int x = 2;
    
    std::cin >> n;
    
    for (int i = 0; i < n; i++)
        x += (x - 1);
    
    x *= x;

	std::cout << x << std::endl;

	return 0;
}