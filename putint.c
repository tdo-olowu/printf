#include "main.h"

/**
 * _putchar - simply outputs a single character.
 * @c: the ASCII character to output.
 * Return: number of bytes written
 */
int _putchar(char c)
{
	return (write(STDOUT_FILENO, &c, 1));
}
