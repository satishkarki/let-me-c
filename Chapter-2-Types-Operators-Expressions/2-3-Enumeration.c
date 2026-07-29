#include <stdio.h>

/* Declare an enumeration for days of the week.
   SUN starts at 0 by default, and each subsequent
   name auto-increments by 1. */
enum weekday { SUN, MON, TUE, WED, THU, FRI, SAT };

int main(void)
{
    enum weekday today;   // declare a variable of type "enum weekday"

    today = WED;          // assign it one of the enum constants

    printf("Today's numeric value is: %d\n", today);

    if (today == SAT || today == SUN)
        printf("It's the weekend!\n");
    else
        printf("It's a weekday.\n");

    return 0;
}