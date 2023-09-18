#ifndef _MAIN_H
#define _MAIN_H
#define BUFF_SIZE 1024
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <stdbool.h>
int _printf(const char *format, ...);
int putchr(char z);
int _puts(char *string);
char *print_int(int n);
int printBinary(unsigned int num);
int handle_format(const char *format, va_list args);
#endif
