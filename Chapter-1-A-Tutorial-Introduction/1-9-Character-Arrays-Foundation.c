/* Foundation*/

#include <stdio.h>
int main(){
    char word[10];
    int c, i;
    i=0;
    printf("Enter the word:");
    while((c=getchar())!='\n' && c!=EOF)
        word[i++]=c;
    word[i]='\0';
    printf("The word you entered is %s\n", word);
    printf("The length of the word is %d",i);
    return 0;
}