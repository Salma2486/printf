#include "main.h"
/**
 *_printf - dawddw
 *@format:dwadwa
 *Return:dwad
 */
int _printf(const char *format, ...)
{
	unsigned int h = 0, r_value = 0;
	int r_val;
	char *c;
	va_list args;

	va_start(args, format);

	if (!format || (format[h] == '%' && !format[h + 1]))
		return (-1);
	if (!format[h])
		return (0);
	for ( ; format[h] != '\0' ; h++)
	{
		if (format[h] != '%')
		{
			write(1, &format[h], 1);
		}
		else if (format[h + 1] == 'c')
		{
			c = va_arg(args, char *);
			write(1, &c, 1);
			h++;
		}
		else if (format[h + 1] == 's')
		{
			c = va_arg(args, char *);
			write(1, c, strlen(c));
			r_val = strlen(c);
			h++;
			r_value += r_val;
		}
		else if (format[h + 1] == '%')
		{
			write(1, "%", 1);
			h++;
		}
		r_value += 1;
	}
	return (r_value);
}
