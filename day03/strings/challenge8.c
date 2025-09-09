#include<stdio.h>
#include<string.h>


int main(){

    char chaine[100];
    char M;
     
     printf("entrer chaine caracter : ");  
     fgets(chaine,sizeof(chaine),stdin);
     for(int i=0;i<strlen(chaine);i++){
        if(chaine[i]>='A' && chaine[i]<='Z'){
            chaine[i]+=32;
        }
     }
     printf("%s",chaine);  
     return 0;
}