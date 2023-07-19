#include<stdio.h>
#include<string.h>

struct student{
    int roll;
    char name[30];
    float fess;

};
int main(){
    int n,i;
   struct student s1[20];
   printf("Enter Stdent Capacity");
   scanf("%d",&n);
 //  s=(struct student*)malloc(sizeof(struct student)*n);
   printf("All student data =>\n");
   for(i=0;i<n;i++){
    printf("Enter STudent Roll =>");
    scanf("%d",&s1[i].roll);

    printf("Enter STudent NAMe =>");
    scanf("%s",&s1[i].name);

    printf("Enter STudent Fess =>");
    scanf("%d",&s1[i].fess);
   }
   printf("all stdentd Data =>");

   for(i=0;i<n;i++){
    printf("Enter STudent Roll =>%d",s1[i].roll);


    printf("Enter STudent NAMe => %s"s1[i].name);


    printf("Enter STudent Fess =>%d"s1[i].fess);

   }
    return 0;
}
