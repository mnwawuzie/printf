#include "main.h"
#include <unistd.h>

/**
 * _putchar - print a charactor to std.
 * @c: charactor to print.
 *
 * Return: 1 on sucess
*/

int _putchar(char c)
{
        return (write(1, &c, 1));
}
