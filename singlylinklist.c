#include<stdio.h>
#include<stdlib.h>
 struct node{
     int info;
     struct node *link;
 };
 struct node *start=NULL;
 struct node *createnode();
 void insertfirstnode();
 void traverselist();

int main(){
    int choice;

    while(1){

         printf("Press.\n 1.insert first node\n 2.traverse list \n");
         printf("3.Exit\n Enter Your Choice =>");
         scanf("%d",&choice);

         switch(choice){
         case 1:
             insertfirstnode();
            break;
         case 2:
            traverselist();
            break;

         case 3:
            exit(0);
         default :
            printf("Please || Enter Valid Choice \n");

         }
    }
    return 0;
}

 struct node * createnode(){
     struct node *temp;
     temp=(struct node*)malloc(sizeof(struct node));
     printf("Enter node item :");
     scanf("%d",&temp->info);
     temp->link=NULL;
     return(temp);

 }
 void insertfirstnode(){
     struct node *n;
     n=createnode();
     if(start==NULL)
     start=n;
     else{
        n->link=start;
        start=n;

     }
        printf("new Node Successfully inserted at .");

 }
 void traverselist(){
     struct node *tr;
     if(start==NULL)
        printf("list is empty");
     else{
        printf("the list element are \n");
        tr=start;
        while(tr!=NULL){
            printf("%d \t",tr->info);
            tr=tr->link;
     }
     }
 }
