
#include <stdio.h>
#define Days_In_Week 7

int main()
{
  	int NoOfDays, years, weeks, days;

 	printf("\n Please Enter the Number of days  :  ");
  	scanf("%d", &NoOfDays);

  	years = NoOfDays / 365;
  	weeks = (NoOfDays % 365) / Days_In_Week;
  	days = (NoOfDays % 365) % Days_In_Week;


    printf("\n Years  = %d", years);
    printf("\n Weeks  = %d", weeks);
    printf("\n Days   = %d", days);

   	return 0;
}

