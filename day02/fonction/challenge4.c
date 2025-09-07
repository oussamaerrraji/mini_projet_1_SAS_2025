#include<stdio.h>
int trouverMin(int a, int b){
    if(a>b){
        int min=b;
        return min;
    }
}

int main(){

    int x,y;
    printf("entrer premier nombre : ");
    scanf("%d",&x);
    printf("entrer deuxieme nombre : ");
    scanf("%d",&y);
    int resultat = trouverMin(x,y);
    printf("la minimum entre %d et %d est : %d",x,y,resultat);
    return 0;
}