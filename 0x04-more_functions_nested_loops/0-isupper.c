#include "main.h"
/**
 *_isupper - a function that checks for uppercase letters
 *@c: input
 *Return: 1 if c uppercase, 0 if lowercase
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
