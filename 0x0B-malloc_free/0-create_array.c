#include "main.h"
#include <stdlib.h>
/**
 *create_array - create an array of char
 *and intialize it with a specific char
 *@size: size of the array
 *@c: character intialized to the array
 *Return: NULL if not successful, else
 *        Pointer
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(sizeof(char) * size);

	if (size == 0)
		return (NULL);
	if (ptr == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}
