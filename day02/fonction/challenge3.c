#include<stdio.h>
int trouverMax(int a, int b){
    if(a<b){
        int max=b;
        return max;
    }
}

int main(){

    int x,y;
    printf("entrer premier nombre : ");
    scanf("%d",&x);
    printf("entrer deuxieme nombre : ");
    scanf("%d",&y);
    int resultat = trouverMax(x,y);
    printf("maximum entre %d et %d est : %d",x,y,resultat);
    return 0;
}