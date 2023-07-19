#include<stdio.h>
#include<stdlib.h>
int front=-1;
int rear=-1;
int n;
void EnQueue(int *,int);
void DeQueue(int*);
void QueueDisplay(int *);

int main(){
    int *queue,choice;
    printf("Enter queue Capacity =>");
    scanf("%d",&n);

    queue =(int *)malloc(sizeof(int)*n);

    while(1){
         printf("Press.\n 1.EnQueue Operation \n2.DeQueue Opration\n");
         printf("3.Queue Display \n 4.Exit\n Enter Your Choice =>");
         scanf("%d",&choice);

         switch(choice){
         case 1:
            EnQueue(queue,n);
            break;
         case 2:
            DeQueue(queue);
            break;
         case 3:
            QueueDisplay(queue);
            break;
         case 4:
            exit(0);
         default :
            printf("Please || Enter Valid Choice \n");

         }
    }
    return 0;
}

void EnQueue(int *queue,int n){
    int item ;
    if((rear+1)%n==front)
        printf("Queue Is OverFlow \n");
    else{
        printf("Enter Queue Item =>");
        scanf("%d",&item);
        rear=(rear+1)%n;
        queue[rear]=item;

        if(front==-1)
            front++;
         printf("Item Successfully Enqueued.");
    }
}

void DeQueue(int*queue ){
    int item;
    if(front==-1)
        printf("Stack Is UnderFlow \n");
    else{
        item=queue[front];
        printf("Item Deleted Item =>%d",item);
        if(front ==rear)
            front=rear=-1;
        else
       front=(front+1)%n;
        printf("DeQueue Successfully Orqtion");

    }
}
void QueueDisplay(int *queue){
    int i;
    if(front==-1)
    printf("Queue Empty");
    else{
        printf("Stack Is All Item =>\n");
        if(rear<front){
            for(i=front;i<n;i++)
                printf("Queue [%d] => %d\n",i,queue[i]);
            for(i=0;i<=rear;i++)
                printf("Queue [%d] => %d\n",i,queue[i]);
        }
        else
            for(i=front;i<=rear;i++)
               printf("Queue [%d] => %d\n",i,queue[i]);

    }
}

