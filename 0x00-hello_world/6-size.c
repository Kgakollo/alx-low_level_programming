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

	printf("Size of char: %c byte(s)\n", sizeof(char));
	printf("Size of int: %d byte(s)\n", (sizeof(int));
	printf("Size of long int: %li byte(s)\n", sizeof(long int));
	printf("Size of long long int: %lli byte(s)\n", sizeof(long long int));
	printf("Size of float: %f byte(s)\n", sizeof(float));
	return (0);
}
