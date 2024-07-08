#include "pegasus.h"
#include <stdio.h>

/**
 **
 * Return: Always 0.
 */
int main(void)
{
    char *s0 = "Onerous Pegasus";
    char *s1 = "Armittage Olson";

    printf("%s, %s\n", s0, s1);
    set_string(&s1, s0);
    printf("%s, %s\n", s0, s1);
    return (0);
}
