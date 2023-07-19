#include<stdio.h>
#include<conio.h>

void Lenersearch(int *,int,int);
int main(){
    int *arr,n,item;
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

    Lenersearch(arr,n,item);
    return 0;

}
void Lenersearch(int*arr,int n ,int item){
    int i,flag;
    for(i=0;i<n;i++){
        if(item==arr[i]){
            printf("Element SuccessFully Search  For Element Index Number %d =>%d\n",i,item);
            flag==1;
        }
    }
    if(flag==0)
        printf("Search For UnSuccessfully\n");

    else
        printf("Search Successfull ");
}
