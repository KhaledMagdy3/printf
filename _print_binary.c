#include "main.h"



int _print_binary(int num)
{
	if (num == 0)
	{
		putchar('0');
		return;
	}

	print_binary(num / 2);
	putchar('0' + num % 2);

	return (2);
}
