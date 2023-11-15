#include "main.h"

/**
 * _putdigit - aux function for _itoa. Returns base n's digits
 * @n: a number, to be converted to digit e.g. 15 to f.
 * This function is auxiliary and helps _itoa generate its result.
 * Return: the digit as expressed in bases 11, 12, etc.
 */
char _putdigit(int n)
{
        if ((n >= 0) && (n <= 9))
                return ('0' + n);
        else if ((n > 9) && (n <= 36))
                return ('a' - 10 + n);
        return (0);
}
