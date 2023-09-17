#ifndef _MAIN_H
#define _MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>

int _printf(const char *format, ...);
int putchr(char z);
int  my_printf(const char *format, ...);
int put_s(char *string);
int put_int(int integer);
int my_puts(char *string);
void get_int(int num);
#endif
