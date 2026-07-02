#include <stdio.h>
#define IN 1
#define OUT 0
#define MaxLen 20





int main(){
    int c, i, j, state, lenWord;
    int wordCount[MaxLen];
    lenWord=0;
    state= OUT;

    for (i=0;i<MaxLen;++i)
        wordCount[i]=0;

    while((c=getchar())!=EOF){
        if(c!=' '&& c!='\n' && c!='\t'){
            state= IN;
            ++lenWord;
            

        }
        else{
            if(state==IN){
            ++wordCount[lenWord];
            lenWord=0;
            }
            state=OUT;

        }

    }
    printf("Word count histogram:\n");
    for(i=0;i<MaxLen; ++i){
        if(wordCount[i]>0){
            printf("%2d | ",i);
            for(j=0;j<wordCount[i]; ++j)
                printf("*");
            printf("\n");
        }
    }


}

