#include<stdio.h>

int main (){

   char c;
   printf("entrer un caracter : ");
   scanf("%c",&c);
   switch(c){
    case 'a' : 
    case 'e' : 
    case 'i' :
    case 'o' :
    case 'u' :
    case 'y' :
    printf("%c est une voyelle ",c);
      break;
        
        default : printf("%c n est pas une voyelle ");
        break;
   }

    return 0;

}
