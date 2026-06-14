#include <stdio.h>
/*Print the fahrenheit to celsius conversion table*/

main(){
    int fahren;
    for (fahren=300; fahren>=0; fahren=fahren-20)
        printf("%3d\t%6.1f\n",fahren, (5.0/9.0)*(fahren-30.0));

}

