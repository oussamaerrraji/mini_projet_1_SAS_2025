#include<stdio.h>

int main (){

    int taille;
    int a;
    printf("entrer la taille de tableau : ");
    scanf("%d",&taille);
    int T[taille];
    printf("saisire les elements du tableau :\n");
    for(int i = 0;i<taille ; i++){
        printf("T[%d] = ",i);
        scanf("%d",&T[i]);
    }
    printf("entrer la valeur de a : ");
    scanf("%d",&a);
    int compte=0;
    for(int i = 0;i<taille;i++){
        if(T[i]>a){
            compte++;
        }
    }
    printf("nombre des elements sup de valeur de %d est : %d",a,compte);
    
    return 0;

}