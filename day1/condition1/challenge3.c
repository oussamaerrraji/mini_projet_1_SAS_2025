#include<stdio.h>
int main(){
    int a,b,somme;
    printf("entrer la valeur de a : ");
    scanf("%d",&a);
    printf("entrer la valeur de b : ");
    scanf("%d",&b);
    if(a == b){
        somme = 3*(a+b);
    }else{
        somme = a+b;
    }
    printf("somme = %d",somme);
    return 0;

}