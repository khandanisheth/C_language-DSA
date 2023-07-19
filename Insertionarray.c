#include <stdio.h>
#include<stdlib.h>

void insert(int *,int );

void main()
{
    int *arr,n,i;
    printf("Enter Array Capacity ->");
    scanf("%d",&n);
    arr=(int *)malloc(sizeof(int)*n);

    printf("Enter Array Element -> \n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    printf("Before Insertion Array Element -> \n");
    for(i=0;i<n;i++)
        printf("%d\n",arr[i]);

    insert(arr,n);

    printf("Before Insertion Array Element -> \n");
    for(i=0;i<=n;i++)
        printf("%d\n",arr[i]);

    return 0;
}

void insert(int *arr,int n)
{
    int i,pos,item;

    printf("Enter Position  And  -> Item\n");
    scanf("%d%d",&pos,&item);

    for(i=n;i>pos;i--)
        arr[i]=arr[i-1];
    arr[pos]=item;
}
