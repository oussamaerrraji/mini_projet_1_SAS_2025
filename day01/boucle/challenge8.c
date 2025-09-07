#include<stdio.h>

int main(){
    int n;
    int F1=0,F2=1,S;
    printf("entre la valeur de n : ");
    scanf("%d",&n);
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
    return 0;


}
