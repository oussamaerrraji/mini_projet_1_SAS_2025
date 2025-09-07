#include<stdio.h>

int main(){
    int nbr_ligne;
    int i;
    printf("entrer nbr ligne : ");
    scanf("%d",&nbr_ligne);
    
    for(int i=1;i<=nbr_ligne;i++){
        for(int j=1;j<=nbr_ligne-i;j++){
             printf("  ");
    }
    for(int k=1;k<=(2*i-1);k++){
        printf("* ");
    }
    printf("\n");
}
    return 0;
}