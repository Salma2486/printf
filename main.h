#ifndef _MAIN_H
#define _MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <limits.h>
#include <stdlib>

int _printf(const char *format, ...);
int putchr(char z);
int put_s(char *string);
void get_int(int num);
#endif
