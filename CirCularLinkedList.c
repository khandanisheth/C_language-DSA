#include <stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node *link;
};

struct node *last =NULL;
struct node *CreateNode();
void CircularInsertFirstNode();
void CircularInsertEndNode();
void CircularInsertSpecifiedPositionNode();
void CircularDeleteFirstNode();
void CircularDeletedEndNode();
void CircularDeleteSpecifiedPositionNode();
void CircularTreverse();

int main()
{
    int choice;
    while(1)
    {
         printf("Press. \n 1.Circular Insert First.\n 2.Circular Insert End Node. \n 3.Circular Insert Specified Position Node.\n");
         printf("\n 4.Circular Deleted   First.\n 5.Circular Deleted End Node. \n 6.Circular Deleted Specified Position Node.\n");
         printf(" 7.Circular Traverse. \n 8.Exit. \n Enter Your Choice =>");
         scanf("%d",&choice);
         switch(choice)
         {
         case 1:
            CircularInsertFirstNode();
            break;
         case 2:
            CircularInsertEndNode();
            break;
         case 3:
            CircularInsertSpecifiedPositionNode();
            break;
        case 4:
            CircularDeleteFirstNode();
            break;
         case 5:
            CircularDeletedEndNode();
            break;
         case 6:
            CircularDeleteSpecifiedPositionNode();
            break;
         case 7:
            CircularTreverse();
            break;
         case 8:
            exit(0);
         default :
            printf("Sorry || Please Choice Is False -?\n\n");
         }
    }
    return 0;
}

struct node *CreateNode()
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter Circular List Item ->");
    scanf("%d",&temp->info);
    temp->link=NULL;
    return (temp);
}
void CircularInsertFirstNode()
{
    struct node *n;
    n=CreateNode();
    if(last==NULL)
    {
        last=n;
        last->link=n;
    }
    else
    {
       n->link=last->link;
       last->link=n;
    }
    printf("New Node Is SuccessFully Insert Beginning Node Item -!");
}
void CircularInsertEndNode()
{
    struct node *tr;
    tr=CreateNode();
    if(last==NULL)
    {
        last=tr;
        last->link=tr;
    }
    else
    {
        tr->link=last->link;
        last->link=tr;
        last=tr;
    }
      printf("New Node Is SuccessFully End  Node Item -!");
}
void CircularInsertSpecifiedPositionNode()
{
    int count,pos,i;
    struct node *tr,*temp;
    if(last==NULL)
    {
        CircularInsertEndNode();
        printf("\n The List Item Is 3 Less Then-! dddd \n ");
    }
    else
    {
        tr=last;
        while(tr->link!=last)
        {
            count++;
            tr=tr->link;
        }
        if(count<2)
        {
            CircularInsertEndNode();
            printf(" /n The List Item Is 2 Less Then -!");
        }
        if(count>=2)
        {
            printf("Enter Position This List ->");
            scanf("%d",&pos);
            if(pos<=1||pos>count)
                printf("Sorry || Please Valid Position -! \n \n");
            else
            {
                tr=last;
                temp=CreateNode();
                for(i=0;i<pos-1;i++)
                {
                     tr=tr->link;
                }
                temp->link=tr->link;
                tr->link=temp;
                printf("New Node SuccessFully At %d Position .",pos);
            }
        }
    }
}

void CircularDeleteFirstNode()
{
    struct node *release;
    if(last==NULL)
        printf("The List Is Empty || Deletion Is Not Possible  -!");
    else
    {
        release=last->link;
        printf("Deleted Node First -> %d\n",release->info);
        if(last==last->link)
            last=NULL;
        else
            last->link=release->link;
        free(release);
        printf("First Node Delete SuccessFully Item -!");
    }
}
void CircularDeletedEndNode()
{
    struct node *release,*tr;
    if(last==NULL)
        printf("The List Is Empty || Deletion Is Not Possible  -!");
    else
    {
        release=last;
        printf("Deleted Node End r-> %d\n",release->info);

        if(last==last->link)
            last=NULL;
        else
        {
            tr=last->link;
        while(tr->link!=last)
            tr=tr->link;
        tr->link=last->link;
        last=tr;
        }
        free(release);
        printf("End Node Delete SuccessFully  -!");
    }
}
void CircularDeleteSpecifiedPositionNode()
{
    struct node *tr,*release;
    int count=0,pos,i;
    if(last==NULL)
        printf("Sorry || The List Is Empty ,Deletion Is Not Possible .\n");
    else
    {
         tr=last;
        while(tr->link!=last)
        {
            count++;
            tr=tr->link;
        }
        if(count<=2)
        {
            printf("Numbers Of Nodes 3 Less Than .\n Deletion Is Not Possible .\n");
        }

        else
        {
            printf("\nEnter Deletion Node Position Between 2 And %d ->\n ",count-1);
            printf("Enter Position ->\n");
            scanf("%d",&pos);
            if(pos<=1||pos>=count)
                printf("Sorry || InValid Position || Your Position %d Minimum(3) and Max (3++).\n",pos);
            else
            {
                release=last;
                for(i=0; i<pos; i++)
                {
                    tr=release;
                    release=release->link;
                }

                release=tr->link;
                printf("Deleted Item-> %d",release->info);
                tr->link=release->link;
                free(release);
                printf("Deletion IS SuccessFully Position -> %d\n",pos);
            }
        }
    }
}


void CircularTreverse()
{
    struct node*tr;
    if(last==NULL)
        printf("Sorry || List Is Empty -!");
    else
    {
        tr=last->link;
        printf("List All Item ->\n");
        do
        {
            printf("%d \t",tr->info);
            tr=tr->link;
        }while(tr!=last->link);
    }
}

