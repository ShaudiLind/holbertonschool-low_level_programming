#include "main.h"

/**
 * jack_bauer - prints every minute of the day from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int hour;
	int minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			/* Print hour tens digit */
			_putchar((hour / 10) + '0');
			/* Print hour ones digit */
			_putchar((hour % 10) + '0');
			/* Print colon separator */
			_putchar(':');
			/* Print minute tens digit */
			_putchar((minute / 10) + '0');
			/* Print minute ones digit */
			_putchar((minute % 10) + '0');
			/* Print newline */
			_putchar('\n');
		}
	}
}
