#include <stdio.h>
/**
 * main - alpha
 *
 * Return: 0 int
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		if (letter == 'z')
		{
			putchar('\n');
		}
		letter++;
	}
	return (0);
}
