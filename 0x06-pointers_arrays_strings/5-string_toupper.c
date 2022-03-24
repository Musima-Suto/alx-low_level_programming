#include "main.h"

/**
 * string_toupper -  function that changes all lowercase letter
 * of a string to uppercase.
 *@n: address of string 
 * Return: converted string.
 */

char *string_toupper(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] -= 'a' - 'A';
		i++;
	}
	return (n);
}
