#include <iostream>

int main()
{
	double s = 0;
	for (int i = 1; i <= 1000; i++)
	{
		s += i;
	}
	std::cout << s / 1000;
}
