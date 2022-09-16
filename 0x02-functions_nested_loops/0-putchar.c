#include <stdio.h>

/**
 * main - Entry point of the program
 * Return: ALways 0 (Success)
 */
int main(void)
{
	char ch[] = '_putchar';
	int i;

	for (i = 0; ch[i] != '\0'; i++)
	{
		putchar(ch[1]);
	}

	putchar('\n');

	return (0);
}
