#include "main.h"

/**
 * _putint - outputs the number in a specified base.
 * @n: assumed to be in base 10.
 * @base: the output base.
 * Return: number of bytes written to output.
 */
int _putint(int n, int base)
{
	char *num = _itoa(n, base);
	int i, bytes;

	if (num == NULL)
		return (0);
	for (i = 0 ; num[i] != '\0' ; ++i)
		bytes += _putchar(num[i]);

	free(num);
	return (bytes);
}
