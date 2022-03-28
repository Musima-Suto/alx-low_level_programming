#include "main.h"
/**
 *_memset - fills the first n bytes of address *s
 *with the constant byte b
 *@s: memory area to be filled
 *@b: constant byte
 *@n: the bytes to be filled in *s
 *Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
