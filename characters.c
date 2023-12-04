#include "main.h"


/**

 * characters - prints a binary number

 * @args: the arguements to use

 * @printed: the printed characters

 * Return: printed charcaters

 */


int characters(va_list args, int printed)

{

        int my_char = va_arg(args, int);


        _putchar(my_char);

        return (printed + 1);

}
