#include<stdio.h>

int main(){
    int n,s=0;
    printf("entrer la valeur de n :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        s=s+i;
    }
     
    printf("somme  = %d \n",s);
    return 0;
}
