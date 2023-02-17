#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - main block
* Desription: get a random number and print that number
* and if it is positive, nagative, or zero
*Return: Always 0 (Success)
*/
int main(void)
{
int n;

srand(time(0));
n=rand() - RAND_MAX / 2;
if (n > 0)
printf("%d is positive\n", n);
else if (n < 0)
printf("%i is nagative\n", n);
else
printf("%i is zero\n", n);
return (0);
}
