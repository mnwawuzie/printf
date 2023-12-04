#include "main.h"


/**

 * integers - prints intiger number

 * @args: number arguements

 * @printed: the printed characters

 * Return: printed charcaters

 */


int integers(va_list args, int printed)

{

        int num = va_arg(args, int);

        int figure = 0;

        int temp = num;

        int digit;


        if (num < 0)

        {

                printed += _putchar('-');

                num = -num;


                temp = num;

        }


        do {

                figure++;

                temp /= 10;

        } while (temp != 0);


        while (figure > 0)

        {

                int pow10 = 1;

                int i;


                for (i = 1; i < figure; i++)

                {

                        pow10 *= 10;

                }

                digit = num / pow10;

                printed += _putchar(digit + '0');

                num -= digit * pow10;

                figure--;

        }

        return (printed);

}
