#include <stdio.h>
int main(){
int abs_min,abs_max,ord_max,ord_min;
int nbre_maison,resultat=0,i;
scanf("%d\n%d\n%d\n%d",&abs_min,&abs_max,&ord_min,&ord_max);
scanf("%d",&nbre_maison);
int x[nbre_maison],y[nbre_maison];
for(i=1;i<=nbre_maison;i++)
{
scanf("%d\n%d",&x[i],&y[i]);
if ((x[i]>=abs_min && x[i]<=abs_max) && (y[i]>=ord_min && y[i]<=ord_max))
    resultat+=1;
    else
    resultat = resultat;
}
printf("%d\n",resultat);

}
