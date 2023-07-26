#include "main.h"
/**
 * put_str - prints a string
 * @string: string location
 * Return: r_value
 */
int put_str(char *string)
{
	int index = 0, r_val = 0;

	if (string)
	{
		while (string[index] != '\0')
		{
			_putchar(string[index]);
			r_val += 1;
			index++;
		}
	}
	_putchar('\n');

	return (r_val);
}
