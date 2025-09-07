#include<stdio.h>
int factorielle(int a){
    int factorielle = 1;
    for(int i=1;i<=a;i++){
       factorielle=factorielle*i;
    }
    return factorielle;
}

int main(){
    int n;
    printf("entrer le nombre n : ");
    scanf("%d",&n);

    int resultat = factorielle(n);
    printf("%d! = %d\n",n,resultat);
    return 0;
}