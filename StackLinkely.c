#include <stdio.h>
#include<stdlib.h>

 struct node
 {
     int info;
     struct node *link ;
 };

 struct node *top=NULL;
 void Push();
 void Pop();
 void StackDisplay();

 int main()
 {
     int choice;
     while(1)
     {
         printf("Press .\n 1.Push Operation \n 2.Pop Operation \n 3.Stack Is Display \n 4.Exit \n");
         printf("Enter Your Choice =>");
         scanf("%d",&choice);

         switch(choice)
         {
         case 1:
            Push();
            break;
         case 2:
            Pop();
            break;
         case 3:
            StackDisplay();
            break;
        case 4:
            exit(0);
        default:
            printf("Sorry || InValid Choice \n");
         }
     }
     return 0;
 }

 void Push()
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));

    printf("Enter Stack Element =>");
    scanf("%d",&temp->info);
    temp->link=NULL;

    if(top==NULL)
        top=temp;
    else
    {
       temp->link=top;
       top=temp;
    }
    printf("Item SuccessFully Pushed Stack List \n");
}
 void Pop()
 {
     struct node*release;
     if(top==NULL)
        printf("Sorry || Stack Is UnderFlow \n");
     else
     {
         release=top;
         printf("Popped Item =>%d ", release->info);
         top=top->link;
         free(release);
         printf("Stack Is Popped Operation SuccessFully !\n ");
     }
 }
 void StackDisplay()
 {
     struct node *tr;
     if(top==NULL)
        printf("Stack Is Empty !.\n");
     else
     {
         tr=top;
         printf("Stack Is All Item =>\n");
         while(tr!=NULL){
            printf("%d \t",tr->info);
         tr=tr->link;
         }
     }
 }
