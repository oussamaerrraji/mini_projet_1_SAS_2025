#include<stdio.h>
#include<string.h>
#include <ctype.h>

int main (){

    char chaine[100];
    int compte=0;
    char C;
    int sm ;
    do{
        sm = 1;
      printf("entrer chaine caracter : ");  
      fgets(chaine,sizeof(chaine),stdin);
      for (int i =0 ; i<strlen(chaine);i++){
          if(isdigit(chaine[i])&& chaine[i] != ' '){
              sm = 0 ;
              printf("ta kifach !\n");
              break; 
          }
      }
      
    }while(!sm);
       
    
    printf("entrer caracter : ");
    scanf("%c",&C);

    for(int i=0;i<strlen(chaine);i++){
        if(chaine[i]==C){
            compte++;
        }
    }
    printf("caracter %d de fois le caracter apparait dans la chaine %s : ",compte,chaine);
    return 0;
}