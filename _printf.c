#include "main.h"

/**
 * _printf - function that output according to a format
 * @format: a character string
 *
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
        int num_of_bytes, string_arg_len, i = 0;
        char nextChar;

        va_list args;

        va_start(args, format);

        for (i = 0; format[i] != '\0'; i++)
        {
                if (format[i] == '%')
                {
                nextChar = format[i + 1];
                num_of_bytes++;
                i++;

                        if (nextChar == 'c')
                        {
                                _putchar(va_arg(args, int));
                        }
                        else if (nextChar == 's')
                        {
                                char *string_arg = va_arg(args, char*);


				while(string_arg[string_arg_len])
                                {
					write(1, &string_arg[string_arg_len], 1);
                                	string_arg_len++;
				}
                                break;
				num_of_bytes = num_of_bytes + string_arg_len - 1;
                        }
                        else if (nextChar == '%')
                        {
                                _putchar(format[i]);
                        }
                }
                else
                {
                        _putchar(format[i]);
                        num_of_bytes++;
                }
        }
        va_end(args);
        return (num_of_bytes);
}
