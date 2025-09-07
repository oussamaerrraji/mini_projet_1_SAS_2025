#include<stdio.h>

int main(){
    int n;
    printf("entrer valeur de n : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d ",2*i);
    }
    
    return 0;
}