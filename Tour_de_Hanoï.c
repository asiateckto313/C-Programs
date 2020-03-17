#include <stdio.h>
//Avec n le nombre de disque
//TO: Tour d'origine
//TD:Tour de destination
void DEPLACER(int n,int TO,int T_intermediaire,int TD)
{
    if (n== 1)
    printf("Deplacer le disque %d de la tour %d a la tour %d\n",n,TO,TD);
    else
    {
    DEPLACER((n-1),TO,TD,T_intermediaire);
    printf("Deplacer le disque %d de la tour %d a la tour %d.\n\n",n,TO,TD);
    DEPLACER((n-1),T_intermediaire,TO,TD);
    }
}
int main()
{
int n,TO,T_intermediaire,TD;
printf("Les trois tours sont numerotees de 1 a 3.\n");
printf("Entrer les parametres (nombre de disque,tour d'origine,tour intermediaire,tour de destination).\n");
scanf("%d,%d,%d,%d",&n,&TO,&T_intermediaire,&TD);
DEPLACER(n,TO,T_intermediaire,TD);
return 0;
}
