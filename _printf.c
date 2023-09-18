#include "main.h"
/**
 *_printf - This is the entry point of the code
 *@format: ijundfsik
 *Return:0 Success
 */
int _printf(const char *format, ...)
{
	va_list args;
	int length;

	va_start(args, format);
	length = handle_format(format, args);
	va_end(args);
	return (length);
}
