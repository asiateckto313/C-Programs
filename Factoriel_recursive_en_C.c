#include <stdio.h>
int factoriel(int k)
{
    int i,tamp;
if(k == 0 || k == 1)
    tamp = 1;
else
    tamp = k * factoriel(k-1);
return tamp;
}

int main()
{
int n;
printf("Bienvenue dans ce programme\n Nous calculons la foctoriel d'un nombre.\n");
printf("Veuillez entrer le nombre.\n");
scanf("%d",&n);

printf("Le factoriel de %d est : %d",n,factoriel(n));
return 0;
}
