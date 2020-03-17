#include<stdio.h>
int main()
{
    int n,i,y;
int palindrome(char p[], char t[]);
void inverser(char p[], char t[]);


printf("Bienvenu dans le program #Palindrome_par_LEBEAU\n");
printf("Vous devrez saisir un mot puis nous verifirons que ce dernier est un palindrome\n");
printf("Preciser le nombre de lettre que comprte le mot a tester\n");
scanf("%d",&n);
fflush(stdin);

char p[n+1]; char t[n+1];

printf("Saisir l mot a tester lettre par lettre\n");
for(i=0; i<=n-1;i++)
{
scanf("%c",&p[i]);
fflush(stdin);
}
p[n]='\0';
inverser(p,t);

printf("%s",palindrome(p,t)==0?"ko":"ok");
}

//foncions

//palindrome
int palindrome (char p[],char *t)
{
    int i;
    for(i=0; i<=strlen(p)-1;i++)
    {
        if (p[i]!=t[i]){
           return 0;
        }
    }
    return 1;
}

//inverser le mot
void inverser (char p[], char t[])
{
    int i; int n= strlen(p);
    for (i=0; i<=n-1;i++)
{
    t[n-1-i]=p[i];
}
}



