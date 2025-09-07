#include<stdio.h>

int main(){

    int n;
    printf("entrer  n : ");
    scanf("%d",&n);
    int inverse=0;
    do{
        inverse = inverse * 10 + (n % 10);
        n = n/10;
    }while(n!=0);
    printf("%d",inverse);
 
    return 0;
}