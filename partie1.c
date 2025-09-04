#include <stdio.h>

int main() {
 int nbr_etudiant;
 do{
 printf("entrer valeur element : ");
 scanf("%d",&nbr_etudiant);
 }while(nbr_etudiant>30);
 int etudiant[nbr_etudiant];
 int i,Somme,compteur;
 int note_elve,note_faible;
 float Moyenne;
 printf("entrer les elements du tableau : \n");
 for(i=0;i<nbr_etudiant;i++){
 printf("etudiant[%d] = ",i);
 scanf("%d",&etudiant[i]);
 }
  note_elve=etudiant[0];
   for(i=0;i<nbr_etudiant;i++){
   if(note_elve<etudiant[i]){
   note_elve=etudiant[i];
   }
   }
   printf("la notes plus elve : %d \n",note_elve);
   
   note_faible=etudiant[0];
   for(i=0;i<nbr_etudiant;i++){
   if(note_faible>etudiant[i]){
   note_faible=etudiant[i];
   }
   }
   printf("la notes plus faible : %d \n",note_faible);
   
 Somme=0;
 for(i=0;i<nbr_etudiant;i++){
     Somme=Somme+etudiant[i];
     
}
Moyenne = Somme/nbr_etudiant;
printf("la sommme  = %d\n",Somme);
printf("la moyenne = %.2f \n",Moyenne);

for(i=0;i<nbr_etudiant;i++){
if(etudiant[i]<10){
    printf("etudiant %d no valide \n",i);
}else
    printf("etudiant %d valide \n",i);
}
printf("combein etudiant valide : \n");
for(i=0;i<nbr_etudiant;i++){
    if(etudiant[i]>=10){
        compteur++;
        
    }
}
   printf("nbr etudiant valid : %d",compteur);
       return 0;
}
