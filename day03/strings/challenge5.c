#include<stdio.h>
#include <string.h>

int main(){

    char chaine[30];
    int longueur;
    printf("entrer la caracter de chaine : ");
    scanf("%s",chaine);
    longueur = strlen(chaine);
    printf("inverse : ");
    for(int i=longueur -1;i>=0;i--){
        printf("%c",chaine[i]);
    }
    return 0;
}