#include<stdio.h>

int main(){
    int km;
    float yards;
    printf("entrer la distance en km : ");
    scanf("%d",&km);
    yards = km * 1093.61;
    printf("K = %.2f",yards);
    return 0;
}