#include "main.h"

/**
 * _pow - computes b to the power of p.
 * @base: the base of the power.
 * @p: the power. Only works for p >= 0
 * This function was useful in earlier version of itoa,
 * but is only here just in case.
 * Return: b ^ p.
 */
int _pow(int base, unsigned int p)
{
	int prod = 1;
	unsigned int k = p;

	if ((base == 0) || (base == 1))
		return (base);
	for (k = 0 ; k < p ; ++k)
		prod *= base;
	return (prod);
}
