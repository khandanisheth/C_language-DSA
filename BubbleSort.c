#include<stdio.h>
#include<conio.h>

int BubbleSort(int *,int);
int main(){
    int *arr,n;
    printf("Enter Array Capacity =>");
    scanf("%d",&n);

    arr=(int*)malloc(sizeof(int)*n);

    printf("Enter Array Element =>\n");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);

    printf("Array All Element After Sorting=>\n");
    for(int i=0;i<n;i++)
        printf("arr[%d] => %d\n",i,arr[i]);


     BubbleSort(arr,n);

     printf("Array All Element Before Sorting =>\n");
    for(int i=0;i<n;i++)
        printf("arr[%d] => %d\n",i,arr[i]);
    return 0;

}
int BubbleSort(int*arr,int n){
    int pass,i,item;
    for(pass=0;pass<n-1;pass++){
        for(i=0;i<n-pass-1;i++){
           if(arr[i]>arr[i+1]){
             item=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=item;
           }
        }
    }
     /*int temp,pass,i;
      for(pass=0;pass<n-1;pass++){
          for(i=0;i<n-pass-1;i++){
              if(arr[i]>arr[i+1]){
              temp=arr[i];
              arr[i]=arr[i+1];
              arr[i+1]=temp;
              }
          }
      }*/
}
