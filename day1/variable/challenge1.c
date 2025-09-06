#include<stdio.h>

int main(){
  
    char nom[30],prenom[30],sexe[30],adresse[30],email[30];
    int age;

    // saisir information personnelle
    printf("entrer votre nom :  ");
    scanf("%s",nom);

    printf("entrer votre prenom :  ");
    scanf("%s",prenom);

    printf("entrer votre sexe :  ");
    scanf("%s",sexe);

    printf("entrer votre adresse :  ");
    scanf("%s",adresse);

    printf("entrer votre email :  ");
    scanf("%s",email);

    printf("entrer votre age :  ");
    scanf("%d",&age);

    // affichage  les donne
    printf("information personnelle : \n");
    printf("nom : %s\n",nom);
    printf("prenom : %s\n",prenom);
    printf("sexe : %s\n",sexe);
    printf("adresse : %s\n",adresse);
    printf("email : %s\n",email);
    printf("age : %d\n",age);
    

    return 0;

}