#include <stdio.h>
#include "Chaine.h"
/*Nom_etudiant: TATI
Prénom_étudiant: L. Paul-Marie
*/
void empiler(char *tab,char *car)
{
    int i,j,longueur_tab;
    char pile[100];
car[strlength(car)]='\0';
longueur_tab=strlength(tab);
for(i=0,j=longueur_tab+1;i<=longueur_tab,j<strlength(car);i++)
    pile[j]=car[j];
    pile[i]=tab[i];

}
char depiler(char *tab)
{
    char car[100];int i;char tab_inverse[100];
   //empiler(tab,car);
   tab_inverse[strlength(tab)]='\0';
   printf("Entrer a nouveau les parametres precedents.\n");
   scanf("%s%s",tab,car);
for(i=strlength(tab)-1;i>=0;i--)
switch (tab[i])
{
case '(': tab_inverse[i]=')';
break;

case '[': tab_inverse[i]= ']';
break;

case '{': tab_inverse[i]= '}';
break;
}
int j;
for(i=0;i<strlength(tab_inverse);i++)
    car[i+strlength(car)]=tab_inverse[i] ;
    //printf("Car: %s",car);
printf("Chaine equilibree: %s,%s",tab,car);
}

int main()
{

    char tab[100]; char car[100];
printf("Entrer les parametres suivants (parametre ouvrant,chaine de caractere).\n");
scanf("%s,%s",tab,car);
    empiler(tab,car);
if(tab=='\0')
    printf("Chaine equilibree: %s",car);
else
    depiler(tab);

return 0;
}
/*Nom_etudiant: TATI
Prénom_étudiant: L. Paul-Marie
*/
