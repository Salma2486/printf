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
	if (!format || (format[0] == '%' && !format[1]))
	{
		va_end(args);
		return (-1);
	}
	if (!format[0])
	{
		va_end(args);
		return (0);
	}
	length = handle_format(format, args);
	va_end(args);
	return (length);
}
