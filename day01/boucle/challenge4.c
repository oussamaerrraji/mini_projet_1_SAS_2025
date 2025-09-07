#include<stdio.h>

int main(){
    int n;
    printf("entrer valeur de n : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("%d ",2*i+1);
    }
    
    return 0;
}