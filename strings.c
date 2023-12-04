#include "main.h"


/**	
 * strings - prints a string
 * @args: numberof arguements
 * @printed: the printed characters
 * Return: printed charcaters
 */


int strings(va_list args, int printed)
{

	char *my_string = va_arg(args, char *);


	while (*my_string != '\0')

	{

		_putchar(*my_string);

		printed++;

		my_string++;

	}

	return (printed);

}
