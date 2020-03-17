#include <stdio.h>
#include <string.h>
int strlength(char*s)
{
int n = 0;
while (s[n] != '\0')
    n++;
return n;
}
/*int main()
{
    char mot[101]; int cpteur_lettre;
    printf("Entrer le mot.\n");
    scanf("%s",mot);
    cpteur_lettre=strlength(mot);
    printf("Le mot %s comprend %d lettre(s).\n",mot,cpteur_lettre);

    return 0;
}*/
int strcompare(char *s1, char *s2)
{
    int n=1; int longueur_s1,longueur_s2,i;
    longueur_s1= strlength(s1);longueur_s2=strlength(s2);
    for(i=0;i<longueur_s1,i<longueur_s2;i++)
        if(s1[i]== s2[i])
        n &= 1;
    else
    {
      n &= 0;
        break;
    }

return n;
}
/*int main()
{
    int yfy; char s1[200],s2[200];
    printf("Entrer les chaine de caracteres .\n");
    scanf("%s ",s1);
    scanf("%s",s2);
    printf("s1:%s  \n",s1);
    printf("s2:%s \n",s2);
    yfy=strcompare(s1,s2);
    if(yfy == 1)
        printf("Les chaines de caracteres sont identiques.\n");
    else
      printf("Elles ne sont pas identiques.\n");

      return 0;
}
*/

int strcopy(char *s1, char *s2)
{
    int longueur_s1=strlength(s1),copie_non_terminee,copie_ok; int i;
    for(i=0;i<longueur_s1;i++)
        s2[i]=s1[i];
    copie_non_terminee=strcompare(s1,s2);
    if(copie_non_terminee ==1)
        copie_ok =1;
    else
        copie_ok=0;
    return copie_ok;
}
/*int main()
{
    char s1[200],s2[200]; int copie;
    printf("Entrer la chaine de caracteres.\n");
    scanf("%s",s1);
    printf("Copie de: %s dans une chaine deuxieme chaine s2.\n",s1);
    copie = strcopy(s1,s2);
    //printf("%s\n",s1);
    printf("s2: %s\n",s2);
    if(copie == 1)
        printf("Copie terminee avec succes.\n");
    else
        printf("Copie terminee avec erreur.\n");

    return 0;
}*/
void strreverse(char *s)
{
    int longueur_s= strlength(s); char s_inverse[longueur_s];
    int i;
    s_inverse[longueur_s]='\0';
    for(i=longueur_s-1;i>=0;i--)

        s_inverse[i]= s[longueur_s - 1 - i];

    printf("Chaine inversee: %s",s_inverse);
}
int main()
{
    char p[100];
    printf("Entrer la chaine de caracteres.\n");
    scanf("%s",p);
    strreverse(p);

    return 0;
}
