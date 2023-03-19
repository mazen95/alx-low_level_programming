#include<stdio.h>
/**
 * main - main block
 * Description: Get a random number and check its last digit, compare it with 5
 * Return: 0
 */
int main(void)
	{
		int x;
		int y;

	for (x = 48; x < 57; x++)
		{
	for (y = 48; y < 57; y++)
			{
			if (y > x)
			{
				putchar(x);
				putchar(y);
				putchar(',');
				putchar(' ');
			}
			}
		}
	}
