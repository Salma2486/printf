#include "main.h"
/**
 * put_s - adwwadawda
 * @string:dawdadaw
 * Return: r_val
 */
int put_s(char *string)
{
	int idx = 0, r_val = 0;

	if (string)
	{
		while (string[idx] != '\0')
		{
			putchr(string[idx]);
			r_val += 1;
			idx++;
		}
	}
	return (r_val);
}
