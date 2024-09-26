#include "Header.h"
#include <iostream>
#include <array>

// Undertask 1
int findFirst(int arr[], const int length, int x)
{
	for (int i = 0; i < length; i++)
	{
		if (x == arr[i])
			return i;
	}
	return -1;
}

// Undertask 3
int maxAbs(int arr[], const int length)
{
	int max;
	if (length > 0)
		max = arr[0];
	else
		return -1;
	for (int i = 1; i < length; i++)
	{
		if (customAbs(max) < customAbs(arr[i]))
			max = arr[i];
	}
	return max;
}

// Undertask 5
int* add(int arr[], const int arr_length, int ins[], const int ins_length, int pos)
{
	const int length = 100;
	int res[length] = {};

	if (length < arr_length + ins_length)
	{
		std::cout << "К сожалению, данная функция не принимает такие большие массивы.\n";
		return res;
	}

	if (pos >= arr_length || pos < 0)
	{
		std::cout << "Такой позиции в массиве нет.\n";
		return res;
	}

	for (int i = 0, k = 0; i < arr_length; i++, k++)
	{
		if (i == pos)
		{
			for (int j = 0; j < ins_length; j++, k++)
			{
				res[k] = ins[j];
			}
		}
		res[k] = arr[i];
	}

	return res;
}

// Undertask 7
int* reverseBack(int arr[], const int arr_length)
{
	const int length = 100;
	int res[length] = {};
	if (arr_length > length)
	{
		std::cout << "К сожалению, данная функция не принимает такие большие массивы.\n";
		return res;
	}

	for (int i = 0, j = arr_length - 1; i < arr_length; i++, j--)
	{
		res[i] = arr[j];
	}
	return res;
}

// Undertask 9
int* findAll(int arr[], const int arr_length, int x)
{
	const int length = 100;
	int res[length] = {};
	if (arr_length > length)
	{
		std::cout << "К сожалению, данная функция не принимает такие большие массивы.\n";
		return res;
	}

	for (int i = 0, k = 0; i < arr_length; i++)
	{
		if (x == arr[i])
		{
			res[k] = i;
			k++;
		}
	}
	return res;
}