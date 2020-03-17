#include <stdio.h>
#include <math.h>

int premier(int k)
{
int nbre_premier,i;
int racine_k;
racine_k= floor(sqrt(k));
for( i = 2;i<= racine_k; i++)
{
    if (k %i == 0)

        nbre_premier = 0;

}
if (nbre_premier== 0)
    printf("Ce nombre n'est pas premier.\n");
    else
printf("Ce nombre est premier.\n");

}

int main()
{
int n;
printf("Entrer le nombre a tester.\n");
scanf("%d",&n);
premier(n);
return 0;
}
