#include "main.h"

/**
 * jack_bauer - minutes of day of jack bauer
 * starting from 00:00 to 23:59
 */

void jack_bauer(void)
{
	int i, j;
	i = 0;

	while (i < 24)
	{
		_putchar((i/10) + '0');
		_putchar((i%10) + '0');
		_putchar(':');
		_putchar((j/10) + '0');
		_putchar((j%10) + '0');
		_putchar('\n');
		j++;
	}
	i++;
}
