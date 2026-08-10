#include <stdio.h>

void swap(int *pa, int *pb)
{
    int temp;
    temp=*pa;
    *pa=*pb;
    *pb=temp;
}
int main()
{
    int a=5,b=10;
    printf("The value of a is %d and b is %d before the swap\n", a,b);
    swap(&a,&b);
    printf("The value of a is %d and b is %d after the swap\n", a,b);
    return 0;
}