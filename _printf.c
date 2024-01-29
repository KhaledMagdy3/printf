#include "main.h"

/**
 * _printf - printf function
 *
 * @format: char *
 *
 * Return: int
*/

int _printf(const char *format, ...)
{
	int no_of_char = 0;
	va_list ap;

	va_start(ap, format);

	if (format == NULL)
		return (-1);

	while (*format != '\0')
	{
		if (*format != '%')
		{
			no_of_char += write(1, format, 1);
		}
		else
		{
			format++;
			no_of_char += print_casses(format, ap);
		}

		format++;
	}

	va_end(ap);

	return (no_of_char);
}
