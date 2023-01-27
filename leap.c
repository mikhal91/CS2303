#include <stdio.h>
#include <stdbool.h>


bool leapCheck(int year)
{
  if(year % 400 == 0)
    return true;

  if(year % 100 == 0)
    return false;

  if(year % 4 == 0)
    return true;
  return false;
}

int main ()
{
  int year;
  printf("Enter Year: ");
  scanf("%d", &year);
  
  leapCheck(year) ? printf("Leap year!\n"):
    printf("Not a leap year");

  return 0;
}
