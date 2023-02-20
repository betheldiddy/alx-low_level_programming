#include <stdio.h>
/**
 * main - main function
 *
 * Return: Always o (Success)
 */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'Z' ; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
