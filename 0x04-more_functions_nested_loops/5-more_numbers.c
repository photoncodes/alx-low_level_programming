#include "main.h"

/**
 * more_numbers -Prints numbers from 0 to 14 for 10 times
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10 ; i++)
	{
		for(j = 0; j < 14; j++){
			if (j >= 10)
				_putchar('1');
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
