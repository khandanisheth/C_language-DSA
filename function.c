#include <stdio.h>


struct spieler{
    int roll;
    float fess;
    char name[10];


};
int main()
{

    int i,anzahl=5;

    for(i=0;i<anzahl;i++){
      struct spieler sp[i];
    printf("Struct fuer Spieler_%d wurde erzeugt\n", i);

    printf("roll: ");
    scanf("%d",&sp[i].roll);

    printf("fess: ");
    scanf("%f",&sp[i].fess);



    printf("Name: ");
    scanf("%s",&sp[i].name);


}
 for(i=0;i<anzahl;i++){
      struct spieler sp[i];
    printf("  Spieler_%d wurde erzeugt\n", i);
     printf("%d\n",sp[i].roll);
       printf("%f\n",sp[i].fess);
        printf("%s\n",sp[i].name);
 }



/*for(i=0;i<anzahl;i++){
      struct spieler sp[i];
    printf("Struct fuer Spieler_%d wurde erzeugt\n", i);
    getchar();
    printf("Name: ");
    scanf("%s",sp[i].fess);

    printf("%s\n",sp[i].fess);
}

for(i=0;i<anzahl;i++){
      struct spieler sp[i];
    printf("Struct fuer Spieler_%d wurde erzeugt\n", i);
    getchar();
    printf("Name: ");
    scanf("%s",sp[i].name);

    printf("%s\n",sp[i].name);
}*/
    return 0;
}
