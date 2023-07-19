#include<stdio.h>
#include<string.h>
int fact(int n)
{
    if(n==0)
        return 1;
    else
    {
        return n*fact(n-1);
    }
}
void main()
{

    int x=fact(5);
    printf("%d",x);
}
