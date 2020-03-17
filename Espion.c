#include <stdio.h>
int main(){
int debut_date,fin_date;int boucle,i;
scanf("%d\n%d\n%d",&debut_date,&fin_date,&boucle);
int tab[boucle],resultat=0;
for (i=1;i<=boucle;i++)
scanf("%d",&tab[i]);
for (i=1;i<=boucle;i++)
{
    if((tab[i]>=6) && (tab[i]<=10))
    resultat+= 1;
}
printf("%d\n",resultat);
}
