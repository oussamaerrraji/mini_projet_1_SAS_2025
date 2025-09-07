#include<stdio.h>

float calculerMoyenne(float notes[], int nbr_etudiant){
      float somme = 0;
for(int i = 0; i<nbr_etudiant;i++){
    somme+=notes[i];
}
return somme /nbr_etudiant;
}
int trouverMax(float notes[], int nbr_etudiant){
    int max = notes[0];
    for(int i = 0; i<nbr_etudiant;i++){
        if(notes[i]> max){
            max = notes[i];
        }
    }
    return max;
}
int trouverMin(float notes[], int nbr_etudiant){
    int min = notes[0];
    for(int i = 0; i<nbr_etudiant;i++){
        if(notes[i]< min){
            min = notes[i];
        }
    }
    return min;
}
int compterReussites(float notes[], int nbr_etudiant){
    int compteur = 0;
    for(int i = 0; i<nbr_etudiant;i++){
        if(notes[i]>=10){
            compteur++;
        }
    }
    return compteur;
}


int main(){

    int nbr_etudiant,i;
    // saisie du nombre d'etudiantes max 30
    
    do{
         printf("entrer lo nombre etudiant max 30 : ");
         scanf("%d",&nbr_etudiant);
         
         if(nbr_etudiant<=0 || nbr_etudiant>30){
         printf("saisir nbr etudiant invalid \n");
         }
    }while(nbr_etudiant<=0 || nbr_etudiant>30);

    //saisie des notes

    float notes[nbr_etudiant];
    
       for( i=0;i<nbr_etudiant;i++){
        printf("note etudiant %d : ",i+1);
        scanf("%f",&notes[i]);
    }

    // traitement et affichage
    float moyenne = calculerMoyenne(notes, nbr_etudiant);
    int max = trouverMax(notes, nbr_etudiant);
    int min = trouverMin(notes, nbr_etudiant);
    int reussites = compterReussites(notes, nbr_etudiant);


    printf("affichage resultant :  \n ");
    printf("moyenne de la classe ; %.2f\n",moyenne);
    printf("note maximale : %d\n",max);
    printf("note minimale : %d\n",min);
    printf("nombre d'etudiants reussites : %d\n",reussites);


     
  
   return 0;
}
