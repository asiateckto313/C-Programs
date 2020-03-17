#include <stdio.h>
int premier(int k)
{
int nbre_premier,i;

for( i = 2;i<= k-1; i++)
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
