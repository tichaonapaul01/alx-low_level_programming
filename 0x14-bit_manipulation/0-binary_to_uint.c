#include "main.h"
#include <stddef.h>

/**
* unsigned int binary_to_uint - converts a binary number to an unsigned int.
* b: binary
*
* Return: unsigned int.
*/
unsigned int binary_to_uint(const char *b) 
{
    unsigned int n = 0;
    if (b == NULL) 
    {
        return 0;
    }
    while (*b != '\0') 
    {
        if (*b == '0' || *b == '1') 
	{
            n = n << 1;
            if (*b == '1') 
	    {
                n = n | 1;
            }
            b++;
        } 
	else 
	{
            return 0;
        }
    }
    return n;
}
