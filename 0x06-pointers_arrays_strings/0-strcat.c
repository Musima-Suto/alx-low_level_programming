#include "main.h"
/**
 **_strcat - function that concatenates two strings
 *@dest:char type string
 *@src:char type string
 *Description: append the src string to the dest string
 *Return:add src to dest
 */
char *_strcat(char *dest, char *src)
{
	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (dest);
}
