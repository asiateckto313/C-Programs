#include <stdio.h>
#include <string.h>
int main(){
char chaine[] = "Cours sur le langage C";
char * str = strchr(chaine, 'o');

if (str != NULL)
{
     /* notation équivalente à str[0], revoyez le chapitre
      sur les tableaux si vous ne vous en rappelez plus */
     printf("%c\n", *str);
}

}
