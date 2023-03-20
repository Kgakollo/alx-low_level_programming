#include <stdio.h>
/**
 * main - the size of various types on the computer it is compiled and run on
 *
 * Return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of char: %c byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of int: %d byte(s)\n", (unsigned long)(sizeof(b));
	printf("Size of long int: %li byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of long long int: %lli byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of float: %f byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
