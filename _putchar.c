#include "main.h"
/**
 * _putchar - prints a character
 * @z: the char
 * Return: 1 character
 */
int _putchar(char z)
{
	return (write(1, &z, 1));
}
