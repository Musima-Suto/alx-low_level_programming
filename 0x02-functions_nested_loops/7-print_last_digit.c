#include "main.h"
/**
 *print_last_digit - prints the last digit of a number
 *@n: the number to be evaluated
 *Return: last digit of n
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	{
		last_digit = n % 10 * -1;
	}
	else
	{
		last_digit = n % 10;
	}
	_putchar('0' + last_digit);
	return (last_digit);
}
