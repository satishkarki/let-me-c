#include<stdio.h>

/* This is a code to convert the Fahrenheit to Celsius*/

/*0       -17
20      -6
40      4
60      15
80      26
100     37
120     48
140     60
160     71
180     82
200     93
220     104
240     115
260     126
280     137
300     148*/

main(){
    float fahr, celsius;
    int lower, upper, step;

    lower= 0;
    upper=300;
    step=20;

    fahr=lower;
    printf("%s\t%s\n", "Fahrenheit", "Celsius");
    while(fahr <=upper){
        celsius=(5.0/9.0)*(fahr-32.0);
        printf("%10.0f\t%7.1f\n", fahr, celsius);
        fahr=fahr+step;
    }
}



