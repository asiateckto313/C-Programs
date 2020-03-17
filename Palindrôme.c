#include <stdio.h>
#include <string.h>

int main()
{
    int n;

int palindrome=1,i,j;
printf("Entrer le nombre de caractere de votre mot.\n");

scanf("%d",&n);
fflush(stdin);

char p[n];
for(i=0;i<n;i++)
{
    printf("Entrer le caractere %d\n",i+1);
    scanf("%c",&p[i]);
    fflush(stdin);
}
p[n]='\0';

printf("la chaine saisie: %s\n", p);

for(i=0;i<n;i++)
    for(j=n-1;j>=0;j--)
    if(p[i] != p[j])  {
        palindrome = 0;
      break;
    }
    else palindrome=1;

printf("palindrome:%d\n",palindrome);

if(palindrome)
    printf("Ce mot est un palindrome.\n");
else
    printf("Ce mot n'est pas un palindrome.\n");
return 0;
}


