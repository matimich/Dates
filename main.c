//program counting difference between two dates

#include <stdio.h>
#include "function.h"

int main (void)
{

    struct date first;
    struct date second;
    int score,score2;
    char sign='o';

    while((sign !='x') && (sign != 'X'))
    {
        printf("Input first date:\n");
        scanf("%i-%i-%i",&first.day,&first.month,&first.year);

        printf("Input second date:\n");
        scanf("\n%i-%i-%i",&second.day,&second.month,&second.year);

        function(&first,&second,&score,&score2);

        printf("\nThe difference between first date %.2i-%.2i-%.4i and second date %.2i-%.2i-%.4i is:'%i'",
        (first).day,(first).month,(first).year,(second).day,(second).month,(second).year,score);

        printf("\nThe difference between first date %.2i-%.2i-%.4i and second date %.2i-%.2i-%.4i (including inputed days) is:'%i'",
        (first).day,(first).month,(first).year,(second).day,(second).month,(second).year,score2);

        printf("\n If you want to continue press 'x' or press 'X':");

        scanf("\n%c",&sign);
        fseek(stdin,0,SEEK_END);
    }

    return 0;
}
