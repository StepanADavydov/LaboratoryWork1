#include <string>

// Undertask 1
int customAbs(int x)
{
	if (x >= 0)
		return x;
	else
		return -x;
}

// Undertask 3
bool is35(int x)
{
	if (x % 3 == 0)
	{
		if (x % 5 == 0)
			return false;
		else
			return true;
	}
	else if (x % 5 == 0)
		return true;
	else
		return false;
}

// Undertask 5
int max3(int x, int y, int z)
{
	int max = x;

	if (y > max)
		max = y;
	
	if (z > max)
		max = z;

	return max;
}

// Undertask 7
int sum2(int x, int y)
{
	return (10 <= x + y) && (x + y <= 19) ? 20 : x + y;
}

// Undertask 9
std::string day(int x)
{
	switch (x)
	{
	case 1:
		return "�����������";
		break;
	case 2:
		return "�������";
		break;
	case 3:
		return "�����";
		break;
	case 4:
		return "�������";
		break;
	case 5:
		return "�������";
		break;
	case 6:
		return "�������";
		break;
	case 7:
		return "�����������";
		break;
	default:
		return "��� �� ���� ������";
		break;
	}
}