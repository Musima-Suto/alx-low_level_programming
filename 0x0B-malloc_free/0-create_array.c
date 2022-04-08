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
	char *s;
	unsigned int i = 0;

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	if (size == 0)
		return (NULL);

	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
