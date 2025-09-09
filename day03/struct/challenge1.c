#include<stdio.h>

    struct mystruct{

        char nom[30];
        char prenom[30];
        int age;
    };

int main(){

    struct mystruct s1;

    printf(" entrer nom  : ");
    fgets(s1.nom,sizeof(s1.nom),stdin);
    printf(" entrer prenom : ");
    fgets(s1.prenom,sizeof(s1.prenom),stdin);
    printf("entrer age : ");
    scanf("%d",&s1.age);
    return 0;

}