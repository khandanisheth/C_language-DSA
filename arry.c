
#include <stdio.h>


int main() {
      int n[10],i=0,t,j;
      for(i=0;i<9;i++){
        scanf(" enter value =>%d",&n[i]);
        i=0;
        j=9;
        while(i<5){
            t=n[i];
            n[i]=n[j];
            n[j]=t;
            j++;


        }

      }

 return 0;
}
