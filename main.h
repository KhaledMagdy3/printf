#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int _printf(const char *format, ...);
int print_casses(char format , va_list ap);
int _printf_char(int ch);
int _print_str(char *str);
int print_digit(long n, int base);
int _print_binary(int num);

#endif /* MAIN_H */