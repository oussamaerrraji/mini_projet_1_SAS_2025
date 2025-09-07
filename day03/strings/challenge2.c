#include<stdio.h>
#include <string.h>

int main(){

    char chaine[100];
    printf("entrer la caracter de chaine : ");
    scanf("%s",chaine);

    printf("%zu \n",strlen(chaine));
    return 0;
}

