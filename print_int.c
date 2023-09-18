#include "main.h"
/**
 * *print_int - dwdwd
 * @n: wadadwadd
 * Return: str
 */
char *print_int(int n)
{
	static char str[BUFF_SIZE], temp;
	int i, j;

	memset(str, 0, sizeof(str));
	if (n == 0)
		putchr('0');
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
		for (i = 1; n > 0; i++)
		{
			str[i] = '0' + (n % 10);
			n /= 10;
		}
		i = i + 1;
		for (j = 1; j < i / 2; j++)
		{
			temp = str[j];
			str[j] = str[i - j - 1];
			str[i - j - 1] = temp;
		}
	}
	else
	{
		for (i = 0; n > 0; i++)
		{
			str[i] = '0' + (n % 10);
			n /= 10;
		}
		for (j = 0; j < i / 2; j++)
		{
			temp = str[j];
			str[j] = str[i - j - 1];
			str[i - j - 1] = temp;
		}
	}
	str[i] = '\0';
	return (str);
}
