#include "main.h"

/**
 * _print_str - _print_str
 *
 * @str: char
 *
 * Return: int
*/

int _print_str(char *str)
{
/**
 *			else if (*format == 's')
 *			{
 *				char *str = va_arg(ap, char *);
 *
 *				write(1, str, strlen(str));
 *				no_of_char += strlen(str);
 *			}
*/
	int no_of_char;

	if (str == NULL)
		str = "(null)";

	no_of_char = strlen(str);
	write(STDOUT_FILENO, str, no_of_char);

	return (no_of_char);
}
