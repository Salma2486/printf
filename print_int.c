#include "main.h"
/**
 *printInteger - dwdwd
 *@num: wadadwadd
 *Return: str
 */
int printInteger(int num)
{
	char buffer[BUFF_SIZE];
	int index = 0;
	int h;

	if (num == 0)
	{
		buffer[index++] = '0';
	}
	else
	{
		bool isNegative = false;

		if (num < 0)
		{
			isNegative = true;
			num = -num;
		}
		while (num > 0)
		{
			int digit = num % 10;

			buffer[index++] = '0' + digit;
			num /= 10;
		}

		if (isNegative)
		{
			buffer[index++] = '-';
		}
		for (h = 0; h < index / 2; h++)
		{
			char temp = buffer[h];

			buffer[h] = buffer[index - 1 - h];
			buffer[index - 1 - h] = temp;
		}
	}
	buffer[index] = '\0';
	return (_puts(buffer));
}
