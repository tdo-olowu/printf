#include "main.h"
/**
 * _putdec - outputs the given number in decimal
 * @n: the number, assumed to be in base 10
 * Return: number of bytes written.
 */
int _putdec(int n)
{
char *num = _itoa(n, 10);
	int i, bytes;

	if (num == NULL)
		return (0);
	for (i = 0 ; num[i] != '\0' ; ++i)
		bytes += _putchar(num[i]);
	free(num);
	return (bytes);
}
