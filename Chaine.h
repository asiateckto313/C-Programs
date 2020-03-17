#ifndef CHAINE_H_INCLUDED
#define CHAINE_H_INCLUDED

int strlength(char*s)
{
int n = 0;
while (s[n] != '\0')
    n++;
return n;
}


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


void strreverse(char *s)
{
    int longueur_s= strlength(s); char s_inverse[longueur_s];
    int i;
    s_inverse[longueur_s]='\0';
    for(i=longueur_s-1;i>=0;i--)

        s_inverse[i]= s[longueur_s - 1 - i];

    printf("Chaine inversee: %s",s_inverse);
}

#endif // CHAINE_H_INCLUDED
