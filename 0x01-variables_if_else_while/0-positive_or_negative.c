#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        if (n > 0)
                printf("%d is positive\n", n);
        eles if (n==0)
                printf("%d is zero\n", n);
        eles
                printf("%d is negative\n", n);
        /* this is my modification */
        return (0);
}
