#include "holberton.h"

/**
 * more_numbers - prints more numbers
 * Return: none
 */
void more_numbers(void)
{
	int a;

	for (a = 0; a <= 14; a++)
	{
		if (a >= 10)
		{
			_putchar((a / 10) + '0');
		}
		_putchar((a % 10) + '0');
	}
	_putchar('\n');
}