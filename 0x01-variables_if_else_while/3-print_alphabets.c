#include <time.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Return: always 0 (Succrss)
 *
 */
int main(void)
{
char low;
for (low = 'a' ; low <= 'z' ; low++)
	putchar(low);
for (low = 'A'; low <= 'Z'; low++)
	putchar(low);
	putchar('\n');
	return (0);
}
