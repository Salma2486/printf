#include "main.h"
/**
 *_printf - This is the entry point of the code
 *@format: jnfjw
 *Return:0 Success
 */
int _printf(const char *format, ...)
{
	char *ch;
	char *str;
	va_list args;
	int str_len = 0;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{ format++;
			if (*format == '\0')
				break;
			if (*format == 'c')
			{ ch = va_arg(args, char *);
				write(1, &ch, 1);
				format++; }
			else if (*format == 's')
			{ str = va_arg(args, char *);
				while (str[str_len] != '\0')
					str_len++;
				write(1, str, str_len);
				format += str_len; }
			else if (*format == '%')
			{ write(1, format, 1);
				format++; }
		}
		else
		{ write(1, format, 1);
			format++; }
	}
	va_end(args);
	return (*format);
}
