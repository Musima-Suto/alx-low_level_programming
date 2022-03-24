#include "main.h"
/**
 *_strncpy - copies a string
 *@dest:where string is copied to
 *@char:where string is copied from
 *Return:dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
		
	}
	dest[i] = '\0';
	return (dest);

}
