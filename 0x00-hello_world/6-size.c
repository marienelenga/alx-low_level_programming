#include <stdio.h>

/**
 * main - Entry point
 *Marien ELENGA
 * Return: Always 0 (Success)
 */
int main(void)
{
	int avi;
	long int avg;
	long long int avf;
	char av;
	float ave;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(av));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(avi));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(avg));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(avf));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(ave));
	return (0);
}
