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
int printInteger(int num);
#endif
