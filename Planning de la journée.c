#include <stdio.h>
int main(){
int position,i,a,boucle,nbre_village=0;
int difference;
scanf("%d\n%d",&position,&boucle);
for(i=1;i<=boucle;i++)
    {
        scanf("%d",&a);
        difference= position - a;
        if(difference<0)
        difference = -1*difference;
        if(difference<=50)
        nbre_village+=1;

    }
    printf("%d\n",nbre_village);
}
