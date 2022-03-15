#include "main.h"
/**
 *_islower- check for lowercase letter
 *Return:1 if lowercase, 0 if not.
 *@c: character to test
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
