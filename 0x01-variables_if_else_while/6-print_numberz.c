#include <stdio.h>
/**
 *main - print numbers from 0 to 10 without using char
 *Return:0
 **/
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
		putchar(i);
	putchar('\n');
	return (0);
}