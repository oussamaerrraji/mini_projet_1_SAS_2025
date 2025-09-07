#include<stdio.h>

int main(){

    int nombre;
    printf("entrer nombre n : ");
    scanf("%d",&nombre);
    int inverse=0;
    do{
        inverse = inverse * 10 + (nombre % 10);
        nombre = nombre/10;
    }while(nombre!=0);
    printf("%d",inverse);
 
    return 0;
}