#include "main.h"

/**
 * _abs - returns the absolute value of an integer
 * @n: integer to consider
 * Return: n
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
		return (n);
	}
	else
		return (n);
}
