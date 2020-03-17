#include <stdio.h>
int main()
{
int base_cubes= 17;int nbre_cube_necessaire=0;
int i;
for(i=1;i<=9;i++)
{
  nbre_cube_necessaire+=(base_cubes*base_cubes*base_cubes);

   base_cubes=base_cubes-2;
   }
printf("%d",nbre_cube_necessaire);
scanf("%d",&base_cubes);
return 0;
}
