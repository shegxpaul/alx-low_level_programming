#include "main.h"

/**
 * times_table - print the 9 times tables
 */

void times_table(void)
{
	int nm, mx, pr;

	for (nm = 0; nm <= 0; nm++)
	{
		_putchar(0);

		for (mx = 1; mx <= 9; mx++)
		{
			_putchar(',');
			_putchar(' ');
			pr = nm * mx;

			if (pr <= 9)
				_putchar(' ');
			else
				_putchar((pr / 10) + '0')
					_putchar((pr % 10) + '0');
		}
		_putchar('\n');
	}
}
