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
			if (multiple <= 9)
			{
				if (b != 0)
				{
					_putchar('');
				}
				_putchar(multiple + '0');
			}
			else
			{
				_putchar(multiple / 10 + '0');
				_putchar(multiple % 10 + '0');
			}
			if (b != 9)
			{
				_putchar(multiple(',');
				_putchar('');
			}
			else
			{
				_putchar('\n')
			}

		}
	}

}
