#include <stdio.h>

int main()
{
const n= 6;
int tamp,i,j;
int tab[n]; int m = 0;
int min,moyenne,max;
for(i = 0; i<7 ; i++)
{
printf("\nVeuillez entrer la note %d\n",i+1);
//fflush(stdin);
scanf("%d",&tab[i]);
if (i>5)
    break;
}
for (i =0;i < 5 ; i++)
for (j=n; j!=0; j--)
{
    if (tab[j]<tab[j-1])
    {
        tamp = tab[j];
        tab[j]= tab[j -1];
        tab[j-1]= tamp;
    }
}

for (j =1; tab[j]>tab[m]; j++)
{
    min = tab[m];
    if(j>5)
        break;
}
max = tab[6];
moyenne = (tab[0] + tab[1] + tab[2] + tab[3] + tab[4] + tab[5]) + tab[6] / 7;
printf("La moyenne minimale de ce tableau est: %d\n", min);
printf("La moyenne generale est : %d\n",moyenne);
printf("La moyenne maximale de ce tableau est : %d\n",max);
return 0;
}

