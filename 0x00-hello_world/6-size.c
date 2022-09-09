#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: return 0 (Success)
 *
 */
int main(void)
{
	char c;
	int i;
	long lo;
	long long int lli;
	float f;

	printf("Size of a char: %d byte(s)\n", sizeof(c));
	printf("Size of an int: %d byte(s)\n", sizeof(i));
	printf("Size of a long: %d byte(s)\n", sizeof(lo));
	printf("Size of a long long int: %d byte(s)\n", sizeof(lli));
	printf("Size of a float: %d byte(s)\n", sizeof(f));
	return (0);
}
