#include<stdio.h>
#include<string.h>

int main(){
    char chaine1[30],chaine2[30];
    
    int longeur;
    
    printf("entrer chaine 1 de caracter : ");
    scanf("%s",chaine1);
    printf("entrer chaine 2 de caracter : ");
    scanf("%s\n",chaine2);
    strcat(chaine1,chaine2);
    printf("%s",chaine1);
    longeur = sizeof(chaine1)/4;
    printf("size = %d\n",longeur);
    return 0;

}