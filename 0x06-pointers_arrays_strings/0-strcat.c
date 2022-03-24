#include "main.h"
/**
 *_strcat - function that concatenates two strings
 *@dest:char type string
 *@src:char type string
 *Description: append the src string to the dest string
 *Return:add src to dest
 */
char *_strcat(char *dest, char *src)
{
	int c, d;

	c = 0;

	while (dest[c] != "\0")
	{
		c++;
	}

	d = 0;

	while (src[d] != "\0")
	{
		dest[c] = src[d];
		c++;
		d++;
	}
	dest[c] = "\0";
	return (dest);
}
