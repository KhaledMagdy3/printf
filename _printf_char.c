#include "main.h"

/**
 * _printf_char - function to deal with c
 *
 * @ch: int
 *
 * Return: int
*/
int _printf_char(int ch)
{
	return (write(1, &ch, 1));
}
