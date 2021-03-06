#include "pch.h"
#include <locale.h>
#include <stdio.h>
#include <conio.h>

float Input();
void PrintMenu();

int main()
{
	setlocale(LC_ALL, "Russian");
	bool help = true;
	int choice = 0;
	char check = '\0';
	while (help)
	{
		PrintMenu();
		printf_s("Выш выбор: ");
		while (scanf_s("%d%c", &choice, &check, 1) != 2 || check != '\n' || choice <= 0)
		{
			printf_s("Ошибка, попробуйте используя только положительные числа\n");
			while (getchar() != '\n');
		}
		if (choice == 1)
		{
			float x2 = Input() / 2.54;
			printf_s("Это в дюймах: %f\n", x2);
		}
		else if (choice == 2)
		{
			float x2 = Input() * 2.54;
			printf_s("Это в сантиметрах: %f\n", x2);
		}
		else if (choice == 3)
		{
			float x2 = Input() * 0.621371;
			printf_s("Это в милях: %f\n", x2);
		}
		else if (choice == 4)
		{
			float x2 = Input() * 1.60934;
			printf_s("Это в километрах: %f\n", x2);
		}
		else if (choice == 5)
		{
			help = false;
		}
	}
	printf_s("\nНажмите любую клавишу для выхода из программы\n");
	getchar();
	return 0;
}

float Input()
{
	char check = '\0';
	float x1 = 0;
	while (scanf_s("%f%c", &x1, &check, 1) != 2 || check != '\n' || x1 <= 0)
	{
		printf_s("Ошибка, попробуйте используя только положительные числа\n");
		while (getchar() != '\n');
	}
	return x1;
}
void PrintMenu()
{
	printf_s("\t\tПрограмма для перевода различных мер длины\n");
	printf_s("\t\t*1 - Перевод сантиметров в дюймы\n");
	printf_s("\t\t*2 - Перевод дюймов в сантиметры\n");
	printf_s("\t\t*3 - Перевод километров в мили\n");
	printf_s("\t\t*4 - Перевод миль в километры\n");
	printf_s("\t\t*5 - Выход из программы\n");
}