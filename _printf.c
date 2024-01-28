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

	if (format == NULL)
		return (-1);
	va_start(ap, format);
	while (*format != '\0')
	{
		if (*format != '%')
		{
			write(1, format, 1);
			no_of_char++;
		}
		else
		{
			format++;
			if (*format == '\0')
				break;
			if (*format == 'c')
			{
				write(1, va_arg(ap, int), 1);
				no_of_char++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(ap, char *);

				write(1, str, strlen(str));
				no_of_char += strlen(str);
			}
			else if (*format == '%')
			{
				write(1, format, 1);
				no_of_char++;
			}
		}
		format++;
	}
	va_end(ap);
	return (no_of_char);
}
