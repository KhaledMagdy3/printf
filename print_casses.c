#include "main.h"

/**
 * print_casses - print_casses
 *
 * @format: char
 * @ap: va_list
 *
 * Return: int
*/

int print_casses(char format, va_list ap)
{
	int no_of_char = 0;

	if (format == '\0')
		return (-1);

	else if (format == 'c')
		no_of_char += _printf_char(va_arg(ap, int));

	else if (format == 's')
		no_of_char += _print_str(va_arg(ap, char *));

	else if (format == '%')
		no_of_char += write(STDOUT_FILENO, &format, 1);

	else if ((format == 'd') || (format == 'i'))
		no_of_char += print_digit((long)(va_arg(ap, int)), 10);

	else
		no_of_char += write(STDOUT_FILENO, &format, 1);

	return (no_of_char);
}
