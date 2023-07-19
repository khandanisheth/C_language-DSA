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
    temp=(struct node *)malloc(sizeof(struct node));
    temp->prev=NULL;
    printf("Enter list Item ->");
    scanf("%d",&temp->info);
    temp->next=NULL;
    return temp;
}
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
        n->prev=tr;
        tr->next=n;
    }
     printf("new Node Successfully inserted at End hhhhhhhhhhhh.\n");
}
void InsertNodeSpecifiedPosition()
{
    struct node *tr,*n;
    int pos,count,i;
    if(start==NULL)
    {
        InsertNodeEndPosition();
        printf("List Is Two Less Than Item \n");
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
            printf("List Is 2 Less Than \n");
        }
        if(count>=2)
        {
            printf("Enter LIst Position ->");
            scanf("%d",&pos);
            if(pos<=1 || count<pos)
                printf("Position Is InValid \n\n");
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
                 printf("New Node SuccessFully At %d Position .\n",pos);
            }
        }
    }
}
void DeletedFirstNodePosition()
{
    struct node *re;
    if(start==NULL)
        printf("List Is Empty \n ");
    else
    {
        re=start;
        printf("Deleted Item -> %d",re->info);
        start=re->next;
        if(start!=NULL)
        start->prev=NULL;
        free(re);
        printf("Deleted Is SuccessFully First Item");
    }
}
void DeletedEndNodePosition()
{
    struct node *tr,*re;
    if(start==NULL)
        printf("List Is Empty \n");
    else if(start->next==NULL)
    {
        re=start;
        printf("Deleted Item -> %d\n",re->info);
        start=NULL;
        free(re);
        printf("Deletion is SuccessFully End Node .\n");
    }
    else
    {
        re=start;
        while(re->next!=NULL)
        {
            tr=re;
            re=re->next;
        }
        printf("Deleted Item -> %d\n",re->info);
        tr->next=NULL;
        free(re);
        printf("Deletion is SuccessFully End Node .\n");
    }
}
void DeletedNodeSpecifiedPosition()
{
     struct node *tr,*re;
     int pos,count,i;
     if(start==NULL)
        printf("List Is Empty \n");
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
             printf("Listn cgh ffgjh fgjfgj Is Empty \n");
         }
         else
         {
             printf("Enter Deleted Position -> ");
             scanf("%d \n",&pos);
              if(pos<=1||pos>=count)
                printf("InValid Position \n\n");
             else
             {
                tr=start;
                for(i=1;i<pos-1;i++)
                    tr=tr->next;
                re=tr->next;
                printf("Deleted Node Item =>%d\n",re->info);
                tr->next=re->next;
                re->next->prev=tr;
                free(re);
                printf("The %d Position Node   SuccessFully Deleted .",pos);
             }
         }
     }
}
void TraverseNodeList()
{
    struct node *tr;
    if(start==NULL)
        printf("List is Empty \n\n");
    else
    {
        tr=start;
        printf("LIst IS All Item All -> \n");
        while(tr!=NULL)
        {
            printf("%d \t",tr->info);
            tr=tr->next;
        }
    }
}
