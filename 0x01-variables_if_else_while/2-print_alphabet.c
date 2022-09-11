#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point of the program
 *
 * Return: Returns zero when successful otherwise returns non-zero value
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
