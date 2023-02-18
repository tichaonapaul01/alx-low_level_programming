#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - Entry point
*Return: always 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	// true if the number is greater than zero
	if (n > 0)
		printf("%d is positive.\n", n);
	else if (n < 0)
		printf("%d is nagative.\n", n);
	else
	    printf(%d is zero.\n" n);

	return (0);
}
