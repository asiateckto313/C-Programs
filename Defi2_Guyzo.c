#include "LibDeBase.h"
#define ligne 6
#define colonne 6
int max=0;
void saisieDuTableau(int ligne1,int colonne1, int A[ligne][colonne]);
void maximum(int ligne1,int colonne1,int i,int j,int A[i][j]);
int main()
{
    int A[6][6];

    int i,j;
    ///Saisie du tableau 6x6
    for (i=0;i<6;i++)
        for(j=0;j<6;j++)
    {
        printf("A[%d][%d] = ",i,j);
        scanf("%d",&A[i][j]);
    }
    ///
   /* for(i=0;i<6;i++){
        for(j=0;j<6;j++){
int sum=0;
    if((i-1>=0&& j-1>=0)&&(A[i-1][j-1]>=0))
        sum+=A[i-1][j-1];
    if(i-1>=0 && A[i-1][j]>=0)
        sum+=A[i-1][j];
    if((i-1>=0 &&j+1<colonne)&&A[i-1][j+1]>=0)
        sum+=A[i-1][j+1];
    if(A[i][j>=0])
        sum+=A[i][j];
    if((i+1<ligne&&j-1>=0)&& A[i+1][j-1]>=0)
        sum+=A[i+1][j-1];
    if(i+1<ligne && A[i+1][j]>=0)
        sum+=A[i+1][j];
    if((i+1<ligne&& j+1<colonne)&&A[i+1][j+1]>=0)
        sum+=A[i+1][j+1];
    if(sum>max)
        max=sum;
        }
        }
        for(i=0;i<6;i++){
            for(j=0;j<6;j++){
                printf("\t%d",A[i][j]);
            }
            printf("\n");
        }
        printf("\nSans la fonction maximum\n%d\n",max);*/
            for(i=0;i<6;i++){
                for(j=0;j<6;j++){
                        int sum=0;
   if(A[i][j]>=0)
    sum+=A[i][j];
   if(j+1<colonne && A[i][j+1]>=0)
    sum+=A[i][j+1];
   if(j+2<colonne && A[i][j+2]>=0)
    sum+=A[i][j+2];
   if(i+1<ligne && j+1<colonne && A[i+1][j+1]>=0)
    sum+=A[i+1][j+1];
   if(i+2<ligne && A[i+2][j]>=0)
    sum+=A[i+2][j];
   if(i+2<ligne && j+1<colonne && A[i+2][j+1]>=0)
    sum+=A[i+2][j+1];
   if(i+2<ligne && j+2<colonne && A[i+2][j+2]>=0)
    sum+=A[i+2][j+2];
    if(sum>max)
        max=sum;
                //maximum(6,6,i,j,A);
                }
            }
            system("pause");
            for(i=0;i<6;i++){
            for(j=0;j<6;j++){
                printf("\t%d",A[i][j]);
            }
            printf("\n");
        }
system("pause");
            printf("Avec la fonction maximum\n%d\n",max);
return 0;
}
///
void saisieDuTableau(int ligne1,int colonne1, int A[ligne][colonne])
{
    int i,j;
    for (i=0;i<ligne;i++)
        for(j=0;j<colonne;j++)
    {
        printf("A[%d][%d] = ",i,j);
        scanf("%d",&A[i][j]);
    }
}
///
void maximum(int ligne1,int colonne1,int i,int j,int A[i][j])
{
    int sum=0;
   if(A[i][j]>=0)
    sum+=A[i][j];
   if(j+1<colonne && A[i][j+1]>=0)
    sum+=A[i][j+1];
   if(j+2<colonne && A[i][j+2]>=0)
    sum+=A[i][j+2];
   if(i+1<ligne && j+1<colonne && A[i+1][j+1]>=0)
    sum+=A[i+1][j+1];
   if(i+2<ligne && A[i+2][j]>=0)
    sum+=A[i+2][j];
   if(i+2<ligne && j+1<colonne && A[i+2][j+1]>=0)
    sum+=A[i+2][j+1];
   if(i+2<ligne && j+2<colonne && A[i+2][j+2]>=0)
    sum+=A[i+2][j+2];
    if(sum>max)
        max=sum;
}
