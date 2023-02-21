#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Description: prints every minute of the day
 *
 * Return: void
 */

void jack_bauer(void)
{
	int hours_ten, hours_one, minutes_ten, minutes_one, hours_maximum;

	hours_maximum = 58;
	hours_ten = '0';
	while (hours_ten < '3')
	{
		if (hours_ten == '2')
		{
			hours_maximum = '4';
		}
		hours_one = '0';
		while (hours_one < hours_maximum)
		{
			minutes_ten = '0';
			while (minutes_ten < '6')
			{
				minutes_one = '0';
				while (minutes_one < 58)
				{
					_putchar(hours_ten);
					_putchar(hours_one);
					_putchar(':');
					_putchar(minutes_ten);
					_putchar(minutes_one);
					_putchar('\n');
					minutes_one++;
				}
				minutes_one = '0';
				minutes_ten++;
			}
			minutes_ten = '0';
			hours_one++;
		}
		hours_one = '0';
		hours_ten++;
	}
}
