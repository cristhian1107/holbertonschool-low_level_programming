#include <stdio.h>
/**
 * main - alpha
 *
 * Return: 0 int
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%d", num);
		if (num == 9)
		{
			printf("\n");
		}
		num++;
	}
	return (0);
}
