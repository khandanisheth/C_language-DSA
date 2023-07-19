#include<stdio.h>
#include<conio.h>

int InsertionSort(int *,int);
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


     InsertionSort(arr,n);

     printf("Array All Element Before Sorting =>\n");
    for(int i=0;i<n;i++)
        printf("arr[%d] => %d\n",i,arr[i]);
    return 0;

}
int InsertionSort(int*arr,int n){



     int i,j,temp;
     for(i=1;i<n;i++){
        temp=arr[i];
        j=i-1;
        while(j>=0&&temp<arr[j]){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
     }
}
