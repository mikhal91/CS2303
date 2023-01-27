#include <stdio.h>
#include <stdlib.h>
#include "calcGrades.h"

/* Very Simple program demo reading a number from a command line.
Created by Michael Alicea, michaelalicea

Usage:
./num some_number
Example:
./num 2303


*/

#define MAX_GRADES 20

int main (int argc, const char* argv[]) {
  int n; //Integer read from command line goes here

  if (argc < 2) { //Check that there was an entry
    printf("Must enter a number on the command line!\n");
    return 1; // Indicate Failure
  } else if (argc - 1 > MAX_GRADES)
    {
      printf("Too many inputs! Using the first %d grades.\n", MAX_GRADES);
    }

  int all_grades[MAX_GRADES]; // Define and allocate the array
  int amountOfGrades = (argc-1 > MAX_GRADES) ?  MAX_GRADES : argc - 1; // Initalize to hold numbers entered
  printf("Number of grades entered %d\n", amountOfGrades);

  //Loop iterates once for every grade entered
  //It will stop once everything has been inputted
  
  int i; // Index into array
  for( i = 1;  i <= amountOfGrades; i++)
    {
      all_grades[i-1] = atoi(argv[i]);
      printf("Grade %d\n", all_grades[i-1]);
  }
  return averageGrade(all_grades, amountOfGrades);
}
