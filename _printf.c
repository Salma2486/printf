#include "main.h"
/**
 *_printf - This is the entry point of the code
 *@format: kjnfvj
 *Return:0 Success
 */
int _printf(const char *format, ...)
{
	int i;
	char *ch;
	va_list args;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	for (i = 0 ; i < strlen(format) ; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 's'){
				ch = va_arg(args, char *);
				write(1, ch, strlen(ch));
			}
			else if (format[i] == 'c'){
				ch = va_arg(args, char*);
				write(1, &ch , 1);
			}
			else{
				write(1, &format[i] ,1);
				i++;
			}
		}
		else{
			write(1, &format[i] , 1);
		}
	}
	va_end(args);
	return (0);
}
