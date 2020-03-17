#include <stdio.h>
#include <math.h>

int somme_racine(int n)
{
double somme=0.0;int i;
for (i=1;i<=n;i++)
{
   //printf("%d",sqrt(i));
somme +=sqrt(i) ;

}

printf("La somme des racines allant de 1 jusqu'a %d est: %g",n,somme);
}
int main()
{
int n;
printf("Entrer le nombre n.(n.0)\n");
scanf("%d",&n);
somme_racine(n);
return 0;
}
