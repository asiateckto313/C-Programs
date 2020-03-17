#include <stdio.h>

int main()
{
int nb_nombres; int nbre_depart=66;int resultat;int i;
scanf("%d",&nb_nombres);
printf("\n");
resultat=nbre_depart;
for(i=1;i<=nb_nombres;i++)
   {
      resultat*=i;
      printf("%d\n",resultat);
      }
      return 0;
}
