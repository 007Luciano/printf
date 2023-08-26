#include "main.h"
/**
 * _printf - prints to stdout
 * @format: format specifier
 * Return: no of bytes printed
 */
int _printf(const char *format, ...);

int _printf(const char *format, ...)
{
	unsigned int i, count2, count = 0;

	va_list args;

	va_start(args, format);

	if (format == NULL)
		return (-1);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			putinchar(format[i]);
		}

		else if (format[i + 1] == 'c')
		{
			putinchar(va_arg(args, int));
			i++;
		}

		else if (format[i + 1] == 's')
		{
		const char *strin = va_arg(args, char *);

		if (strin == NULL)
		{
		char nullStrnull[] = "(null)";

		int z;

		for (z = 0; nullStrnull[z] != '\0'; z++)
		{
		putinchar(nullStrnull[z]);
		count++;
		}
		}

		else
		{
		count2 = putsca(va_arg(args, char *));
		i++;
		count += (count2 - 1);
		}
		i++;
		}

		else if (format[i + 1] == '%')
		{
			putinchar('%');
			i++;
		}

		else if (format[i + 1] == 'b')
		{
			binane(va_arg(args, unsigned int));
			i++;
		}
		else if (format[i + 1] == 'd')
		{
		decimal_con(va_arg(args, int));
		i++;
		}
		else if (format[i + 1] == 'i')
		{
		decimal_con(va_arg(args, int));
		i++;
		}
		count += 1;
	}
va_end(args);
return (count);
}
