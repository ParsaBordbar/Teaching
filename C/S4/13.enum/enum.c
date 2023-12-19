#include <stdio.h>
#include <stdlib.h>

/*An enum is a special type that represents a group of 
constants (unchangeable values).
*/

int main() {

    enum Difficulty {
    EASE,    //0
    MEDIUM, //1
    HARD,    //2
    };
  // Create an enum variable and assign a value to it
  enum Difficulty variable = MEDIUM;

  // Print the enum variable
  printf("This is variable: %d \n", variable);

    enum week {
        Monday,
        Tuesday,
        Wednesday,
        Thursday,
        Saturday,
        Sunday
    };

    enum MonthDays {
        FIRST = 1,
        SECOND, //This one has value of 2
        THIRD,  //This one has value of 3
    };

    int day = FIRST; 
    printf("Our Day is %d \n", day);

/*Why And When To Use Enums?
Enums are used to give names to constants, which makes 
the code easier to read and maintain.
Use enums when you have values that you know aren't going to change,
like month days, days, colors, deck of cards, etc.*/

  return 0;
}