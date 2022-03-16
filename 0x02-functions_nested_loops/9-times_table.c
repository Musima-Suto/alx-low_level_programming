#include "main.h"
/**
 *times_table - print 9 timetable
 *return nothing
 */
void times_table(void)
{
	int a, b, multiple;

	for (a = 0; a <= 9; b++)
	{
		for (b = 0; b <= 9; b++)
		{
			multiple = a * b;
			if (b != 0)
			{
				_putchar(',');
				_putchar('');
			}
			if (multiple >= 10)
			{
				_putchar((multiple / 10) + '0');
				_putchar((multiple % 10) + '0'); 
			}
			else if(res <10 && b != 0)
			{
				_putchar('');
				_putchar((res % 10) + '0');
			}
			else
			{
				_putchar((res % 10) + '0');
			}

		}
	}

}
