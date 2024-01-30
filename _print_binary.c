#include "main.h"

/**
 * _print_binary - function to print binary
 *
 * @num: int
 *
 * Return: int
*/

int _print_binary(int num)
{
	if (num == 0)
	{
		putchar('0');
		return (1);
	}

	_print_binary(num / 2);
	putchar('0' + num % 2);

	return (2);
}
