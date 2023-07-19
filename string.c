#include<stdio.h>
#include<string.h>

void main(){
    char string[20];
    int i,wc=1;
    gets(string);
    i=0;

    while(string[i]=='10'){
        if(string[i]==' ')
            wc=wc+1;
        i++;
    }
    printf("yytyututyr   =%d",wc);
}
