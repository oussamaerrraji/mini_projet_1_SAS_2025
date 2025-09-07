#include<stdio.h>

int main(){
    int base, exposant,R;
    printf("entrer base : ");
    scanf("%d",&base);
    printf("entrer exposant : ");
    scanf("%d",&exposant);
    R = 1;
    for(int i=0;i<exposant;i++){
        R=R*base;
    }
    printf("%d^%d = %d",base,exposant,R);
    return 0;


}