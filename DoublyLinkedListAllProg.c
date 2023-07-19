
//***---------------Doubly linked List -------------------***

#include <stdio.h>
#include<stdlib.h>

struct node
{
    struct node *prev;
    int info;
    struct node *next ;
};

struct node *start=NULL;
struct node *CreateNode();
void InsertNodeFirstPosition();
void InsertNodeEndPosition();
void InsertNodeSpecifiedPosition();
void DeletedFirstNodePosition();
void DeletedEndNodePosition();
void DeletedNodeSpecifiedPosition();
void TraverseNodeList();
int main()
{
    int choice;
    printf("\n ***---------------Doubly linked List -------------------*** \n \n");
    while(1)
    {
        printf("Press. \n 1.Insert Node First Position \n 2.Insert Node End Position \n 3.Insert Node Specified Position \n");
        printf(" 4.Deleted First Node Position \n 5.Deleted End Node Position \n 6.Deleted Node Specified Position \n");
        printf(" 7.Traverse Node List \n 8 Exit .\n Enter Your Choice =>");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            InsertNodeFirstPosition();
            break;
        case 2:
            InsertNodeEndPosition();
            break;
        case 3:
            InsertNodeSpecifiedPosition();
            break;
        case 4:
            DeletedFirstNodePosition();
            break;
        case 5:
            DeletedEndNodePosition();
            break;
        case 6:
            DeletedNodeSpecifiedPosition();
            break;
        case 7:
            TraverseNodeList();
            break;
        case 8:
            exit(0);
        default :
            printf("Sorry || InValid Choice .\n");
        }
    }
    return 0;
}


struct node *CreateNode()
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->prev=NULL;
    printf("Enter Node Item =>");
    scanf("%d",&temp->info);
    temp->next=NULL;
    return(temp);
}

/* ------------Insert Node First Position --------------*/

void InsertNodeFirstPosition()
{
    struct node *n;
    n=CreateNode();
    if(start==NULL)
        start=n;
    else
    {
        n->next=start;
        start->prev=n;
        start=n;
    }
    printf("new Node Successfully inserted at Start.\n");
}

/* ------------Insert Node End Position --------------*/
void InsertNodeEndPosition()
{
    struct node *tr,*n;
    n=CreateNode();
    if(start==NULL)
        start=n;
    else
    {
        tr=start;
        while(tr->next!=NULL)
            tr=tr->next;
        tr->next=n;
        n->prev=tr;
    }
      printf("new Node Successfully inserted at End.\n");
}

/* ------------Insert Node Specified Position --------------*/

void InsertNodeSpecifiedPosition()
{
    int count,pos ,i;
    struct node *tr,*n,*x;
    if(start==NULL)
    {
        InsertNodeEndPosition();
        printf("The List Is 2 Less Than Node \n");
    }
    else
    {
        tr=start;
        while(tr!=NULL)
        {
            count++;
            tr=tr->next;
        }
        if(count<2)
        {
            InsertNodeEndPosition();
            printf("The List Is 2 Less Than Node \n");
        }
        if(count>=2)
        {
            printf("Enter Position Node Of 2 to %d =>",count);
            scanf("%d",&pos);
           if(pos<=1||pos>count)
                printf("Sorry || Please Valid Position .\n");
            else
            {
                tr=start;
                n=CreateNode();
                for(i=1;i<pos-1;i++)
                    tr=tr->next;
                  n->prev=tr;
                  n->next=tr->next;
                  tr->next=n;
                  tr->next->prev=n;
                  printf("New Node SuccessFully At %d Position .",pos);
            }
        }
    }
}

 /*-------------------Deleted First Node Position--------------*/

void DeletedFirstNodePosition()
{
  struct node *re;
  if(start==NULL)
    printf("List Is UnderFlow ! \n ");
  else
  {
      re=start;
      printf("Deleted Item ->%d \n ",re->info);
      start=start->next;
      if(start!=NULL)
        start->prev=NULL;
      free(re);
      printf("List First Node SuccessFully Deleted \n");
  }

}

/*-------------------Deleted First Node Position--------------*/

void DeletedEndNodePosition()
{
    struct node *tr,*release;
    if(start==NULL)
        printf("Sorry || The List Is Empty ,Deletion Is Not Possible .\n");
    else if(start->next==NULL)
    {
       release=start;
       printf("Deleted Node Item =>%d\n",release->info);
       start=NULL;
       free(release);
       printf("Deletion is SuccessFully End Node .\n");
    }
    else
    {
        tr=start;
        while(tr->next!=NULL)
        {

            tr=tr->next;
        }
         release=tr;
         printf("Deleted Node Item =>%d\n",release->info);
         tr->prev->next=NULL;
         free(release);
        printf("Deletion is SuccessFully First Node .\n");
    }
}

/*-------------------Deleted Specified Node Position--------------*/

void DeletedNodeSpecifiedPosition()
{
    struct node *tr,*release;
    int count=0,pos,i;
    if(start==NULL)
        printf("Sorry || The List Is Empty ,Deletion Is Not Possible .\n");
    else
    {
        tr=start;
        while(tr!=NULL)
        {
            count++;
            tr=tr->next;
        }
        if(count<=2)
        {
            printf("Numbers Of Nodes 3 Less Than .\n Deletion Is Not Possible .\n");
        }
        else
        {
            printf("Enter Delete Node Position BetWeen 2 And %d =>",count-1);
            scanf("%d",&pos);
            if(pos<=1||pos>=count)
               printf("Sorry || InValid Position || Your Position %d Minimum(3) and Max (3++).\n");
            else
            {
                tr=start;
                for(i=1;i<pos-1;i++)
                    tr=tr->next;
                release=tr->next;
                printf("Deleted Node Item =>%d\n",release->info);
                tr->next=release->next;
                release->next->prev=tr;
                free(release);
                printf("The %d Position Node   SuccessFully Deleted .",pos);
            }
        }
    }
}

 /*------------Traverse List //////////*/

void TraverseNodeList()
{
    struct node *tr;
    if(start==NULL)
        printf("Sorry || List Is Empty \n");
    else
    {
        tr=start;
        printf("ALl List Node Item=>\n");
        while(tr!=NULL){
            printf("%d \t",tr->info);
        tr=tr->next;
       }
    }
}MYIPL5K
