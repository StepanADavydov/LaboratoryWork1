#include <iostream>
#include <string>
#include "Header.h"

int main()
{
	setlocale(LC_CTYPE, "rus");

	int current = 0;

	while (true)
	{
		if (current == 0)
		{
			std::cout << "Добро пожаловать в Лабораторную Работу 1!\n" <<
				"Пожалуйста, введите номер задания (1-4) (чтобы выйти введите 'q'):\n" <<
				">>> ";
			char choice;
			std::cin >> choice;
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			int int_choice = (int)choice - 48;
			if (int_choice == 1)
			{
				current = int_choice;
				continue;
			}
			else if (int_choice == 2)
			{
				current = int_choice;
				continue;
			}
			else if (int_choice == 3)
			{
				current = int_choice;
				continue;
			}
			else if (int_choice == 4)
			{
				current = int_choice;
				continue;
			}
			else if (choice == 'q')
			{
				current = -1;
				continue;
			}
			else
			{
				std::cout << "Данные некорректны.\n";
				continue;
			}
		}
		else if (1 <= current && current <= 4)
		{
			while (true)
			{
				if (1 <= current && current <= 4)
				{
					std::cout << "Добро пожаловать в Задание " << current << "!\n" <<
						"Пожалуйста, введите номер задачи (1, 3, 5, 7, 9) (чтобы выйти введите 'q'):\n" <<
						">>> ";
					char choice;
					std::cin >> choice;
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					int int_choice = (int)choice - 48;
					if (int_choice == 1)
					{
						current *= 10;
						current += int_choice;
						break;
					}
					else if (int_choice == 3)
					{
						current *= 10;
						current += int_choice;
						break;
					}
					else if (int_choice == 5)
					{
						current *= 10;
						current += int_choice;
						break;
					}
					else if (int_choice == 7)
					{
						current *= 10;
						current += int_choice;
						break;
					}
					else if (int_choice == 9)
					{
						current *= 10;
						current += int_choice;
						break;
					}
					else if (choice == 'q')
					{
						current = 0;
						break;
					}
					else
					{
						std::cout << "Данные некорректны.\n";
						continue;
					}
				}
			}
			continue;
		}
		else
		{
			if (current == -1)
				break;
			switch (current)
			{
			case 11:
				while (true)
				{
					std::cout << "Тект задачи:\n" <<
						"Дана сигнатура функции: double fraction (double x);" <<
						" Необходимо реализовать функцию таким образом, чтобы она возвращала только дробную часть числа х.\n" <<
						"Введите x: ";
					std::string char_x;
					std::cin >> char_x;
					double x;
					try
					{
						x = stod(char_x);
					}
					catch (std::exception)
					{
						std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
						std::cout << "Данные некорректны.\n";
						continue;
					}
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					std::cout << "Результат: " << fraction(x) << ".\n";
					break;
				}
				current = 0;
				break;
			case 13:
				while (true)
				{
					std::cout << "Тект задачи:\n" <<
						"Дана сигнатура функции: int charToNum (char x);" <<
						" Функция принимает символ х, который представляет собой один из \"0 1 2 3 4 5 6 7 8 9\"." <<
						" Необходимо реализовать функцию таким образом, чтобы она преобразовывала символ" <<
						" в соответствующее число.\n" <<
						"Введите x: ";
					char char_x;
					std::cin >> char_x;
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					int x = charToNum(char_x);
					if (0 <= x && x <= 9)
						std::cout << "Результат: " << x << ".\n";
					else
					{
						std::cout << "Данные некорректны.\n";
						continue;
					}
					break;
				}
				current = 0;
				break;
			case 15:
				while (true)
				{
					std::cout << "Тект задачи:\n" <<
						"Дана сигнатура функции: bool is2Digits (int x);" <<
						" Необходимо реализовать функцию таким образом, чтобы она принимала число x и" <<
						" возвращала true, если оно двузначное.\n" <<
						"Введите x: ";
					std::string char_x;
					std::cin >> char_x;
					int x;
					try
					{
						x = stoi(char_x);
					}
					catch (std::exception)
					{
						std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
						std::cout << "Данные некорректны.\n";
						continue;
					}
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					int res = is2Digits(x);
					std::cout << "Результат: " << (res == 0 ? "false" : "true") << ".\n";
					break;
				}
				current = 0;
				break;
			case 17:
				while (true)
				{
					std::cout << "Тект задачи:\n" <<
						"Дана сигнатура функции: bool isInRange (int a, int b, int num);" <<
						" Функция принимает левую и правую границу(a и b) некоторого числового диапазона." <<
						" Необходимо реализовать функцию таким образом, чтобы она возвращала true, если" <<
						" num входит в указанный диапазон(включая границы).Обратите внимание, что" <<
						" отношение a и b заранее неизвестно(неясно кто из них больше, а кто меньше)" <<
						"\n";
					int a, b, num;
					while (true)
					{
						std::cout << "Введите a:";
						std::string char_a;
						std::cin >> char_a;
						try
						{
							a = stoi(char_a);
						}
						catch (std::exception)
						{
							std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
							std::cout << "Данные некорректны.\n";
							continue;
						}
						std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
						break;
					}
					while (true)
					{
						std::cout << "Введите b:";
						std::string char_b;
						std::cin >> char_b;
						try
						{
							b = stoi(char_b);
						}
						catch (std::exception)
						{
							std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
							std::cout << "Данные некорректны.\n";
							continue;
						}
						std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
						break;
					}
					while (true)
					{
						std::cout << "Введите num:";
						std::string char_num;
						std::cin >> char_num;
						try
						{
							num = stoi(char_num);
						}
						catch (std::exception)
						{
							std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
							std::cout << "Данные некорректны.\n";
							continue;
						}
						std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
						break;
					}
					std::cout << "Результат: " << (isInRange(a, b, num) == 0 ? "false" : "true") << ".\n";
					break;
				}
				current = 0;
				break;
			case 19:
				while (true)
				{
					std::cout << "Тект задачи:\n" <<
						"Дана сигнатура функции: bool isEqual(int a, int b, int c);" <<
						" Необходимо реализовать функцию таким образом, чтобы она возвращала true, если все" <<
						" три полученных функцией числа равны\n";
					int a, b, c;
					while (true)
					{
						std::cout << "Введите a:";
						std::string char_a;
						std::cin >> char_a;
						try
						{
							a = stoi(char_a);
						}
						catch (std::exception)
						{
							std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
							std::cout << "Данные некорректны.\n";
							continue;
						}
						std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
						break;
					}
					while (true)
					{
						std::cout << "Введите b:";
						std::string char_b;
						std::cin >> char_b;
						try
						{
							b = stoi(char_b);
						}
						catch (std::exception)
						{
							std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
							std::cout << "Данные некорректны.\n";
							continue;
						}
						std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
						break;
					}
					while (true)
					{
						std::cout << "Введите c:";
						std::string char_c;
						std::cin >> char_c;
						try
						{
							c = stoi(char_c);
						}
						catch (std::exception)
						{
							std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
							std::cout << "Данные некорректны.\n";
							continue;
						}
						std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
						break;
					}
					std::cout << "Результат: " << (isEqual(a, b, c) == 0 ? "false" : "true") << ".\n";
					break;
				}
				current = 0;
				break;
			case 21:
				while (true)
				{
					std::cout << "Тект задачи:\n" <<
						"Дана сигнатура функции: int abs (int x);" <<
						" Необходимо реализовать функцию таким образом, чтобы она возвращала модуль числа" <<
						" х(если оно было положительным, то таким и остается, если он было отрицательным –" <<
							" то необходимо вернуть его без знака минус).\n" <<
						"Введите x:";
					std::string char_x;
					std::cin >> char_x;
					int x;
					try
					{
						x = stoi(char_x);
					}
					catch (std::exception)
					{
						std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
						std::cout << "Данные некорректны.\n";
						continue;
					}
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					std::cout << "Результат: " << customAbs(x) << ".\n";
					break;
				}
				current = 0;
				break;
			case 23:
				while (true)
				{
					std::cout << "Тект задачи:\n" <<
						"Дана сигнатура функции: bool is35 (int x);" <<
						" Необходимо реализовать функцию таким образом, чтобы она возвращала true, если" <<
						" число x делится нацело на 3 или 5. При этом, если оно делится и на 3, и на 5, то вернуть" <<
						" надо false.Подсказка: оператор % позволяет получить остаток от деления.\n" <<
						"Введите x:";
					std::string char_x;
					std::cin >> char_x;
					int x;
					try
					{
						x = stoi(char_x);
					}
					catch (std::exception)
					{
						std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
						std::cout << "Данные некорректны.\n";
						continue;
					}
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					std::cout << "Результат: " << (is35(x) == 0 ? "false" : "true") << ".\n";
					break;
				}
				current = 0;
				break;
			case 25:
				while (true)
				{

					std::cout << "Тект задачи:\n" <<
						"Дана сигнатура функции: int max3 (int x, int y, int z);" <<
						" Необходимо реализовать функцию таким образом, чтобы она возвращала" <<
						" максимальное из трех полученных функцией чисел.Подсказка: идеальное решение" <<
						" включает всего две инструкции if и не содержит вложенных if.\n";
					int x, y, z;
					while (true)
					{
						std::cout << "Введите x:";
						std::string char_x;
						std::cin >> char_x;
						try
						{
							x = stoi(char_x);
						}
						catch (std::exception)
						{
							std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
							std::cout << "Данные некорректны.\n";
							continue;
						}
						std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
						break;
					}
					while (true)
					{
						std::cout << "Введите y:";
						std::string char_y;
						std::cin >> char_y;
						try
						{
							y = stoi(char_y);
						}
						catch (std::exception)
						{
							std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
							std::cout << "Данные некорректны.\n";
							continue;
						}
						std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
						break;
					}
					while (true)
					{
						std::cout << "Введите z:";
						std::string char_z;
						std::cin >> char_z;
						try
						{
							z = stoi(char_z);
						}
						catch (std::exception)
						{
							std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
							std::cout << "Данные некорректны.\n";
							continue;
						}
						std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
						break;
					}
					std::cout << "Результат: " << max3(x, y, z) << ".\n";
					break;
				}
				current = 0;
				break;
			case 27:
				while (true)
				{

					std::cout << "Тект задачи:\n" <<
						"Дана сигнатура функции: int sum2 (int x, int y);" <<
						" Необходимо реализовать функцию таким образом, чтобы она возвращала сумму чисел x" <<
						" и y. Однако, если сумма попадает в диапазон от 10 до 19, то надо вернуть число 20.\n";
					int x, y;
					while (true)
					{
						std::cout << "Введите x:";
						std::string char_x;
						std::cin >> char_x;
						try
						{
							x = stoi(char_x);
						}
						catch (std::exception)
						{
							std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
							std::cout << "Данные некорректны.\n";
							continue;
						}
						std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
						break;
					}
					while (true)
					{
						std::cout << "Введите y:";
						std::string char_y;
						std::cin >> char_y;
						try
						{
							y = stoi(char_y);
						}
						catch (std::exception)
						{
							std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
							std::cout << "Данные некорректны.\n";
							continue;
						}
						std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
						break;
					}
					std::cout << "Результат: " << sum2(x, y) << ".\n";
					break;
				}
				current = 0;
				break;
			case 29:
				while (true)
				{
					std::cout << "Тект задачи:\n" <<
						"Дана сигнатура функции: String day (int x);" <<
						" Функция принимает число x, обозначающее день недели.Необходимо реализовать" <<
						" функцию таким образом, чтобы она возвращала строку, которая будет обозначать" <<
						" текущий день недели, где 1 — это понедельник, а 7 – воскресенье.Если число не от 1 до" <<
						" 7 то верните текст “это не день недели”.Вместо if в данной задаче используйте switch.\n" <<
						"Введите x:";
					std::string char_x;
					std::cin >> char_x;
					int x;
					try
					{
						x = stoi(char_x);
					}
					catch (std::exception)
					{
						std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
						std::cout << "Данные некорректны.\n";
						continue;
					}
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					std::cout << "Результат: " << day(x) << ".\n";
					break;
				}
				current = 0;
				break;
			case 31:
				while (true)
				{
					std::cout << "Тект задачи:\n" <<
						"Дана сигнатура функции: String listNums (int x);" <<
						" Необходимо реализовать функцию таким образом, чтобы она возвращала строку, в" <<
						" которой будут записаны все числа от 0 до x(включительно).\n" <<
						"Введите x:";
					std::string char_x;
					std::cin >> char_x;
					int x;
					try
					{
						x = stoi(char_x);
					}
					catch (std::exception)
					{
						std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
						std::cout << "Данные некорректны.\n";
						continue;
					}
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					std::cout << "Результат: " << listNums(x) << ".\n";
					break;
				}
				current = 0;
				break;
			case 33:
				while (true)
				{
					std::cout << "Тект задачи:\n" <<
						"Дана сигнатура функции: String chet (int x);" <<
						" Необходимо реализовать функцию таким образом, чтобы она возвращала строку, в" <<
						" которой будут записаны все четные числа от 0 до x(включительно).Подсказа для" <<
						" обеспечения качества кода : инструкцию if использовать не следует.\n" <<
						"Введите x:";
					std::string char_x;
					std::cin >> char_x;
					int x;
					try
					{
						x = stoi(char_x);
					}
					catch (std::exception)
					{
						std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
						std::cout << "Данные некорректны.\n";
						continue;
					}
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					std::cout << "Результат: " << chet(x) << ".\n";
					break;
				}
				current = 0;
				break;
			case 35:
				while (true)
				{
					std::cout << "Тект задачи:\n" <<
						"Дана сигнатура функции: int numLen (long x);" <<
						" Необходимо реализовать функцию таким образом, чтобы она возвращала количество" <<
						" знаков в числе x." <<
						" Подсказка:"
					" Int у = 123 / 10; // у будет иметь значение 12\n" <<
						"Введите x:";
					std::string char_x;
					std::cin >> char_x;
					long x;
					try
					{
						x = stol(char_x);
					}
					catch (std::exception)
					{
						std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
						std::cout << "Данные некорректны.\n";
						continue;
					}
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					std::cout << "Результат: " << numLen(x) << ".\n";
					break;
				}
				current = 0;
				break;
			case 37:
				while (true)
				{
					std::cout << "Тект задачи:\n" <<
						"Дана сигнатура функции: void square (int x);" <<
						" Необходимо реализовать функцию таким образом, чтобы она выводила на экран" <<
						" квадрат из символов ‘ * ’ размером х, у которого х символов в ряд и х символов в высоту. \n" <<
						"Введите x:";
					std::string char_x;
					std::cin >> char_x;
					int x;
					try
					{
						x = stoi(char_x);
					}
					catch (std::exception)
					{
						std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
						std::cout << "Данные некорректны.\n";
						continue;
					}
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					std::cout << "Результат: \n";
					square(x);
					break;
				}
				current = 0;
				break;
			case 39:
				while (true)
				{
					std::cout << "Тект задачи:\n" <<
						"Дана сигнатура функции: void rightTriangle (int x);" <<
						" Необходимо реализовать функцию таким образом, чтобы она выводила на экран" <<
						" треугольник из символов ‘ * ’ у которого х символов в высоту, а количество символов в" <<
						" ряду совпадает с номером строки, при этом треугольник выровнен по правому краю." <<
						"Подсказка: перед символами ‘ * ’ следует выводить необходимое количество пробелов\n" <<
						"Введите x:";
					std::string char_x;
					std::cin >> char_x;
					int x;
					try
					{
						x = stoi(char_x);
					}
					catch (std::exception)
					{
						std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
						std::cout << "Данные некорректны.\n";
						continue;
					}
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					std::cout << "Результат: \n";
					rightTriangle(x);
					break;
				}
				current = 0;
				break;
			case 41:
				while (true)
				{
					std::cout << "Тект задачи:\n" <<
						"Дана сигнатура функции: int findFirst (int arr[], int x);" <<
						" Необходимо реализовать функцию таким образом, чтобы она возвращала индекс" <<
						" первого вхождения числа x в массив arr.Если число не входит в массив – возвращается -" <<
						"1\n";
					int arr[100] = {};
					int length;
					int x;
					while (true)
					{
						std::cout << "Введите длину массива(<100): ";
						std::string char_length;
						std::cin >> char_length;
						try
						{
							length = stoi(char_length);
						}
						catch (std::exception)
						{
							std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
							std::cout << "Данные некорректны.\n";
							continue;
						}
						if (length > 100)
						{
							std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
							std::cout << "Данные некорректны.\n";
							continue;
						}
						std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
						break;
					}
					for (int i = 0; i < length; i++)
					{
						while (true)
						{
							int element;
							std::cout << "Введите элемент " << i << ": ";
							std::string char_element;
							std::cin >> char_element;
							try
							{
								element = stoi(char_element);
							}
							catch (std::exception)
							{
								std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
								std::cout << "Данные некорректны.\n";
								continue;
							}
							arr[i] = element;
							std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
							break;
						}
					}
					while (true)
					{
						std::cout << "Введите x: ";
						std::string char_x;
						std::cin >> char_x;
						try
						{
							x = stoi(char_x);
						}
						catch (std::exception)
						{
							std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
							std::cout << "Данные некорректны.\n";
							continue;
						}
						std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
						break;
					}
					std::cout << "Результат: " << findFirst(arr, length, x) << ".\n";
					break;
				}
				current = 0;
				break;
			case 43:
				while (true)
				{
					std::cout << "Тект задачи:\n" <<
						"Дана сигнатура функции: int maxAbs (int arr[]);" <<
						" Необходимо реализовать функцию таким образом, чтобы она возвращала наибольшее" <<
						" по модулю(то есть без учета знака) значение массива arr\n";
					int arr[100] = {};
					int length;
					while (true)
					{
						std::cout << "Введите длину массива(<100): ";
						std::string char_length;
						std::cin >> char_length;
						try
						{
							length = stoi(char_length);
						}
						catch (std::exception)
						{
							std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
							std::cout << "Данные некорректны.\n";
							continue;
						}
						if (length > 100)
						{
							std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
							std::cout << "Данные некорректны.\n";
							continue;
						}
						std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
						break;
					}
					for (int i = 0; i < length; i++)
					{
						while (true)
						{
							int element;
							std::cout << "Введите элемент " << i << ": ";
							std::string char_element;
							std::cin >> char_element;
							try
							{
								element = stoi(char_element);
							}
							catch (std::exception)
							{
								std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
								std::cout << "Данные некорректны.\n";
								continue;
							}
							arr[i] = element;
							std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
							break;
						}
					}
					std::cout << "Результат: " << maxAbs(arr, length) << ".\n";
					break;
				}
				current = 0;
				break;
			case 45:
				while (true)
				{
					std::cout << "Тект задачи:\n" <<
						"Дана сигнатура функции: int * add (int arr[], int ins[], int pos);" <<
						" Необходимо реализовать функцию таким образом, чтобы она возвращала новый" <<
						" массив, который будет содержать все элементы массива arr, однако в позицию pos" <<
						" будут вставлены значения массива ins.\n";
					int arr[50] = {};
					int arr_length;
					int ins[50] = {};
					int ins_length;
					int pos;
					while (true)
					{
						std::cout << "Введите длину первого массива(<50): ";
						std::string char_length;
						std::cin >> char_length;
						try
						{
							arr_length = stoi(char_length);
						}
						catch (std::exception)
						{
							std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
							std::cout << "Данные некорректны.\n";
							continue;
						}
						if (arr_length > 50)
						{
							std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
							std::cout << "Данные некорректны.\n";
							continue;
						}
						std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
						break;
					}
					for (int i = 0; i < arr_length; i++)
					{
						while (true)
						{
							int element;
							std::cout << "Введите элемент " << i << ": ";
							std::string char_element;
							std::cin >> char_element;
							try
							{
								element = stoi(char_element);
							}
							catch (std::exception)
							{
								std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
								std::cout << "Данные некорректны.\n";
								continue;
							}
							arr[i] = element;
							std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
							break;
						}
					}
					while (true)
					{
						std::cout << "Введите длину второго массива(<50): ";
						std::string char_length;
						std::cin >> char_length;
						try
						{
							ins_length = stoi(char_length);
						}
						catch (std::exception)
						{
							std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
							std::cout << "Данные некорректны.\n";
							continue;
						}
						if (ins_length > 50)
						{
							std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
							std::cout << "Данные некорректны.\n";
							continue;
						}
						std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
						break;
					}
					for (int i = 0; i < ins_length; i++)
					{
						while (true)
						{
							int element;
							std::cout << "Введите элемент " << i << ": ";
							std::string char_element;
							std::cin >> char_element;
							try
							{
								element = stoi(char_element);
							}
							catch (std::exception)
							{
								std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
								std::cout << "Данные некорректны.\n";
								continue;
							}
							ins[i] = element;
							std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
							break;
						}
					}
					while (true)
					{
						std::cout << "Введите pos: ";
						std::string char_x;
						std::cin >> char_x;
						try
						{
							pos = stoi(char_x);
						}
						catch (std::exception)
						{
							std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
							std::cout << "Данные некорректны.\n";
							continue;
						}
						std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
						break;
					}
					int res[100] = {};
					int* p = add(arr, arr_length, ins, ins_length, pos);
					for (int i = 0; i < 100; i++, p++)
					{
						res[i] = *p;
					}
					std::cout << "Результат: ";
					for (int i = 0; i < arr_length + ins_length; i++)
					{
						if (i != 0)
							std::cout << ", ";
						std::cout << res[i];
					}
					std::cout << ".\n";
					break;
				}
				current = 0;
				break;
			case 47:
				while (true)
				{
					std::cout << "Тект задачи:\n" <<
						"Дана сигнатура функции: int * reverseBack (int arr[]);" <<
						" Необходимо реализовать функцию таким образом, чтобы она возвращала новый" <<
						" массив, в котором значения массива arr записаны задом наперед\n";
					int arr[100] = {};
					int length;
					while (true)
					{
						std::cout << "Введите длину массива(<100): ";
						std::string char_length;
						std::cin >> char_length;
						try
						{
							length = stoi(char_length);
						}
						catch (std::exception)
						{
							std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
							std::cout << "Данные некорректны.\n";
							continue;
						}
						if (length > 100)
						{
							std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
							std::cout << "Данные некорректны.\n";
							continue;
						}
						std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
						break;
					}
					for (int i = 0; i < length; i++)
					{
						while (true)
						{
							int element;
							std::cout << "Введите элемент " << i << ": ";
							std::string char_element;
							std::cin >> char_element;
							try
							{
								element = stoi(char_element);
							}
							catch (std::exception)
							{
								std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
								std::cout << "Данные некорректны.\n";
								continue;
							}
							arr[i] = element;
							std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
							break;
						}
					}
					int res[100] = {};
					int* p = reverseBack(arr, length);
					for (int i = 0; i < 100; i++, p++)
					{
						res[i] = *p;
					}
					std::cout << "Результат: ";
					for (int i = 0; i < length; i++)
					{
						if (i != 0)
							std::cout << ", ";
						std::cout << res[i];
					}
					std::cout << ".\n";
					break;
				}
				current = 0;
				break;
			case 49:
				while (true)
				{
					std::cout << "Тект задачи:\n" <<
						"Дана сигнатура функции: int * findAll (int arr[], int x);" <<
						" Необходимо реализовать функцию таким образом, чтобы она возвращала новый" <<
						" массив, в котором записаны индексы всех вхождений числа x в массив arr.\n";
					int arr[100] = {};
					int length;
					int x;
					while (true)
					{
						std::cout << "Введите длину массива(<100): ";
						std::string char_length;
						std::cin >> char_length;
						try
						{
							length = stoi(char_length);
						}
						catch (std::exception)
						{
							std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
							std::cout << "Данные некорректны.\n";
							continue;
						}
						if (length > 100)
						{
							std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
							std::cout << "Данные некорректны.\n";
							continue;
						}
						std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
						break;
					}
					for (int i = 0; i < length; i++)
					{
						while (true)
						{
							int element;
							std::cout << "Введите элемент " << i << ": ";
							std::string char_element;
							std::cin >> char_element;
							try
							{
								element = stoi(char_element);
							}
							catch (std::exception)
							{
								std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
								std::cout << "Данные некорректны.\n";
								continue;
							}
							arr[i] = element;
							std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
							break;
						}
					}
					while (true)
					{
						std::cout << "Введите x: ";
						std::string char_x;
						std::cin >> char_x;
						try
						{
							x = stoi(char_x);
						}
						catch (std::exception)
						{
							std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
							std::cout << "Данные некорректны.\n";
							continue;
						}
						std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
						break;
					}
					int res[100] = {};
					int* p = findAll(arr, length, x);
					for (int i = 0; i < 100; i++, p++)
					{
						res[i] = *p;
					}
					std::cout << "Результат: ";
					for (int i = 0; i < length; i++)
					{
						if (i != 0)
							std::cout << ", ";
						std::cout << res[i];
					}
					std::cout << ".\n";
					break;
				}
				current = 0;
				break;
			default:
				break;
			}
		}
	}

	return 0;
}