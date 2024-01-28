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
				_printf_char(va_arg(ap, int));
				no_of_char++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(ap, char *);
				int str_len = 0;

				while (str[str_len] != '\0')
					str_len++;

				write(1, str, str_len);
				no_of_char += str_len;
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
