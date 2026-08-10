/* Write a function void increment(int *n) that adds 1 to whatever n points to. 
Then write the two lines of main that declare an int count = 5; and call increment on it correctly. */

#include <stdio.h>
void increment(int *n)
{
    *n = *n + 1;   // or equivalently: (*n)++;
}

int main(void)
{
    int count = 5;
    increment(&count);   // pass the address of count
    printf("%d\n", count);   // prints 6
    return 0;
}