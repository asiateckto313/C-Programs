#include <stdio.h>

/*char * trim(char *s){

}*/


int palindrome(char *p)
{
int i,j,plindrome = 1;
int n=strlen(p);

for(i=0;i<k;i++)
for(j=k;j>=0;j--)
{
palindrome(p[i])=p[i];
palindrome(p[j])=p[j];
if((palindrome(p[i])) != (palindrome(p[j])))
{
plindrome = 0;
break;
 }
   }



}
int main()
{
    int i,n;char *p;
   printf("Entrer le nombre de caractere de votre mot.\n");
   scanf("%d",&n);
   fflush(stdin);

   for(i=0;i<n;i++)
  {
    printf("Entrer le caractere %d",i+1);
    scanf("%c",&p[i]);
    fflush(stdin);
 }
    p[n]='\0';
    int plindrome=palindrome(p);
   if(plindrome)
   printf("Le mot: %s est un palindrome.\n",p);
   else
   printf("Le mot: %s n'est pas un palindrome.\n",p);
   return 0;
}

