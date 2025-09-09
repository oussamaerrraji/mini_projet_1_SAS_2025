#include<stdio.h>

int main(){
    
    int taille;
    printf("entrer taille de tableau: ");
    scanf("%d",&taille);
    int T[taille];
    printf("saisire les elements du tableau\n");
    for(int i=0;i<taille;i++){
    printf("T[%d] = ",i);
    scanf("%d",&T[i]);
    }
    printf("le nombre impair est \n");
    for(int i = 0;i<taille ;i++){
        if(T[i]%2!=0){
            printf("T[%d] = %d\n",i,T[i]);
        }
    }
    return 0;
}