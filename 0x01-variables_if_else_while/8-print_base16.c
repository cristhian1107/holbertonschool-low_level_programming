#include <stdio.h>
/**
 * main - alpha
 *
 * Return: 0 int
 */
int main(void)
{
	char letter = 'a';
	int num = 0;

	while (num < 10)
	{
		putchar(num + '0');
		num++;
	}
	while (letter <= 'f')
	{
		putchar(letter);
		if (letter == 'f')
		{
			putchar('\n');
		}
		letter++;
	}
	return (0);
}
