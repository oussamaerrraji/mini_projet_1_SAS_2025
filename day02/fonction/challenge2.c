#include<stdio.h>
int produit(int a, int b){
    int produit = a*b;
    return a*b;
}

int main(){

    int x,y;
    printf("entrer la premire nombre : ");
    scanf("%d",&x);
    printf("entrer la deuxieme nombre : ");
    scanf("%d",&y);
    int resultat = produit (x,y);

    printf("la produit de %d et %d est : %d\n",x,y,resultat);
    return 0;


}