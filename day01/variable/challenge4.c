#include<stdio.h>

int main(){
    
    float ms;
    int kmh;
    printf("entrer la vitesse en km/h : ");
    scanf("%d",&kmh);
    ms = kmh * 0.27778;
    printf("%d kmh = %.2f ms\n", kmh, ms);
    return 0;
}