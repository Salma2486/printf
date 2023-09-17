#include "main.h"
/**
 *_printf - dawddw
 *@format:dwadwa
 *Return:dwad
 */
int _printf(const char *format, ...)
{
	unsigned int h = 0, r_value = 0;
	va_list args;

	va_start(args, format);
	if (!format || (format[h] == '%' && !format[h + 1]))
		return (-1);
	if (!format[h])
		return (-1);
	for ( ; format[h] != '\0' ; h++)
	{
		if (format[h] != '%')
		{
			putchr(format[h]);
		}
		else if (format[h + 1] == 'c')
		{
			putchr(va_arg(args, int));
			h++;
		}
		else if (format[h + 1] == 's')
		{
			int r_val = put_s(va_arg(args, char *));

			if (!va_arg(args, char *))
				return (-1)
			h++;
			r_value += (r_val - 1);
		}
		else if (format[h + 1] == '%')
		{
			putchr('%');
			h++;
		}
		r_value += 1;
	}
	va_end(args);
	return (r_value);
}
