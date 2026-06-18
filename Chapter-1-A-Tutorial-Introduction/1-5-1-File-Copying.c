#include <stdio.h>

/*Implicit way*/
/*
main(){
    int c;
    c=getchar();
    while(c!=EOF){
        putchar(c);
        c=getchar();
    }
}
*/

/*Explict Way*/

main(){
    int c;
    int result;
    while ((c=getchar()) != EOF){
        result=(c!=EOF);
        putchar(c);
        printf("The value of while statement is %d\n", result);
    }
    result=(c!=EOF);
    printf("The value of while statement is now %d\n", result);
    
}

