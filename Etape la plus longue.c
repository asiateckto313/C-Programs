#include <stdio.h>

int main(){
int  n,j,tamp,i;
scanf("%d",&n);
int tab[n];

for(i=1;i<=n;i++)
    scanf("%d",&tab[i]);
int max=tab[1],min=tab[1];
    for(i=2;i<=n;i++)
    {
        if(tab[i]>max)
            max=tab[i];
        else
            max=max;
    }
//Tri-bulles
   /* for(i=1;i<n;i++)
    for(j=n;j>=(i+1);j--)
    {


        if (tab[j]<tab[j-1])
            {
                tamp=tab[j];
                tab[j]=tab[j-1];
                tab[j-1]=tamp;
            }
            }*/
printf("%d\n",max);
}
