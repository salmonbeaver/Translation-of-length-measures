#include "pch.h"
#include <locale.h>
#include <stdio.h>
#include <conio.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	float cm = 0;
	printf_s("Введите количество сантиметров для перевода в дюймы: ");
	scanf_s("%f", &cm);
	float inch = cm / 2.54;
	printf_s("Это в дюймах: %f ", inch);
	printf_s("\nНажмите любую клавишу для выхода из программы\n");
	getchar();
	return 0;
}
