#include<stdio.h>

int main(){

    int n,F=1;
    
    printf("entrer un nombre postive : ");
    scanf("%d",&n);
    if(n>0){
      for(int i=1;i<=n;i++){
        F=F*i;
      }
      printf("%d! = %d\n",n,F);

    }else if(n==0)
    printf(" la factoriele est : 1");
    else
    printf("entrer la valeur postive :");
    
    
    return 0;

}