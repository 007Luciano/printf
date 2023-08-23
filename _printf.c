#include "main.h"
/**
 * _printf - prints to stdout
 * @format: format specifier
 * Return: no of bytes printed
 */
int _printf(const char *format, ...);

int _printf(const char *format, ...)
{
	unsigned int i, count = 0;

	va_list args;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			putinchar(format[i]);
			count++;
		}

		else if (format[i + 1] == 'c')
		{
			putinchar(va_arg(args, int));
			i++;
			count++;
		}

		else if (format[i + 1] == 's')
		{
			char *strin = va_arg(args, char *);
			while (*strin)
			{
				putinchar(*strin);
				strin++;
				count++;
			}
			i++;

		}

		else if (format[i + 1] == '%')
		{
			putinchar('%');
			i++;
			count++;
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
	}
va_end(args);
return (count);
}
