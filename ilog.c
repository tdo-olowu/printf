#include "main.h"

/**
 * _ilog - computes the integer part of the log of a number.
 * @n: the number in base 10, whose log we want.
 * @base: the base of the logarithm. base > 1 is only sensible range.
 * Return: logb(n)
 */
int _ilog(int n, int base)
{
	int p, m;

	if (base == 1)
		return (-INT_MAX);
	for (p = 0, m = n ; m >= base ; ++p)
		m = m / base;
	return (p);
}
