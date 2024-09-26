#include <string>
#include <iostream>

// Undertask 1
std::string listNums(int x)
{
	std::string result = "0";
	
	for (int i = 1; i <= x; i++)
		result += " " + std::to_string(i);

	if (result == "0")
	{
		for (int i = -1; i >= x; i--)
			result += " " + std::to_string(i);
	}

	return result;
}

// Undertask 3
std::string chet(int x)
{
	std::string result = "0";

	for (int i = 2; i <= x; i += 2)
		result += " " + std::to_string(i);

	if (result == "0")
	{
		for (int i = -2; i >= x; i-=2)
			result += " " + std::to_string(i);
	}

	return result;
}

// Undertask 5
int numLen(long x)
{
	int len = 1;
	while (x / 10 != 0)
	{
		len++;
		x /= 10;
	}
	return len;
}

// Undertask 7
void square(int x)
{
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < x; j++)
			std::cout << "*";
		std::cout << std::endl;
	}
}

// Undertask 9
void rightTriangle(int x)
{
	for (int i = 0; i < x; i++)
	{
		for (int j = x - 1; j >= 0; j--)
			if (j > i)
				std::cout << " ";
			else
				std::cout << "*";
		std::cout << std::endl;
	}
}