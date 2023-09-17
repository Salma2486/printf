#include "main.h"
/**
 * _puts - adwwadawda
 * @str:dawdadaw
 * Return: 0
 */
int _puts(char *str)
{
	int i = 0, b = 0;

	if (str)
	{
		while (str[i] != '\0')
		{
			putchr(str[i]);
			b++;
			i++;
		}
	}
	return (b);
}
