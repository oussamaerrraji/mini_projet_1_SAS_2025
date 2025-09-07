#include<stdio.h>

int main(){
    int n,compt = 0;
    printf("entrer la valeur de n :");
    scanf("%d",&n);
    if(n==0){
        compt = 1;
    }
    else{
        while(n>0){
            n=n/10;
            compt++;
        }
    }
    printf("nombre de chiffre = %d \n",compt);
    return 0;
}
