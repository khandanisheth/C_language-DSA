#include<stdio.h>

#include<stdlib.h>
int capacity;
int front=-1;
int rear=-1;
int *queue;
void enQueueRearEnd();
void enQueueFrontEnd();
void deQueueFrontEnd();
void deQueueRearEnd();
void queueTraverse();
void main()
{
    int choice;
    printf("Enter Queue Capacity : ");
    scanf("%d",&capacity);
    queue=(int*)malloc(sizeof(int)*capacity);
    printf("Press.\n");
    printf("1. Input Restricted DeQue .\n");
    printf("2. Output Restricted DeQue.\n");
    printf("Enter Your Choice : ");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        while(1)
        {
            printf("Press.\n");
            printf("1. Enqueue Rear End.\n");
            printf("2. Dequeue Front End.\n");
            printf("3. Dequeue Rear End.\n");
            printf("4. Queue Traverse.\n");
            printf("5. Exit.\n");
            printf("Enter Your Choice : ");
            scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            enQueueRearEnd();
            break;
        case 2:
            deQueueFrontEnd();
            break;
        case 3:
            deQueueRearEnd();
            break;
        case 4:
            queueTraverse();
            break;
        case 5:
            exit(0);
        default:
                printf("Sorry | Invalid Choice.");
        }

    }
         case 2:
            while(1)
            {
                printf("Press.\n");
                printf("1. Enqueue Rear End.\n");
                printf("2. Enqueue Front End.\n");
                printf("3. Dequeue Front End.\n");
                printf("4. Queue Traverse.\n");
                printf("5. Exit.\n");
                printf("Enter Your Choice : ");
                scanf("%d",&choice);
                switch(choice)
                {
                case 1:
                    enQueueRearEnd();
                    break;
                case 2:
                    enQueueFrontEnd();
                    break;
                case 3:
                    deQueueFrontEnd();
                    break;
                case 4:
                    queueTraverse();
                    break;
                case 5:
                    exit(0);
                default:
                    printf("Sorry | Invalid Choice.");
                }

            }
    }
}
void enQueueRearEnd()
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
        printf("Item Successfully Enqueued Using Rear End.");
    }
}
void enQueueFrontEnd()
{
    int item;
    if(front==0)
        printf("Queue Overflow.");
    else
    {
        printf("Enter Queue Item : ");
        scanf("%d",&item);
        if(front==1)
            front=rear=0;
        else
            front++;
        queue[front]=item;
        printf("Item Successfully Enqueued Using Front End.");
    }
}
void deQueueFrontEnd()
{
    int item;
    if(front==-1)
        printf("Queue Underflow.");
    else
    {
        item=queue[front];
        printf("Deleted Item : %d\n",item);
        if(front==rear)
            front=rear=-1;
        else
            front++;
        printf("Item Successfully Dequeued Using Front End.");
    }
}
void deQueueRearEnd()
{
    int item;
    if(rear==-1)
        printf("Queue Underflow.");
    else
    {
        item=queue[rear];
        printf("Deleted Item : %d\n",item);
        if(front==rear)
            front=rear=-1;
        else
            rear--;
        printf("Item Successfully Dequeued Using Rear End.");
    }
}
void queueTraverse()
{
    int i;
    if(front==-1)
        printf("Queue Empty.");
    else{
        printf("The Queue Elements Are\n");
        for(i=front;i<=rear;i++)
            printf("%d\t",queue[i]);
    }
}


