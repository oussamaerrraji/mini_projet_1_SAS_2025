#include<stdio.h>

int main(){
    int C;
    printf("entrer la temperatur en celsius : ");
    scanf("%d",&C);
    if(C<0){
        printf("solide");
    }else if(C>0 && C<=100){
        printf("liquide");
    }else{
        printf("gaze");
    }
    return 0;
}