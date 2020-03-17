#include <stdio.h>
int main(){
int i,largeur_socle,boucle;
scanf("%d\n%d",&largeur_socle,&boucle);
int volume = largeur_socle * largeur_socle,sum;
sum=0;
for(i=largeur_socle;i>=boucle;i--)
sum+=i*i;
printf("%d\n",sum);

}
