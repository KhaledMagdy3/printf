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
	return (write(STDOUT_FILENO, &ch, 1));
}
