// Undertask 1
double fraction(double x)
{
	int int_x = int(x);
	return x - int_x;
}

// Undertask 3
int charToNum(char x)
{
	return int(x) - 48;
}

// Undertask 5
bool is2Digits(int x)
{
	return (x / 10 != 0) && ((x / 10) / 10 == 0);
}

// Undertask 7
bool isInRange(int a, int b, int num)
{
	return (num <= a && num >= b) || (num >= a && num <= b);
}

// Undertask 9
bool isEqual(int a, int b, int c)
{
	return a == b && b == c;
}