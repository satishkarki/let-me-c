#include <stdio.h>

/*Symbolic Constant*/

#define LOWER 0
#define UPPER 300
#define STEP 20

main(){
    int fahren;
    for(fahren=LOWER; fahren<=UPPER; fahren=fahren+STEP)
        printf("%3d\t%6.1f\n", fahren, (5.0/9.0)*(fahren-30.0) );
}