#include<stdio.h>
int fibonacci(int n){
    int F1=0,F2=1,S;
        for(int i=0;i<n;i++){
        if(i==0){
            printf("%d",F1);
        }else if(i==1){
            printf("%d",F2);
        }else{
             S=F1+F2;
            printf("%d",S);
            F1=F2;
            F2=S;
        }
        printf(", ");
    }
    return S;
    
}
int fibonacciterme(int n) {
    int a = 0, b = 1, resultat = 0;
    for (int i = 2; i <= n; i++) {
        resultat = a + b;
        a = b;
        b = resultat;
    }

    return resultat;
}

int main(){
    int n;
    printf("entre la valeur de n : ");
    scanf("%d",&n);
    int resultat = fibonacci(n);
    printf(" \n",resultat);
    int resultat1 = fibonacciterme(n);
    printf("Le terme %d de la suite de Fibonacci est : %d\n", n, resultat1);
   
 
    return 0;


}
