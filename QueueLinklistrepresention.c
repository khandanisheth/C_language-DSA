#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
};

struct node * rear=NULL;
struct node *front=NULL;

void EnQueue();
void DeQueue();
void QueueDisplay();

int main()
{
    int choice;
while(1)
    {
        printf("Press .\n 1 Queue EnQueue Operation \n 2.Queue DeQueue Operation \n 3.Queue Display \n ");
        printf("Enter Your Choice =>");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            EnQueue();
            break;
        case 2:
            DeQueue();
            break;
        case 3:
            QueueDisplay();
            break;
        case 4:
            exit(0);
        default :
            printf("Sorry || InValid Choice.\n");
        }
    }
    return 0;
}

void EnQueue()
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("Enter Queue Item =>");
    scanf("%d",&temp->info);
    temp->link=NULL;
    if(rear==NULL)

     front=rear=temp;
     else
     {
         rear->link=temp;
         rear=temp;
         printf("Node SuccessFully EnQueue ");
     }

}
void DeQueue()
{
    struct node *release;
    if(front==NULL)
        printf("Queue Is UnderFlow \n");
    else
    {
        release=front;
        printf("DeQueue Deleted Item => %d \n",release->info);
        if(front==rear)
            front=rear=NULL;
        else
            front=front->link;
        free(release);
         printf("Node Is successFully DeQueued Item .\n");
    }

}
void QueueDisplay()
{
    struct node *tr;
    if(front==NULL)
        printf("Queue Is Empty \n");
    else
    {
        tr=front;
        printf("Queue Is All Item =>\n");
        while(tr!=NULL)
        {
            printf("%d \t ",tr->info);
            tr=tr->link;
        }
    }
}
