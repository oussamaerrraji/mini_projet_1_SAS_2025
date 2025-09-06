#include<stdio.h>
#include<math.h>

int main(){
    int a,b,c,delta;
    float x1,x2,x3;

    printf("entre la valeur de a :");
    scanf("%d",&a);
    printf("entre la valeur de b :");
    scanf("%d",&b);
    printf("entre la valeur de c :");
    scanf("%d",&c);
    delta = b*b - 4*a*c;
    if(delta>0){
        printf("existes deux solution : \n");
        x1 = (-b+sqrt(delta))/2*a;
        x2 = (-b-sqrt(delta))/2*a;
        printf("x1 = %.2f\n",x1);
        printf("x2 = %.2f\n",x2);
    }else if(delta == 0){
        printf("existe un solution : \n");
        x3 = -b/2*a;
        printf("x3 = %.2f",x3);
    }else{
        printf("soluion erreur : ");
    }
    
    return 0;

}