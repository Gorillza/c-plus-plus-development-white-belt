#include <iostream>

//-------------------------------------------------------------------------------------------------
int main() 
{
	int a = 0;
	std::cin >> a;

	int b = 0;
	std::cin >> b;

	int c = 0;
	while (b != 0)
	{
		c = a % b;
		a = b;
		b = c;
	}
	std::cout << a;

	return 0;
}
//-------------------------------------------------------------------------------------------------