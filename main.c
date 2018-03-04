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
        do
        {
            first.day=0;
            first.month=0;
            first.year=0;

            second.day=0;
            second.month=0;
            second.year=0;

            printf("Input first date in order day-month-year:\n");
            scanf("%i-%i-%i",&first.day,&first.month,&first.year);
            getc(stdin);

            printf("Input second date in order day-month-year:\n");
            scanf("\n%i-%i-%i",&second.day,&second.month,&second.year);
            getc(stdin);

            if((first.day > 31 || first.day <1) || (second.day > 31 || second.day <1) || (first.month > 12 || first.month < 1)
                || (second.month > 12 || second.month < 1))
                printf("\nError, wrong inputed dates,try again:\n");
        }while( (first.day > 31 || first.day <1) || (second.day > 31 || second.day <1) || (first.month > 12 || first.month < 1)
                || (second.month > 12 || second.month < 1));


        function(&first,&second,&score,&score2);

        printf("\nThe number of days between these those two dates:\nfirst date %.2i-%.2i-%.4i and %.2i-%.2i-%.4i is:'%i'\n",
        (first).day,(first).month,(first).year,(second).day,(second).month,(second).year,score);


        printf("\n If you want to END press 'x' or press 'X':");

        scanf("\n%c",&sign);
        fseek(stdin,0,SEEK_END);
    }
    return 0;
}
