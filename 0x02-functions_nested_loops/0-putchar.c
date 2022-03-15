#include "main.h"
/**
 *main - print contents of a file
 *
 */
int main(void)
{
	char c[] = "_putchar";
	int n = 0;

	while (n <=13)
	{
		_putchar(c[n]);
		n++;
	}
	_putchar('\n');
	return (0);

}
