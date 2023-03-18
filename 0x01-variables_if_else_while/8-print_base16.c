#include<stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
char c;
int  x;

	for (x = '0'; x < = 9 ; x++)
	{
		putchar(x);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar("\n");
	return (0);
}
