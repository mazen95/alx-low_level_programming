#include<stdio.h>
/**
 * main - prints all possible combinations,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

	for (n = '0'; n <= '9'; n++)
	{
	putchar(n);
	putchar(',');
	putchar(' ');
	}
	return (0);
}
