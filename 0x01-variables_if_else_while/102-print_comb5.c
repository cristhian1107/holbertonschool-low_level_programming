#include <stdio.h>
/**
 * main - alpha
 *
 * Return: 0 int
 */
int main(void)
{
	int num1;
	int num2;
	int num3 = 0;
	int num4 = 0;

	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = 0; num2 <= 8; num2++)
		{
			for (num3 = num1; num3 <= 9; num3++)
			{
				if ((num2 == 8 && num4 == 0) || num2 == 0)
					num4 = 0;
				else
					num4 = num2 + 1;
				for (; num4 <= 9; num4++)
				{
					putchar(num1 + '0');
					putchar(num2 + '0');
					putchar(' ');
					putchar(num3 + '0');
					putchar(num4 + '0');
					if (num1 == 9 && num2 == 8 && num3 == 9 && num4 == 9)
					{
						putchar('\n');
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
				num4 = 0;
			}
		}
	}
	return (0);
}
