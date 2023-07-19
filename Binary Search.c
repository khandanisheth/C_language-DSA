#include<stdio.h>
#include<stdlib.h>

int BinarySearch(int *,int,int);
int main(){
    int *arr,n,item,flag;
    printf("Enter Array Capacity =>");
    scanf("%d",&n);

    arr=(int*)malloc(sizeof(int)*n);

    printf("Enter Array Element =>\n");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);

    printf("Array All Element =>\n");
    for(int i=0;i<n;i++)
        printf("arr[%d] => %d\n",i,arr[i]);

    printf("Enter Item For Serach => ");
    scanf("%d",&item);

    flag=BinarySearch(arr,n,item);

    if(flag==0)
        printf("Search For UnSuccessfully\n");

    else
        printf("Search Successfull ");
    return 0;

}
int BinarySearch(int*arr,int n ,int item){
    int lb,mid;
    int ub=n-1;
    while(ub>=lb){
        mid=(ub+lb)/2;
        if(item==arr[mid]){
            printf("Element SuccessFully Search  For Element Index Number %d =>%d\n",mid,item);
           return 1;

        }
        else if(item>arr[mid])
            lb=mid+1;
          else
            ub=mid-1;

    }
    return 0;
}
