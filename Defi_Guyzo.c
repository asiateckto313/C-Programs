#include "LibDeBase.h"
#include "Chaine.h"
#define superieur >
#define inferieur <
FILE *p;
 typedef struct a
    {
        char *nom;
}mot;

int main()
{
 mot mot1,mot2;
 int i,k,nbPaire;
 int l,a=0;
 scanf("%d",&nbPaire);///Nbre de test à effectuer
 char *reponse[nbPaire+1];
  bool OUI=false;
     bool NON=true;///Nous suppposons que les deux mots n'ont aucune lettre en commun
     ///Reinitialisation du fichier "reponse.txt"
     if((p=fopen("reponse.txt","w"))==NULL)
        perror("Impossible de réinitialiser le fichier reponse.txt");
     else
     {
         fprintf(p,"");
         fclose(p);
     }
 ///Debut du / des test(s)
 for(i=0;i<nbPaire;i++)
 {
     OUI=false;
    scanf("%s",&mot1.nom);
 scanf("%s",&mot2.nom);
 for(l=0;l<strlength(mot1.nom);l++){
for(k=0;k<strlength(mot2.nom);k++)
 {
     if(mot1.nom[l]==mot2.nom[k])
          OUI=true;///On se rend compte qu'ils ont finalement une lettre commune
 }
 }
 if(OUI&&NON==true)
 {
     if((p=fopen("reponse.txt","a"))==NULL)
        perror("Erreur de lors de l'ouverture du fichier reponse.txt");
     else
     {
         fprintf(p,"%s\n","YES");
         fclose(p);
     }
 }
 else
 {
     if((p=fopen("reponse.txt","a"))==NULL)
        perror("Erreur de lors de l'ouverture du fichier reponse.txt");
     else
     {
         fprintf(p,"%s\n","NO");
         fclose(p);
     }
 }
}
if((p=fopen("reponse.txt","r"))==NULL)
    perror("Impossible de lire de un fichier inexistant");
else
{
    char nom[30];
    ///Lecture des chaines inscrites dans le fichier
    ///Tant que nous ne sommes pas à la fin du fichier
    do{
        fscanf(p,"%s",&nom);
        printf("%s\n",nom);
    }while(!feof(p));
    fclose(p);
}
return 0;
}
