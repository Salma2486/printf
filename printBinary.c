#include "main.h"
/**
 *printBinary - This is the entry point of the code
 *@num: oudfhnoi
 *Return:0 Success
 */
int printBinary(unsigned int num)
{
	char buffer[BUFF_SIZE];
	int index = 0;
	int i;

	if (num == 0)
	{
		putchr('0');
	}
	else
	{
		while (num > 0)
		{
			int digit = num % 2;

			buffer[index++] = '0' + digit;
			num /= 2;
		}
		for (i = 0; i < index / 2; i++)
		{
			char temp = buffer[i];

			buffer[i] = buffer[index - 1 - i];
			buffer[index - 1 - i] = temp;
		}
	}
	buffer[index] = '\0';
	return (_puts(buffer));
}
