#include <stdio.h>
int main(){
int nbre_base=10;int heure_arrivee,resultat=0;
scanf("%d",&heure_arrivee);
if(heure_arrivee==0)
    resultat=nbre_base;
if(heure_arrivee > 0)
    resultat = nbre_base + (heure_arrivee * 5);
    if(resultat>53)
        resultat=53;
        printf("%d\n",resultat);
}
