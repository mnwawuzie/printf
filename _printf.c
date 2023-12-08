#include "main.h"

/**
 * _printf - prints output according to format
 * @format: format specifier
 * Return: the number of characters
 *
 */

int _printf(const char *format, ...)
{
	char nextChar;

	int i, num_chars, bytes_printed, string_len = 0;

	va_list args;

	va_start(args, format);

	for (i = 0; i < format[i]; i++)
	{
		if (format[i] == '\t' || format[i] == '\n')
		{
		bytes_printed--;
		}
		else if (format[i] == '%')
		{
			nextChar = format[i + 1];

			if (nextChar == 's')
			{
				char *string_arg = va_arg(args, char*);

				while (string_arg[string_len])
				{
					write(1, &string_arg[string_len], 1);
					string_len++;
				}
				break;
			}
			else if (nextChar == 'c')
			{
				_putchar(va_arg(args, int));
				num_chars++;
			}
			else if (nextChar == '%')
			{
				_putchar(format[i]);
				num_chars++;
			}
		}
		else
		{
		num_chars++;
		bytes_printed = bytes_printed + num_chars;
		_putchar(format[i]);
		}

	}
	va_end(args);
	bytes_printed = string_len + num_chars;
	return (bytes_printed);

}
