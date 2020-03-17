#include <stdio.h>
#include <stdlib.h>

int main()
{
int n,i,factoriel;
printf("Bienvenue dans ce programme\n Nous calculons la foctoriel d'un nombre.\n");
printf("Veuillez entrer le nombre.\n");
scanf("%d",&n);

if (n == 0 || n == 1)
factoriel = 1;
else
{
    factoriel =1;
for (i=1;i<=n; i++)
factoriel = factoriel*i;
}
printf("Le factoriel de %d est : %d",n,factoriel);
return 0;
}
