#include "main.h"
/**
 * _puts - adwwadawda
 * @str:dawdadaw
 * Return: 0
 */
int _puts(char *str)
{
	int i = 0, b = 0;
	char *x = "(null)";

	if (!str)
	{
		for (int s = 0 ; s < 6 ; s++)
			putchr(x[s]);
	}
	i = 0;
	while (str[i] != '\0')
	{
		putchr(str[i]);
		b++;
		i++;
	}
	return (b);
}
