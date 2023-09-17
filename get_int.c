#include "main.h"
/**
 * get_int - awdawdaw
 * @num:dawa
 */
int get_int(int num)
{
	char buffer[12];
	int index = 0;

	if (number == 0) {
		buffer[index++] = '0';
	} else {

		if (number < 0) {
			buffer[index++] = '-';
			number = -number;
		}
		while (number != 0) {
			buffer[index++] = '0' + (number % 10); // Convert digit to character
			number /= 10;
		}
	}
	buffer[index] = '\0';
	for (int start = 0, end = index - 1; start < end; start++, end--) {
		char temp = buffer[start];
		buffer[start] = buffer[end];
		buffer[end] = temp;
	}

	write(1, buffer, index);
	return (num);
}
