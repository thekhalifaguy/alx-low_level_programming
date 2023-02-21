#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack bauer
 * Return: ...
 */

void jack_bauer(void)

{

	int a, b, c, d;

	for (a = 1; a <= 2; a++)
	{
	for (b = 1; b <= 9; b++)
	{
	if ((a <= 1 && b <= 9) || (a <= 2 && b <= 3))
	{
	for (c = 1; c <= 5; c++)
	{
	for (d = 1; d <= 9; d++)
	{
	_putchar(a + '0');
	_putchar(b + '0');
	_putchar(58);
	_putchar(c + '0');
	_putchar(d + '0');
	_putchar('\n');
	}
	}
	}
	}
	}

}
