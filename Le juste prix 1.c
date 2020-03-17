#include <stdio.h>
int main(){
int boucle,i,resultat=0;
scanf("%d",&boucle);
if(boucle<=0)
scanf("%d",&boucle);
else
{
  int tab[boucle];int min;
for(i=1;i<=boucle;i++)
scanf("%d",&tab[i]);
min = 1;
for(i=1;i<=boucle;i++)
{
    if (tab[i]<=tab[min])
    {
       resultat = i;
    }

    else
        resultat = resultat;


}


/*for(i=1;i<boucle;i++)
{
    if(tab[i]<tab[i+1])
    resultat=i;
    else
    resultat=i+1;
}*/
printf("%d\n",resultat);
}

}
