#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
* unsigned int binary_to_uint - converts a binary number to an unsigned int.
* b: binary
*
* Return: unsigned int.
*/
unsigned int binary_to_uint(const char *b) {
    unsigned int number  = 0;

    if (b == NULL) {
        return 0;
    }

    for (int i = 0; b[i] != '\0'; i++) {
        if (b[i] == '1') {
            number = number * 2 + 1;
        } else if (b[i] == '0') {
            number *= 2;
        } else {
            return 0;
        }
    }

    return number;
}
