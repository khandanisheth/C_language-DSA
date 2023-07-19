#include<stdio.h>
#include<conio.h>
int min(int *,int ,int );
int SelectionSort(int *,int);
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


     SelectionSort(arr,n);

     printf("Array All Element Before Sorting =>\n");
    for(int i=0;i<n;i++)
        printf("arr[%d] => %d\n",i,arr[i]);
    return 0;

}
int SelectionSort(int*arr,int n){
    int k,temp,loc;
    for(k=0;k<n-1;k++){
     loc=min(arr,k,n);
        temp=arr[k];
        arr[k]=arr[loc];
        arr[loc]=temp;
    }
}
int min(int *arr,int k,int n){
    int mininum=arr[k];
    int j,loc;
    loc=k;
    for(j=k+1;j<n;j++){
        if(mininum>arr[j]){
            mininum=arr[j];
            loc=j;
        }
    }
    return loc;
}
