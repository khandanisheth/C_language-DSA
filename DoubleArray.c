// Online C compiler to run C program online
#include <stdio.h>

int main() {

    int row,col,number[44][
        33];
  printf("Enter Row Num ->");
    scanf("%d",&row);
    printf("Enter col Num ->");
    scanf("%d",&col);

   for(int i=0; i<row; i++) {
           //columns3
           for(int j=0; j<col; j++) {
              scanf("%d",&number[i][j]);
           }
       }


       for(int i=0; i<row; i++) {
           for(int j=0; j<col; j++) {
                   printf("%d \t",number[i][j]);
               }
               printf("\n \n");
           }


    return 0;
}
