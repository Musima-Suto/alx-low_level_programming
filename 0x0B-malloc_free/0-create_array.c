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
	unsigned int i = 0;

	ptr = malloc(size * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	if (size == 0)
		return (NULL);

	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}
