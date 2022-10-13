#include <stdio.h>
/**
 * main - prints the sizes of various files
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	printf("Size of a char: %g byte(s)\n", sizeof(char));
	printf("Size of an int: %g byte(s)\n", sizeof(int));
	printf("Size of a long int: %g byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %g byte(s)\n", sizeof(long long int));
	printf("Size of a float: %g byte(s)\n", sizeof(float));
	return (0);
}
