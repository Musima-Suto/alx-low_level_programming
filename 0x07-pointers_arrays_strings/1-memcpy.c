#include "main.h"
/**
 *_memcpy - copies n bytes of address *src
 *to the address dest
 *@dest: memory area to be filled
 *@src: memory area to be copied
 *@n: the bytes to be copied from *src
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
