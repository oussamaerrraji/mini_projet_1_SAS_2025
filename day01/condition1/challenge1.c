#include<stdio.h>

int main (){

    int n;
    printf("entrer le nombre n : ");
    scanf("%d",&n);
    if(n%2==0){
        printf("le nombre %d est paire ",n);
    }else{
        printf("le nombre %d est impaire ",n);
    }
    return 0;
}