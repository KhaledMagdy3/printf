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
	int no_of_char = 0;

	if (str == NULL)
		str = "(null)";

	while (*str != '\0')
	{
		_printf_char((int)*str);
		no_of_char++;
		str++;
	}

	return (no_of_char);
}
