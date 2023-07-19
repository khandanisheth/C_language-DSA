#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int rear=-1;
int front=-1;
int capacity;
void enQueueRearEnd(int*);
void enQueueFrontEnd(int*);
void deQueueFrontEnd(int*);
void deQueueRearEnd(int*);
void Queuetrevrse(int*);

void main()
{
    int *queue,choice;
    printf("Enter Queue Capacity");
    scanf("%d",&capacity);
    queue=(int*)malloc(sizeof(int)*capacity);
    ptintf("Press \n 1.Input Restricetd Dequeue/n Output Restricetd Dequeue");
    printf("Enter your choice :=>");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            while(1)
            {
                  printf("Press \n 1.EnQueue Rear End\n 3.DeQueue Front End\n");
                  printf("3.DeQueue Rear End\n 4.Queue Trevrse \n");
                  printf("Enter your choice =>");
                  scanf("%d",&choice);
                  switch(choice)
                  {
                      case 1:
                        enQueueRearEnd(queue);
                        break;
                      case 2:
                        deQueueFrontEnd(queue);
                        break;
                      case 3:
                        deQueueRearEnd(queue);
                        break;
                      case 4:
                        Queuetrevrse(queue);
                        break;
                      case 5:
                        exit(0);
                      default:
                        printf("Please Enter Valid Choice");
                  }
            }
        case 2:
            while(1)
            {
                  printf("Press \n 1.EnQueue Rear End\n 3.EnQueue Front End\n");
                  printf("3.DeQueue Front End\n 4.Queue Trevrse \n");
                  printf("Enter your choice =>");
                  scanf("%d",&choice);
                  switch(choice)
                  {
                      case 1:
                        enQueueRearEnd(queue);
                        break;
                      case 2:
                        enQueueFrontEnd(queue);
                        break;
                      case 3:
                        deQueueFrontEnd(queue);
                        break;
                      case 4:
                        Queuetrevrse(queue);
                        break;
                      case 5:
                        exit(0);
                      default:
                        printf("Please Enter Valid Choice");
                  }
            }

    }

}

void enQueueRearEnd(int *queue)
{

}
void enQueueFrontEnd(int *queue)
{

}
void deQueueFrontEnd(int *queue)
{

}
void deQueueRearEnd(int *queue)
{

}
void Queuetrevrse(int *queue)
{

}


