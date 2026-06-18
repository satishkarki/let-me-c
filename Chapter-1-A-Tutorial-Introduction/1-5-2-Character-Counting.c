#include <stdio.h>

/*
int main(){
    long character_count;
    while(getchar() !=EOF){
        ++character_count;
    }
    printf("The total characters in the file or input is %ld", character_count);
}
*/

int main(){
    double character_count;
    for(character_count=0; getchar()!=EOF; ++character_count)
    ;
    printf(" The total character in the file or input is %.0f", character_count);
}