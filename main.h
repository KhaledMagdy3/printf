#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


int _printf(const char *format, ...);
int print_casses(char format , va_list ap);
int _print_str(char *str);

#endif /* MAIN_H */