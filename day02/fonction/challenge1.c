#include<stdio.h>
int somme(int a, int b){
    int somme = a+b;
    return a+b;
}

int main(){

    int x,y;
    printf("entrer la premire nombre : ");
    scanf("%d",&x);
     printf("entrer la deuxieme nombre : ");
    scanf("%d",&y);
    int resultat = somme (x,y);

    printf("la somme de %d et %d est : %d\n",x,y,resultat);
    return 0;


}