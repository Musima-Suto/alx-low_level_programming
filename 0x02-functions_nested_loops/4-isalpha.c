#include "main.h"
/**
 *_isalpha - checks if character is from the alphabet
 *@c: character to be checked
 *Return: 1 if character from the alphabet, 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
