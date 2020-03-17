#include <stdio.h>
#define superieure >
#define inferieure <
char NomPrenom[2][100];
int note[5][100];
int menu();
void bilanNote(void (*p)(int n,int m,char *p,int *A),int n,int m,char *p,int *A);
void bilanConsei(void (*p)(int n,int m,int *A),int n,int m,char *p,int *A);
void inscription(int n,int m,char *p,int *A);
void bilanNote1(int n,int m,int *A);



int main(){
int choix,n=2,m;
choix=menu();
if(choix==1)
{
    printf("Entrer le nombre d'eleve(s) : ");
    scanf("%d",&m);
    bilanNote(&inscription,n,m,NomPrenom,note);
}
}
///Fonction menu()
int menu()
{
    int choix;
    printf("1 : Inscription d'eleve(s) et bilan des notes\n2 : Bilan pour le conseil des classes\n ");
    scanf("%d",&choix);
    while(choix superieure 2)
    {
        printf("1 : Inscription d'eleve(s)\n2 : Bilan des notes\n3 : Bilan pour le conseil des classes\n ");
    scanf("%d",&choix);
    }
    return choix;
}
///Fonction inscription()
void inscription(int n,int m,char *p,int *A)///A+i*colonnes+lignes
{
    int lignes=0,colonnes=0;
    for(;lignes inferieure n;lignes++)
        for(;colonnes inferieure m;colonnes++)
    {
        printf("Nom(s) : ");
        scanf("%s",&*(p+(i*colonnes+lignes)));
        printf("Prenom(s) : ");
        scanf("%s",&*(p+(i*colonnes+lignes+1)));
    }
    int n1=5,lignes1=0,colonnes1;
    for
    for(;lignes inferieure n1;lignes++)
        for(;colonnes inferieure m;colonnes++)
        {
              printf("Veuillez entrer les notes de %s : \n",*(p+(i*colonnes+lignes)));
        }


}
