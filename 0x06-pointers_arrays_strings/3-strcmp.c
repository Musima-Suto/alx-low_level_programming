#include "main.h"
/**
 *_strcmp - function similar to strcmp
 *@s1: string under comparison
 *@s2: string under comparison
 *Return: the difference between the number of characters
 */
int _strcmp(char *s1, char *s2)
{
	int difference = 0;

	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
	}
	if (s1 != s2)
		difference = *s1 - *s2;

	return (difference);
}
