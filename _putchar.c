#include "main.h"

/**
* _putchar - print a character
* @c: a character to be printed
* Return: success return 1
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

