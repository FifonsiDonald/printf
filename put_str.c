#include "main.h"

int put_str(char *string)
{
	int index, r_val = 0;
	if (string)
	{
		while (string[index] != '\0')
		{
			_putchar(string[index]);
			r_val += 1;
			index++;
		}
	}
	return (r_val);
}
