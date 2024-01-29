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
			write(1, format, 1);
			no_of_char++;
		}
		else
		{
			format++;
			if (*format == '\0')
				return (-1);
			if (*format == 'c')
			{
				_printf_char(va_arg(ap, int));
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
