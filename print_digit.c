#include "main.h"

/**
 * print_digit - print_digit
 *
 * @n: long
 * @base: int
 *
 * Return: int
*/

int print_digit(long n, int base)
{
    int no_of_char;
    char *symbols;

    symbols = "0123456789abcdef";
    if (n < 0)
    {
        write(1, "-", 1);
        return (print_digit(-n, base) + 1);
    }
    else if (n < base)
    {
        return (_printf_char(symbols[n]));
    }
    else
    {
        no_of_char = print_digit(n / base, base);
        return (no_of_char + print_digit(n % base, base));
    }
}
