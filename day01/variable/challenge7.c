#include<stdio.h>
int main(){

    float a,b,c;
    float moyenne;
    
    
    printf("entrer la 1er nombre : ");
    scanf("%f",&a);
    printf("entrer la 2eme nombre : ");
    scanf("%f",&b);
    printf("entrer la 3eme nombre : ");
    scanf("%f",&c);
    //calcule la moyenne 
    moyenne=(a*2+b*3+c*5)/(2+3+5);
    printf("moyenne ponderee est : %.2f",moyenne);
    return 0;
    

}