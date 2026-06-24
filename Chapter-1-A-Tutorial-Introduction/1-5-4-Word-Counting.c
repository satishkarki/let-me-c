
/*BAre bone version of UNIX program wc*/
#include <stdio.h>
#define IN 1 /*Inside a word*/
#define OUT 0 /*Outside a word*/

/*
int main(){
    int c, nc, nl, nw, state;
    state=OUT;
    while((c=getchar())!= EOF){
        ++nc;
        if (c=='\n') 
            ++nl;
        if (c==' ' || c=='\t' || c=='\n')
            state=OUT;
        else if (state ==OUT){
            state=IN;
            ++nw;
        }   
    }
    printf("The number of characters is %d,\nThe number of new line is %d,\nAnd the number of words is %d\n",nc,nl,nw);
}
    */


    /*Exercise 1-12 - Write a program that prints its input one word per line*/
int main(){
    int c, state;
    state=OUT;
    while((c=getchar())!=EOF){
        if (c==' '||c=='\n'||c=='\t'){
            if(state==IN)
                putchar('\n');
            state=OUT;

        }
        else{
            putchar(c);
            state=IN;
        }
        
    }
}