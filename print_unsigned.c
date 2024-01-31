#include "main.h"
/**
 * print_unsigned - prints a positive int
 * @val: argument
 * Return: num of characters printed
 */

int print_unsigned(va_list val)
{
	int values = 1, div = 1;
	int a = va_arg(val, int);
	int num = a, x = 0, y = 0, neg = 0;

	if (a == 0)
	{
		_putchar('0');
		return (0);
	}
	
	while ((num / 10) != 0)
	{
		values++;
		num /= 10;
		}
		
		for (x = (values - 1); x >= 0; x--)
		{
			div = 1;
			for (y = 0; y < x; y++)
			div = div * 10;
			
			if (a < 0)
			{
				_putchar('-');
				_putchar((0 - (a / div)) + '0');
				a = a % div;
				a = 0 - a;
				neg = 1;
				}
				else
				{
					_putchar((a / div) + '0');
					a = a % div;
					}
				}
				
				return (values - 1 + neg);
}