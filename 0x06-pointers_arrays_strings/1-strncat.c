#include "main.h"
/**
 *_strncat - similar to _strcat except it limits
 *the size of the data
 *@dest: char string type
 *@src: char string type
 *@n: maximum number of character to be appended
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	int = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;

	while (src[j] != '\0' && i < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
