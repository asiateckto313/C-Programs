#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int j=0;
int *p;
int max(int n,int m,int A[n][m]);
float moyenne(int n,int m,int A[n][m]);
float ecartype(int n,int m,int A[n][m],float moyenn);
///void mode(int n, int m ,int A[n][m],int maxi);

int main(){
int maxi,i;
int *p;
float moyenn,ecartyp;
int A[2][6]={{2,5,8,1,4,13},{1,8,2,10,9,10}};
printf("Appel de la fonction max\n");
maxi=max(2,6,A);
printf("max = %d\n",maxi);
/*printf("Appel de la fonction Mode\n");
mode(2,6,A,maxi);
printf("Les modes sont:\n");
for(i=0;i<j;i++)
    printf("%d\n",*(p+i));*/
printf("\nAppel de la fonction moyenne\n");
moyenn=moyenne(2,6,A);
printf("Moyenne = %.2f\n",moyenn);
printf("Appel de la fonction ecart type\n");
ecartyp=ecartype(2,6,A,moyenn);
printf("Ecart type = %.2f\n",ecartyp);

return 0;
}

///Fonction moyenne
float moyenne(int n,int m,int A[n][m])
{
    int ligne=0,col;
    int effectif=0;
    float m1=0.0,moy=0.0;
    for(col=0;col<m;col++)
    {
        m1+=(A[ligne][col]*A[ligne+1][col]);
        effectif+=A[ligne+1][col];
    }
    moy=m1/effectif;
    return moy;
}
///Fonction max
int max(int n,int m,int A[n][m]){
int i=0,col=0;
int maxi=0;
for(col=0;col<m;col++)
{
    if(maxi<A[i+1][col])
    maxi=A[i+1][col];
}
return maxi;
}

///fonction ecartype
float ecartype(int n,int m,int A[n][m],float moyenn)
{
    int col=0,ligne=0;
    int effectif=0;
    float ecar=0.0,var=0.0;
    for(col=0;col<m;col++)
    {
        effectif+=A[ligne+1][col];
        var+=(A[ligne][col]*A[ligne][col]*A[ligne+1][col]);
    }
    var=var/effectif;
    var=var-(moyenn*moyenn);
    ecar=sqrt(var);
    return ecar;
    }
void mode(int n,int m,int A[n][m],int maxi)
{
    int i=0,col=0;
    int k=0;
    for(col=0;col<m;col++)
    {
        if(maxi==A[i+1][col])
            j++;
    }
    p=(int *)malloc(j*sizeof(int));
    for(i=0;i<j;i++)
    {
        for(col=0;col<m;col++)
    {
        if(maxi==A[k+1][col])
            *(p+i)=A[k][col];
    }
    }

}
