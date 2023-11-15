#include "main.h"

/**
 * _puts - prints a pure string to standard output.
 * @c: pointer to the null-terminated string.
 * Return: number of bytes written.
 */
int _puts(const char *c)
{
	int bytes;
	int i;

	for (i = 0, bytes = 0 ; (c != NULL) && (c[i] != '\0') ; ++i)
	{
		bytes += _putchar(c[i]);
	}
	return (bytes);
}
