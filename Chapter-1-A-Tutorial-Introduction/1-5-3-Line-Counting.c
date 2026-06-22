#include <stdio.h>

/*
int main(){
    int c, nl;
    while((c=getchar())!=EOF){
        if(c=='\n')
            ++nl;
    }
    printf("The total number of line is %d\n", nl);
}
    */
/*
int main(){
    int c, nl, nb, nt;
    while((c=getchar())!=EOF){
        if(c=='\n')
            ++nl;
        if(c==' ')
            ++ nb;
        if(c=='\t')
            ++nt;
    }
    printf("The total number of line, blank and tabs are %d, %d, %d", nl, nb, nt);
}
    */


/*Exercise 1-9. Write a program to copy its input to its output, replacing each string of one or
more blanks by a single blank.*/

int main(){
    int c, lastc;
    while((c=getchar())!=EOF){
        if(c==' ' && lastc ==' ')
            ;
        else
            putchar(c);
        lastc=c;
    }
}
