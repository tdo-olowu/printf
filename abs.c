#include "main.h"

/**
 * _abs - computes the absolute value of a number.
 * @n: a signed number in base 10.
 * Return: the absolute value of the number.
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}
