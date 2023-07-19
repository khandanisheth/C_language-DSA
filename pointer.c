// Online C compiler to run C program online
#include <stdio.h>

void treverse(int *,int );


int main() {
    int n ,i,arr[20];
    printf("Enter Array Capacity =>");
    scanf("%d",&n);
    printf("Enter Array Element =>\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("After  Array All Element =>");
    for(i=0;i<n;i++)
        printf("arr[%d] => %d\n",i,arr[i]);

     treverse(arr,n);

     printf("Before Array All Element =>");
    for(i=0;i<n-1;i++)
        printf("arr[%d] => %d\n",i,arr[i]);
    return 0;
}
void treverse(int *arr,int n){
    int i,pos,item;
    printf("Enter pos  =>");
    scanf("%d",&pos);
  printf("deleted item:%d\n",item);
    for(i=pos;i<n-1;i--)
        arr[i]=arr[i+1];


}
