#include "main.h"
/**
 * jack_bauer - Entry Point
 * Description: Print every minute of the day
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int hour, minute;

	hour = 0;

	while (hour < 24)
	{
		minute = 0;
		while (minute < 60)
		{
			_putchar((hour / 10) + 48);
			_putchar((hour % 10) + 48);
			_putchar(':');
			_putchar((minute / 10) + 48);
			_putchar((minute % 10) + 48);
			_putchar('\n');
			minute++;
		}
		hour++;
	}
}

