#include "main.h"

/**
 * _itoa - changes an integer to a null-terminated string.
 * @n: signed integer. Assumed to be base 10
 * @base: the output base. Base 2 to 35 supported.
 * Return: pointer to the string form of integer.
 */
char *_itoa(int n, int base)
{
	int p = _ilog(_abs(n), base);
	int k, rem, digits;
	char *num;

	digits = ((n >= 0) ? (p + 1) : (p + 2));
	num = malloc(digits + 1);
	if (num == NULL)
		return (NULL);

	rem = _abs(n);
	num[digits] = '\0';
	if (n >= 0)
	{
		for (k = digits - 1 ; k >= 0 ; --k)
		{
			num[k] = _putdigit(rem % base);
			rem = rem / base;
		}
	}
	else
	{
		for (k = digits - 1 ; k >= 1 ; --k)
		{
			num[k] = _putdigit(rem % base);
			rem = rem / base;
		}
		num[k] = '-';
	}

	return (num);
}
