#include <stdio.h>
int main(){
int nbre_depart,nbre_a_add,boucle;
scanf("%d\n%d\n%d",&nbre_depart,&nbre_a_add,&boucle);
int i,sum;sum=nbre_depart + nbre_a_add;
if(boucle==0)
printf("%d\n",nbre_depart);
else
printf("%d\n%d\n",nbre_depart,sum);
for(i=1;i<boucle;i++)
{
sum+=nbre_a_add;
printf("%d\n",sum);
}
return 0;
}
