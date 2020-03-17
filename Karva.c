#include <stdio.h>
int main(){
int boucle;int i;
scanf("%d",&boucle);
int resultat[boucle];
for(i=1;i<=boucle;i++)
{
    int poids,age,longueur,hauteur;
    scanf("%d\n%d\n%d\n%d",&poids,&age,&longueur,&hauteur);
    resultat[i]=(longueur * hauteur) + poids;
}
for(i=1;i<=boucle;i++)
    printf("%d\n",resultat[i]);
}
