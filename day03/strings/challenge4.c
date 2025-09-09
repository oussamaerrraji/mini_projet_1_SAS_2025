#include<stdio.h>
#include<string.h>

int main(){
    char chaine1[30];
    char chaine2[30];
    int resultat;
    printf("entrer cracter de chaine1 : ");
    scanf(" %s",chaine1);
    printf("entrer cracter de chaine2 : ");
    scanf(" %s",chaine2);
    resultat = strcmp(chaine1,chaine2);
        if(resultat==0){
            printf("les deux chaine egales ");
        }else
        printf("les deux chaine defferants ");
    return 0;
}