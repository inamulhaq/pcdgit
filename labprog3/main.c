#include <stdio.h>
int main ()
{
  int year;
  printf("enter a year to check if it is a leap year\n");
  scanf("%d" ,& year);
  if (year%400==0)
  printf("%d is aleap year\n" ,year);
  else if(year%100==00)
  printf("%d is not a leap year\n" ,year);
  else if(year%4==0)
  printf("%d is a leap year\n" ,year);
   else
  printf("%d is not a leap year\n" ,year);
   return 0;
} 
   
