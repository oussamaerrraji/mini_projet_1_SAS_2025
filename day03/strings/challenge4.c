#include<stdio.h>
#include<string.h>

int main(){
    char chaine1[30];
    char chaine2[30];

    printf("entrer cracter de chaine1 : ");
    scanf(" %s",chaine1);
    printf("entrer cracter de chaine2 : ");
    scanf(" %s",chaine2);

    if(chaine1[30]==chaine2[30]){
        printf("la deux chaine sont egales \n");
    }else{
        printf("la deux chaine sont differantes \n");
    }
    strcat(chaine1,chaine2);
    printf("%s",chaine1);
    
    return 0;
}