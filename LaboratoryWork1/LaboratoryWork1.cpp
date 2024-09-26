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
			std::cout << "����� ���������� � ������������ ������ 1!\n" <<
				"����������, ������� ����� ������� (1-4) (����� ����� ������� 'q'):\n" <<
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
				std::cout << "������ �����������.\n";
				continue;
			}
		}
		else if (1 <= current && current <= 4)
		{
			while (true)
			{
				if (1 <= current && current <= 4)
				{
					std::cout << "����� ���������� � ������� " << current << "!\n" <<
						"����������, ������� ����� ������ (1, 3, 5, 7, 9) (����� ����� ������� 'q'):\n" <<
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
						std::cout << "������ �����������.\n";
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
					std::cout << "���� ������:\n" <<
						"���� ��������� �������: double fraction (double x);" <<
						" ���������� ����������� ������� ����� �������, ����� ��� ���������� ������ ������� ����� ����� �.\n" <<
						"������� x: ";
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
						std::cout << "������ �����������.\n";
						continue;
					}
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					std::cout << "���������: " << fraction(x) << ".\n";
					break;
				}
				current = 0;
				break;
			case 13:
				while (true)
				{
					std::cout << "���� ������:\n" <<
						"���� ��������� �������: int charToNum (char x);" <<
						" ������� ��������� ������ �, ������� ������������ ����� ���� �� \"0 1 2 3 4 5 6 7 8 9\"." <<
						" ���������� ����������� ������� ����� �������, ����� ��� ��������������� ������" <<
						" � ��������������� �����.\n" <<
						"������� x: ";
					char char_x;
					std::cin >> char_x;
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					int x = charToNum(char_x);
					if (0 <= x && x <= 9)
						std::cout << "���������: " << x << ".\n";
					else
					{
						std::cout << "������ �����������.\n";
						continue;
					}
					break;
				}
				current = 0;
				break;
			case 15:
				while (true)
				{
					std::cout << "���� ������:\n" <<
						"���� ��������� �������: bool is2Digits (int x);" <<
						" ���������� ����������� ������� ����� �������, ����� ��� ��������� ����� x �" <<
						" ���������� true, ���� ��� ����������.\n" <<
						"������� x: ";
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
						std::cout << "������ �����������.\n";
						continue;
					}
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					int res = is2Digits(x);
					std::cout << "���������: " << (res == 0 ? "false" : "true") << ".\n";
					break;
				}
				current = 0;
				break;
			case 17:
				while (true)
				{
					std::cout << "���� ������:\n" <<
						"���� ��������� �������: bool isInRange (int a, int b, int num);" <<
						" ������� ��������� ����� � ������ �������(a � b) ���������� ��������� ���������." <<
						" ���������� ����������� ������� ����� �������, ����� ��� ���������� true, ����" <<
						" num ������ � ��������� ��������(������� �������).�������� ��������, ���" <<
						" ��������� a � b ������� ����������(������ ��� �� ��� ������, � ��� ������)" <<
						"\n";
					int a, b, num;
					while (true)
					{
						std::cout << "������� a:";
						std::string char_a;
						std::cin >> char_a;
						try
						{
							a = stoi(char_a);
						}
						catch (std::exception)
						{
							std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
							std::cout << "������ �����������.\n";
							continue;
						}
						std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
						break;
					}
					while (true)
					{
						std::cout << "������� b:";
						std::string char_b;
						std::cin >> char_b;
						try
						{
							b = stoi(char_b);
						}
						catch (std::exception)
						{
							std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
							std::cout << "������ �����������.\n";
							continue;
						}
						std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
						break;
					}
					while (true)
					{
						std::cout << "������� num:";
						std::string char_num;
						std::cin >> char_num;
						try
						{
							num = stoi(char_num);
						}
						catch (std::exception)
						{
							std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
							std::cout << "������ �����������.\n";
							continue;
						}
						std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
						break;
					}
					std::cout << "���������: " << (isInRange(a, b, num) == 0 ? "false" : "true") << ".\n";
					break;
				}
				current = 0;
				break;
			case 19:
				while (true)
				{
					std::cout << "���� ������:\n" <<
						"���� ��������� �������: bool isEqual(int a, int b, int c);" <<
						" ���������� ����������� ������� ����� �������, ����� ��� ���������� true, ���� ���" <<
						" ��� ���������� �������� ����� �����\n";
					int a, b, c;
					while (true)
					{
						std::cout << "������� a:";
						std::string char_a;
						std::cin >> char_a;
						try
						{
							a = stoi(char_a);
						}
						catch (std::exception)
						{
							std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
							std::cout << "������ �����������.\n";
							continue;
						}
						std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
						break;
					}
					while (true)
					{
						std::cout << "������� b:";
						std::string char_b;
						std::cin >> char_b;
						try
						{
							b = stoi(char_b);
						}
						catch (std::exception)
						{
							std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
							std::cout << "������ �����������.\n";
							continue;
						}
						std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
						break;
					}
					while (true)
					{
						std::cout << "������� c:";
						std::string char_c;
						std::cin >> char_c;
						try
						{
							c = stoi(char_c);
						}
						catch (std::exception)
						{
							std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
							std::cout << "������ �����������.\n";
							continue;
						}
						std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
						break;
					}
					std::cout << "���������: " << (isEqual(a, b, c) == 0 ? "false" : "true") << ".\n";
					break;
				}
				current = 0;
				break;
			case 21:
				while (true)
				{
					std::cout << "���� ������:\n" <<
						"���� ��������� �������: int abs (int x);" <<
						" ���������� ����������� ������� ����� �������, ����� ��� ���������� ������ �����" <<
						" �(���� ��� ���� �������������, �� ����� � ��������, ���� �� ���� ������������� �" <<
							" �� ���������� ������� ��� ��� ����� �����).\n" <<
						"������� x:";
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
						std::cout << "������ �����������.\n";
						continue;
					}
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					std::cout << "���������: " << customAbs(x) << ".\n";
					break;
				}
				current = 0;
				break;
			case 23:
				while (true)
				{
					std::cout << "���� ������:\n" <<
						"���� ��������� �������: bool is35 (int x);" <<
						" ���������� ����������� ������� ����� �������, ����� ��� ���������� true, ����" <<
						" ����� x ������� ������ �� 3 ��� 5. ��� ����, ���� ��� ������� � �� 3, � �� 5, �� �������" <<
						" ���� false.���������: �������� % ��������� �������� ������� �� �������.\n" <<
						"������� x:";
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
						std::cout << "������ �����������.\n";
						continue;
					}
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					std::cout << "���������: " << (is35(x) == 0 ? "false" : "true") << ".\n";
					break;
				}
				current = 0;
				break;
			case 25:
				while (true)
				{

					std::cout << "���� ������:\n" <<
						"���� ��������� �������: int max3 (int x, int y, int z);" <<
						" ���������� ����������� ������� ����� �������, ����� ��� ����������" <<
						" ������������ �� ���� ���������� �������� �����.���������: ��������� �������" <<
						" �������� ����� ��� ���������� if � �� �������� ��������� if.\n";
					int x, y, z;
					while (true)
					{
						std::cout << "������� x:";
						std::string char_x;
						std::cin >> char_x;
						try
						{
							x = stoi(char_x);
						}
						catch (std::exception)
						{
							std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
							std::cout << "������ �����������.\n";
							continue;
						}
						std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
						break;
					}
					while (true)
					{
						std::cout << "������� y:";
						std::string char_y;
						std::cin >> char_y;
						try
						{
							y = stoi(char_y);
						}
						catch (std::exception)
						{
							std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
							std::cout << "������ �����������.\n";
							continue;
						}
						std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
						break;
					}
					while (true)
					{
						std::cout << "������� z:";
						std::string char_z;
						std::cin >> char_z;
						try
						{
							z = stoi(char_z);
						}
						catch (std::exception)
						{
							std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
							std::cout << "������ �����������.\n";
							continue;
						}
						std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
						break;
					}
					std::cout << "���������: " << max3(x, y, z) << ".\n";
					break;
				}
				current = 0;
				break;
			case 27:
				while (true)
				{

					std::cout << "���� ������:\n" <<
						"���� ��������� �������: int sum2 (int x, int y);" <<
						" ���������� ����������� ������� ����� �������, ����� ��� ���������� ����� ����� x" <<
						" � y. ������, ���� ����� �������� � �������� �� 10 �� 19, �� ���� ������� ����� 20.\n";
					int x, y;
					while (true)
					{
						std::cout << "������� x:";
						std::string char_x;
						std::cin >> char_x;
						try
						{
							x = stoi(char_x);
						}
						catch (std::exception)
						{
							std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
							std::cout << "������ �����������.\n";
							continue;
						}
						std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
						break;
					}
					while (true)
					{
						std::cout << "������� y:";
						std::string char_y;
						std::cin >> char_y;
						try
						{
							y = stoi(char_y);
						}
						catch (std::exception)
						{
							std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
							std::cout << "������ �����������.\n";
							continue;
						}
						std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
						break;
					}
					std::cout << "���������: " << sum2(x, y) << ".\n";
					break;
				}
				current = 0;
				break;
			case 29:
				while (true)
				{
					std::cout << "���� ������:\n" <<
						"���� ��������� �������: String day (int x);" <<
						" ������� ��������� ����� x, ������������ ���� ������.���������� �����������" <<
						" ������� ����� �������, ����� ��� ���������� ������, ������� ����� ����������" <<
						" ������� ���� ������, ��� 1 � ��� �����������, � 7 � �����������.���� ����� �� �� 1 ��" <<
						" 7 �� ������� ����� ���� �� ���� ������.������ if � ������ ������ ����������� switch.\n" <<
						"������� x:";
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
						std::cout << "������ �����������.\n";
						continue;
					}
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					std::cout << "���������: " << day(x) << ".\n";
					break;
				}
				current = 0;
				break;
			case 31:
				while (true)
				{
					std::cout << "���� ������:\n" <<
						"���� ��������� �������: String listNums (int x);" <<
						" ���������� ����������� ������� ����� �������, ����� ��� ���������� ������, �" <<
						" ������� ����� �������� ��� ����� �� 0 �� x(������������).\n" <<
						"������� x:";
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
						std::cout << "������ �����������.\n";
						continue;
					}
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					std::cout << "���������: " << listNums(x) << ".\n";
					break;
				}
				current = 0;
				break;
			case 33:
				while (true)
				{
					std::cout << "���� ������:\n" <<
						"���� ��������� �������: String chet (int x);" <<
						" ���������� ����������� ������� ����� �������, ����� ��� ���������� ������, �" <<
						" ������� ����� �������� ��� ������ ����� �� 0 �� x(������������).�������� ���" <<
						" ����������� �������� ���� : ���������� if ������������ �� �������.\n" <<
						"������� x:";
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
						std::cout << "������ �����������.\n";
						continue;
					}
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					std::cout << "���������: " << chet(x) << ".\n";
					break;
				}
				current = 0;
				break;
			case 35:
				while (true)
				{
					std::cout << "���� ������:\n" <<
						"���� ��������� �������: int numLen (long x);" <<
						" ���������� ����������� ������� ����� �������, ����� ��� ���������� ����������" <<
						" ������ � ����� x." <<
						" ���������:"
					" Int � = 123 / 10; // � ����� ����� �������� 12\n" <<
						"������� x:";
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
						std::cout << "������ �����������.\n";
						continue;
					}
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					std::cout << "���������: " << numLen(x) << ".\n";
					break;
				}
				current = 0;
				break;
			case 37:
				while (true)
				{
					std::cout << "���� ������:\n" <<
						"���� ��������� �������: void square (int x);" <<
						" ���������� ����������� ������� ����� �������, ����� ��� �������� �� �����" <<
						" ������� �� �������� � * � �������� �, � �������� � �������� � ��� � � �������� � ������. \n" <<
						"������� x:";
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
						std::cout << "������ �����������.\n";
						continue;
					}
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					std::cout << "���������: \n";
					square(x);
					break;
				}
				current = 0;
				break;
			case 39:
				while (true)
				{
					std::cout << "���� ������:\n" <<
						"���� ��������� �������: void rightTriangle (int x);" <<
						" ���������� ����������� ������� ����� �������, ����� ��� �������� �� �����" <<
						" ����������� �� �������� � * � � �������� � �������� � ������, � ���������� �������� �" <<
						" ���� ��������� � ������� ������, ��� ���� ����������� �������� �� ������� ����." <<
						"���������: ����� ��������� � * � ������� �������� ����������� ���������� ��������\n" <<
						"������� x:";
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
						std::cout << "������ �����������.\n";
						continue;
					}
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					std::cout << "���������: \n";
					rightTriangle(x);
					break;
				}
				current = 0;
				break;
			case 41:
				while (true)
				{
					std::cout << "���� ������:\n" <<
						"���� ��������� �������: int findFirst (int arr[], int x);" <<
						" ���������� ����������� ������� ����� �������, ����� ��� ���������� ������" <<
						" ������� ��������� ����� x � ������ arr.���� ����� �� ������ � ������ � ������������ -" <<
						"1\n";
					int arr[100] = {};
					int length;
					int x;
					while (true)
					{
						std::cout << "������� ����� �������(<100): ";
						std::string char_length;
						std::cin >> char_length;
						try
						{
							length = stoi(char_length);
						}
						catch (std::exception)
						{
							std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
							std::cout << "������ �����������.\n";
							continue;
						}
						if (length > 100)
						{
							std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
							std::cout << "������ �����������.\n";
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
							std::cout << "������� ������� " << i << ": ";
							std::string char_element;
							std::cin >> char_element;
							try
							{
								element = stoi(char_element);
							}
							catch (std::exception)
							{
								std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
								std::cout << "������ �����������.\n";
								continue;
							}
							arr[i] = element;
							std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
							break;
						}
					}
					while (true)
					{
						std::cout << "������� x: ";
						std::string char_x;
						std::cin >> char_x;
						try
						{
							x = stoi(char_x);
						}
						catch (std::exception)
						{
							std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
							std::cout << "������ �����������.\n";
							continue;
						}
						std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
						break;
					}
					std::cout << "���������: " << findFirst(arr, length, x) << ".\n";
					break;
				}
				current = 0;
				break;
			case 43:
				while (true)
				{
					std::cout << "���� ������:\n" <<
						"���� ��������� �������: int maxAbs (int arr[]);" <<
						" ���������� ����������� ������� ����� �������, ����� ��� ���������� ����������" <<
						" �� ������(�� ���� ��� ����� �����) �������� ������� arr\n";
					int arr[100] = {};
					int length;
					while (true)
					{
						std::cout << "������� ����� �������(<100): ";
						std::string char_length;
						std::cin >> char_length;
						try
						{
							length = stoi(char_length);
						}
						catch (std::exception)
						{
							std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
							std::cout << "������ �����������.\n";
							continue;
						}
						if (length > 100)
						{
							std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
							std::cout << "������ �����������.\n";
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
							std::cout << "������� ������� " << i << ": ";
							std::string char_element;
							std::cin >> char_element;
							try
							{
								element = stoi(char_element);
							}
							catch (std::exception)
							{
								std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
								std::cout << "������ �����������.\n";
								continue;
							}
							arr[i] = element;
							std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
							break;
						}
					}
					std::cout << "���������: " << maxAbs(arr, length) << ".\n";
					break;
				}
				current = 0;
				break;
			case 45:
				while (true)
				{
					std::cout << "���� ������:\n" <<
						"���� ��������� �������: int * add (int arr[], int ins[], int pos);" <<
						" ���������� ����������� ������� ����� �������, ����� ��� ���������� �����" <<
						" ������, ������� ����� ��������� ��� �������� ������� arr, ������ � ������� pos" <<
						" ����� ��������� �������� ������� ins.\n";
					int arr[50] = {};
					int arr_length;
					int ins[50] = {};
					int ins_length;
					int pos;
					while (true)
					{
						std::cout << "������� ����� ������� �������(<50): ";
						std::string char_length;
						std::cin >> char_length;
						try
						{
							arr_length = stoi(char_length);
						}
						catch (std::exception)
						{
							std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
							std::cout << "������ �����������.\n";
							continue;
						}
						if (arr_length > 50)
						{
							std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
							std::cout << "������ �����������.\n";
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
							std::cout << "������� ������� " << i << ": ";
							std::string char_element;
							std::cin >> char_element;
							try
							{
								element = stoi(char_element);
							}
							catch (std::exception)
							{
								std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
								std::cout << "������ �����������.\n";
								continue;
							}
							arr[i] = element;
							std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
							break;
						}
					}
					while (true)
					{
						std::cout << "������� ����� ������� �������(<50): ";
						std::string char_length;
						std::cin >> char_length;
						try
						{
							ins_length = stoi(char_length);
						}
						catch (std::exception)
						{
							std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
							std::cout << "������ �����������.\n";
							continue;
						}
						if (ins_length > 50)
						{
							std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
							std::cout << "������ �����������.\n";
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
							std::cout << "������� ������� " << i << ": ";
							std::string char_element;
							std::cin >> char_element;
							try
							{
								element = stoi(char_element);
							}
							catch (std::exception)
							{
								std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
								std::cout << "������ �����������.\n";
								continue;
							}
							ins[i] = element;
							std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
							break;
						}
					}
					while (true)
					{
						std::cout << "������� pos: ";
						std::string char_x;
						std::cin >> char_x;
						try
						{
							pos = stoi(char_x);
						}
						catch (std::exception)
						{
							std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
							std::cout << "������ �����������.\n";
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
					std::cout << "���������: ";
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
					std::cout << "���� ������:\n" <<
						"���� ��������� �������: int * reverseBack (int arr[]);" <<
						" ���������� ����������� ������� ����� �������, ����� ��� ���������� �����" <<
						" ������, � ������� �������� ������� arr �������� ����� �������\n";
					int arr[100] = {};
					int length;
					while (true)
					{
						std::cout << "������� ����� �������(<100): ";
						std::string char_length;
						std::cin >> char_length;
						try
						{
							length = stoi(char_length);
						}
						catch (std::exception)
						{
							std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
							std::cout << "������ �����������.\n";
							continue;
						}
						if (length > 100)
						{
							std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
							std::cout << "������ �����������.\n";
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
							std::cout << "������� ������� " << i << ": ";
							std::string char_element;
							std::cin >> char_element;
							try
							{
								element = stoi(char_element);
							}
							catch (std::exception)
							{
								std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
								std::cout << "������ �����������.\n";
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
					std::cout << "���������: ";
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
					std::cout << "���� ������:\n" <<
						"���� ��������� �������: int * findAll (int arr[], int x);" <<
						" ���������� ����������� ������� ����� �������, ����� ��� ���������� �����" <<
						" ������, � ������� �������� ������� ���� ��������� ����� x � ������ arr.\n";
					int arr[100] = {};
					int length;
					int x;
					while (true)
					{
						std::cout << "������� ����� �������(<100): ";
						std::string char_length;
						std::cin >> char_length;
						try
						{
							length = stoi(char_length);
						}
						catch (std::exception)
						{
							std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
							std::cout << "������ �����������.\n";
							continue;
						}
						if (length > 100)
						{
							std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
							std::cout << "������ �����������.\n";
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
							std::cout << "������� ������� " << i << ": ";
							std::string char_element;
							std::cin >> char_element;
							try
							{
								element = stoi(char_element);
							}
							catch (std::exception)
							{
								std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
								std::cout << "������ �����������.\n";
								continue;
							}
							arr[i] = element;
							std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
							break;
						}
					}
					while (true)
					{
						std::cout << "������� x: ";
						std::string char_x;
						std::cin >> char_x;
						try
						{
							x = stoi(char_x);
						}
						catch (std::exception)
						{
							std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
							std::cout << "������ �����������.\n";
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
					std::cout << "���������: ";
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