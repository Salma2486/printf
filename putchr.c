#include "main.h"
/**
 *putchr - write
 *@z: adwww
 *Return: write
 */
int putchr(char z)
{
	return (write(1, &z, 1));
}
