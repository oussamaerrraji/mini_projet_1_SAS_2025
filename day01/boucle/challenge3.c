#include<stdio.h>

int main(){
    int n,s;
    printf("entrer lo nombre n : "),
    scanf("%d",&n);
    s=0;
    for(int i=1;i<=n;i++){
        s=s+i;
    }
    printf("somme = %d",s);
    return 0;
}