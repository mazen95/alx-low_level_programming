#include<stdio.h>
/**
 * main - prints all possible combinations,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
char n;
char i;

	for (n = '0'; n <= '9'; n++)
	{
	putchar(n);
		for (i = '0'; i <= '9'; i++)
		{
		putchar(i);
		}
	putchar(',');
	putchar(' ');
	}
}
