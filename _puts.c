#include "main.h"
/**
 * _puts - adwwadawda
 * @str:dawdadaw
 * Return: 0
 */
int _puts(char *str)
{
	int i = 0, b = 0, s;
	char *x = "(null)";

	if (!str)
	{
		for (s = 0 ; s < 6 ; s++)
			putchr(x[s]);
		return (s);
	}
	while (str[i] != '\0')
	{
		putchr(str[i]);
		b++;
		i++;
	}
	return (b);
}
