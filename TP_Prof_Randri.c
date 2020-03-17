#include <stdio.h>
void inscription_eleve(int lignes,int colonnes,char* nom[lignes][colonnes]);
void inscription_notes(int lignes,int colonnes,float note[lignes][colonnes]);
void  bilan_note(int lignes,int colonnes,float note[lignes][colonnes]);
int menu();
///Fonction principale
int main(){
    int i,j;
    int eleve,lignes=5;
    char *nom_prenom;
    int *note;
int choix;
choix=menu();
printf("Entrer le nombre d'eleve(s) : ");
scanf("%d",&eleve);
char* Nom_Prenom[2][eleve];
float notes[lignes][eleve];
note=(int*)notes;
nom_prenom=(char*)Nom_Prenom;
inscription_eleve(eleve,eleve,Nom_Prenom);
inscription_notes(eleve,eleve,notes);
printf("\nAppel de la fonction bilan_note\n");
bilan_note(eleve,eleve,notes);

return 0;
}
//Fonction menu
int menu(){
int choix;
printf("1 : Inscription d'eleve(s)\n2 : Bilan des notes\n3 : Bilan pour le conseil de classe\n");
printf("Votre choix : ");
scanf("%d",&choix);
while(choix>3)
{
    printf("Veuillez choisir entre les trois (03) options SVP. Merci\n");
    printf("Votre choix : ");
    scanf("%d",&choix);
}
while(choix!=1)
    {
        printf("Veuillez d'abord inscrire des eleves avant de vouloir et leurs notes ");
        printf("avant de vouloir passer au bilan des notes ou du conseil\n");
        printf("Votre choix : ");
        scanf("%d",&choix);
    }
    return choix;
}
///Fonction inscription eleve
void inscription_eleve(int lignes,int colonnes,char* nom[lignes][colonnes]){
  int i,j;
 if(colonnes==1)
  {
      for(i=0;i<(colonnes);i++)
        {

    for(j=0;j<colonnes;j++)
  {
      printf("\nEleve %d\n",i+1);
      printf("\nNom(s) : ");
      scanf("%s",&nom[i][j]);
      printf("Prenom(s) : ");
      scanf("%s",&nom[i+1][j]);


  }
  }
  }
  else
  {
      for(i=0;i<lignes;i++)
    for(j=0;j<(colonnes);j++)
  {
     printf("\nEleve %d\n",i+1);
      printf("\nNom(s) : ");
      scanf("%s",&nom[i][j]);
      printf("Prenom(s) : ");
      scanf("%s",&nom[i+1][j]);



  }
  }

  //return &Nom_Prenom;
}
  ///Inscription note
 void inscription_notes(int lignes,int colonnes,float note[lignes][colonnes]){
  int i,j;
  if(colonnes==1)
  {
      for(i=0;i<(colonnes);i++)
        {

    for(j=0;j<colonnes;j++)
  {
      printf("\nNote en francais : ");
          scanf("%s",&note[i][j]);
          printf("Note en math: ");
         scanf("%s",&note[i+1][j]);
          printf("Note en Hist-Geo : ");
          scanf("%s",&note[i+2][j]);
          printf("Note en SVT: ");
         scanf("%s",&note[i+3][j]);
          printf("Note en Physiques: ");
          scanf("%s",&note[i+4][j]);


  }
  }
  }
  else
  {
  for(i=0;i<lignes;i++)
  {
      printf("\nNote de l'eleve %d\n",i+1);
      for(j=0;j<(colonnes-1);j++)
      {

          printf("\nNote en francais : ");
          scanf("%s",&note[i][j]);
          printf("Note en math: ");
         scanf("%s",&note[i+1][j]);
          printf("Note en Hist-Geo : ");
          scanf("%s",&note[i+2][j]);
          printf("Note en SVT: ");
         scanf("%s",&note[i+3][j]);
          printf("Note en Physiques: ");
          scanf("%s",&note[i+4][j]);

      }
  }
  }
  //return &notes;
  }
///Fonction bilan note
void  bilan_note(int lignes,int colonnes,float note[lignes][colonnes]){
    int i,j;
    for(i=0;i<lignes;i++)
    for(j=0;j<(colonnes);j++)
    printf("Note[%d][%d] = %.1f\nNote[%d][%d] = %.1f\n",i,j,*(note+(i*colonnes)+j),i+1,j,*(note+((i+1)*colonnes)+j));
/*int i,j;
if(colonnes==1)
{
    for(i=0;i<lignes;i++)
    for(j=0;j<(colonnes);j++)
    printf("%.1f\n%.1f\n",*(note+(i*colonnes)+j),*(note+((i+1)*colonnes)+j));
}
else
{
    for(i=0;i<lignes;i++)
    for(j=0;j<(colonnes-1);j++)
    printf("%.1f\n%.1f\n",*(note+i*colonnes+j),*(note+((i+1)*colonnes)+j));

}*/
}
