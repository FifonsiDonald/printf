#include "main.h"

/**
 * _printf - printf function replica
 * @format: format
 * Return: r_value
 */

int _printf(const char *format, ...)
{
	unsigned int r_val = 0, h = 0;
	va_list args;

	va_start(args, format);

	for ( ; format[h] != '\0'; h++)
	{
		if (format[h] != '%')
		{
			_putchar(format[h]);
		}
		else if (format[h + 1] == 'c')
		{
			_putchar(va_arg(args, int));
			h++;
		}
		else if (format[h + 1] == 's')
		{
			int val = put_str(va_arg(args, char *));

			h++;
			r_val += (val - 1);
		}
		else if (format[h + 1] == '%')
		{
			_putchar('%');
			h++;
		}
		else if ((format[h + 1] == 'd') || (format[h + 1] == 'i' ))
		{
			get_intg(va_arg(args, int));
		}
		r_val += 1;
	}
	return (r_val);
}
