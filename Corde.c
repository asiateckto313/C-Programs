#include <stdio.h>
int main(){
int boucle;int poids1=0,poids2=0;int i,a;
char *msg1 ="L'équipe %d a un avantage\n";
int x;
scanf("%d",&boucle);
scanf("%d",&a);
poids1+=a;
for(i=2;i<=2*boucle;i++)
{
    scanf("%d",&a);
    if(i%2==0)
    poids2+=a;
    else
    poids1+=a;
}
if(poids1>poids2)
x=1;
else
x=2;
printf(msg1,x);
printf("Poids total pour l'équipe 1 : %d\n",poids1);
printf("Poids total pour l'équipe 2 : %d\n",poids2);
return 0;
}
