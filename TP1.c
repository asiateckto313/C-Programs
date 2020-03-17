#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#define n 100
///Nous supposons que chaque élèves n'a qu'une seule note dans une matière
float francais[100],math[100],HistG[100],svt[100],phys[100];
char* nom[100];char* prenom[100];
int menu();
void inscription_eleve(int m,char* nom[m],char* prenom[m]);
void inscription_notes(int m,float francais[m],float math[m],float HistG[m],float svt[m],float phys[m]);
///void bilan_note1(int m,char *p, char *p1,float *fr,float *maths,float *histoire,float *Svt,float *Physiques);
void bilan_note(int m,char* nom[m], char* prenom[m],float francais[m],float math[m],float HistG[m],float svt[m],float phys[m]);

int main(){
    int m,i;
    int choix;
    choix=menu();
    float *fr,*maths,*histoire,*Svt,*Physiques;
    printf("Entrer le nombre d'eleves a ajouter : ");
    scanf("%d",&m);
    /*char *p,*p1;
    p=nom;
    p1=prenom;
fr=francais;
maths=math;
histoire=HistG;
Svt=svt;
Physiques=phys;*/
    inscription_eleve(m,nom,prenom);
    inscription_notes(m,francais,math,HistG,svt,phys);
printf("\nAppel de la fonction bilan_note\n");
    bilan_note(m,nom,prenom,francais,math,HistG,svt,phys);
return 0;
}
///fonction menu
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
    while(choix!=1)
    {
        printf("Veuillez d'abord inscrire des eleves et leurs notes ");
        printf("avant de vouloir passer au bilan des notes ou du conseil\n");
        scanf("%d",&choix);
    }
}
return choix;
}
///Fonction inscription
void inscription_eleve(int m,char* nom[m],char* prenom[m]){
    int i;
    float moyenne[m];
///Saisie des differents champs demandés
for(i=0;i<m;i++)
{
    printf("\nVeuillez remplir les champs suivants : \n");
    printf("Nom(s) : ");
    scanf("%s",&nom[i]);
    printf("Prenom(s) : ");
    scanf("%s",&prenom[i]);
}

}

void inscription_notes(int m,float francais[m],float math[m],float HistG[m],float svt[m],float phys[m])
{
    int i;
    for(i=0;i<m;i++)
    {
        printf("Note en Francais : ");
        scanf("%f",&francais[i]);
        printf("Note en Math : ");
        scanf("%f",&math[i]);
        printf("Note en Hist-Geo : ");
        scanf("%f",&HistG[i]);
        printf("Note en SVT : ");
        scanf("%f",&svt[i]);
        printf("Note en Physiques : ");
        scanf("%f",&phys[i]);
    }
}
///Fonction bilan note
void bilan_note(int m,char* nom[m], char* prenom[m],float francais[m],float math[m],float HistG[m],float svt[m],float phys[m]){
    int i;
float moyenne[m];
 for(i=0;i<m;i++)

        moyenne[i]=(francais[i]+math[i]+HistG[i]+svt[i]+phys[i])/5;

    for(i=0;i<m;i++)
    {
        printf("Nom(s)\tPrenom(s)\tFrancais\tMath\tHG\tSVT\tPHYS\tMoyenne\n");
        printf("%c \t%c",nom[i],prenom[i]);
        printf("\t\t%.2f\t\t%.2f",francais[i],math[i]);
        printf("\t%.1f\t%.1f",HistG[i],svt[i]);
        printf("\t%.1f\t%.1f\n",phys[i],moyenne[i]);

    }

return ;
}
