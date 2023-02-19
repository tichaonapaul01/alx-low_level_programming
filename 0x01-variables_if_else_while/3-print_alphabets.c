#include <stdio.h>
/**
*main - main block
*Description: print the alphabet in lower case
*and the alphabet in uppercase, followed by a new line
*Return: 
*/
int main(void)
{
char c = 'a';

while (c <= 'z')
{
putchar(c);
c++;
}
char c = 'A';

while (c <= 'Z')
{
putchar(c);
c++;
}

putchar('\n')
return (0);
}
