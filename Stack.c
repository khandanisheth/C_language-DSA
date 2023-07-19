#include<stdio.h>
#include<conio.h>

int top=-1;
void push(int *,int);
void pop(int*,int );
void StackDisplay(int *,int );

int main(){
    int *stack, n,choice;
    printf("Enter Stack Capacity =>");
    scanf("%d",&n);

    stack =(int *)malloc(sizeof(int)*n);

    while(1){
         printf("Press.\n 1.Push Operation \n 2.PoP Operation\n");
         printf("3.Stack Display \n 4.Exit\n Enter Your Choice =>");
         scanf("%d",&choice);

         switch(choice){
         case 1:
            push(stack,n);
            break;
         case 2:
            pop(stack,n);
            break;
         case 3:
            StackDisplay(stack,n);
            break;
         case 4:
            exit(0);
         default :
            printf("Please || Enter Valid Choice \n");

         }
    }
    return 0;
}

void push(int *stack,int n){
    int item ;
    if(top==n-1)
        printf("Stack Is OverFlow \n");
    else{
        printf("Enter Stack Item =>");
        scanf("%d",&item);
        top++;
        stack[top]=item;
        printf("Item Successfully Pushed\n");

    }
}


void pop(int*stack,int n ){
    int item;
    if(top==-1)
        printf("Stack Is UnderFlow \n");
    else{
        item=stack[top];
        printf("Stack Deleted Item =>%d\n",item);
        top--;
        printf("Stack Successfully Pop Opration\n");
    }
}
void StackDisplay(int *stack,int n){
    int i;
    if(top==-1)
        printf("Stack Is Empty .\n");
    else
    {
    printf("Stack Is All Item =>\n");
    for(i=0;i<=top;i++)
        printf("Stack [%d] => %d\n",i,stack[i]);
    }
}

/*

#include<stdio.h>

#include<stdlib.h>
int front=-1;
int rear=-1;
void enQueue(int*,int);
void deQueue(int*);
void queueDispaly(int*);
void main()
{
    int *queue,capacity,choice;
    printf("Enter Queue Capacity : ");
    scanf("%d",&capacity);
    queue=(int*)malloc(sizeof(int)*capacity);
    while(1)
    {

        printf("Press.\n");
        printf("1. Enqueue Operation.\n");
        printf("2. Dequeue Operation.\n");
        printf("3. Queue Traverse.\n");
        printf("4. Exit.\nEnter Your Choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            enQueue(queue,capacity);
            break;
        case 2:
            deQueue(queue);
            break;
        case 3:
            queueDispaly(queue);
            break;
        case 4:
            exit(0);
        default:
            printf("Sorry | Invalid Choice.");
        }

    }
}
void enQueue(int *queue,int capacity)
{
    int item;
    if(rear==capacity-1)
        printf("Queue Overflow.");
    else
    {
        printf("Enter Queue Item : ");
        scanf("%d",&item);
        rear++;
        queue[rear]=item;
        if(front==-1)
            front++;
        printf("Item Successfully Enqueued.");
    }
}
void deQueue(int *queue)
{
    int item;
    if(front==-1)
        printf("Queue Underflow.");
    else
    {
        item=queue[front];
        printf("Dequeued Item : %d\n",item);
        if(front==rear)
            front=rear=-1;
        else
            front++;
        printf("Item Successfully Dequeued.");
    }
}
void queueDispaly(int *queue)
{
    int i;
    if(front==-1)
        printf("Queue Empty.");
    else
    {
        printf("The Queue Elements Are\n");
        for(i=front;i<=rear;i++)
            printf("%d\t",queue[i]);
    }
}*/
