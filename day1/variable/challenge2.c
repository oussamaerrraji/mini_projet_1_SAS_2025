#include<stdio.h>

int main(){
    int C;
    float K;
    printf("entrer valeur de temperature en Celsius : ");
    scanf("%d",&C);
    K = C + 273.15;
    printf("K = %.2f",K);
    return 0;
}