#include<stdio.h>
float moyenne_par_etudiant(float notes[][30],int nbr_etudiant,int nbr_matier){
    float somme = 0;
    for (int i=0;i<nbr_etudiant;i++){
        for(int j=0;j<nbr_matier;j++){
            somme+=notes[i][j];
        }
         printf("Etudiant %d : %.2f\n", i + 1, somme / nbr_matier);
    }
 
}
float moyenne_par_matier(float notes[][30],int nbr_etudiant,int nbr_matier){
    float somme = 0;
    int j;
    for (int i=0;i<nbr_matier;i++){
        for(int j=0;j<nbr_etudiant;j++){
            somme+=notes[i][j];
        }
       printf("Matiere %d : %.2f\n", j + 1, somme / nbr_etudiant);
    }
    
}

int main(){

    int nbr_etudiant, nbr_matier;
    float notes[30][30];

    printf("entrer nbr_etudiant : ");
    scanf("%d",&nbr_etudiant);
    printf("entrer nbr_matier : ");
    scanf("%d",&nbr_matier);
    
    for(int i=0;i<nbr_etudiant;i++){
        printf("etudiant :%d \n",i+1);
        for(int j=0;j<nbr_matier;j++){
        printf("matier %d : ",j+1);
        scanf("%f",&notes[i][j]);
        }
    }
    // affichage
    printf("moyenne par etudiant \n");
     moyenne_par_etudiant(notes, nbr_etudiant, nbr_matier);
     printf("moyenne par matier \n");
     moyenne_par_matier(notes,nbr_etudiant, nbr_matier);

   return 0;

}