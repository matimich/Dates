#include <stdio.h>
#include <stdint.h>
#include <math.h>
#include "function.h"

void function (struct date *first, struct date *second,int *score,int *score2)
{
   const uint8_t allmonths[2][12]={{31,28,31,30,31,30,31,31,30,31,30,31},
   {31,29,31,30,31,30,31,31,30,31,30,31}};

   //printf ("'%i'-'%i'-'%i'\n",(*first).day,(*first).month,(*first).year);
   //printf ("'%i'-'%i'-'%i'\n",(*second).day,(*second).month,(*second).year);

  //first date

  int leap_years,rest_years,alldays1,i;
  int leap_years_2,rest_years_2,alldays_2;

  leap_years=((*first).year-1)/4;   //-1 becouse I take into account only full years, with out "uncompleate" year
  //printf("'%i''\n",leap_years);
  rest_years=((*first).year-1)-leap_years;
  //printf("'%i''\n",rest_years);
  alldays1= (leap_years*366)+(rest_years*365);
  //printf("'%i''\n",alldays1);

  if((*first).year%4) //leap year NOT detected
  {
    for(i=1;i<(*first).month;i++)
    {
        alldays1+=allmonths[0][i-1];
    }
  }
  else // leap year DETECTED
  {
    for(i=1;i<(*first).month;i++)
    {
        alldays1+=allmonths[1][i];
    }
  }
  alldays1+=(*first).day;
 //printf("'%i''\n",alldays1);


   //second date

  leap_years_2=((*second).year-1)/4;
  //printf("'%i''\n",leap_years);
  rest_years_2=((*second).year-1)-leap_years_2;
  //printf("'%i''\n",rest_years);
  alldays_2=(leap_years_2*366)+(rest_years_2*365);
  //printf("'%i''\n",alldays_2);

   if((*second).year%4) //leap year NOT detected
  {
    for(i=1;i<(*second).month;i++)
    {
        alldays_2+=allmonths[0][i-1];
    }
  }
  else // leap year DETECTED
  {
    for(i=1;i<(*second).month;i++)
    {
        alldays_2+=allmonths[1][i];
    }
  }
  alldays_2+=(*second).day;
 //printf("'%i''\n",alldays_2);

 *score = fabs(alldays1-alldays_2);  //number of days between these two days

}

