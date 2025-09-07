#include<stdio.h>

int main(){

    int n;
    
    printf("entrer le nombre n : ");
    scanf("%d",&n);
    printf("Nombres premiers entre 1 et %d :\n", n);
    for(int i=2;i<=n;i++){
        int p=1;
       for(int j=2;j<i;j++){
        if(i%j==0){
            p=0;
            break;
        }
       }
       if(p==1){
        printf("%d ",i);
       }

    }
    
    return 0;
}